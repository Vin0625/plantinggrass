#include <iostream>
#include <vector>

using namespace std;

struct B1991
{
    char alpha;
    B1991* parent=nullptr;
    B1991* left=nullptr;
    B1991* right=nullptr;
};

string Preorder(B1991* node,string pre){
    pre.push_back(node->alpha);
    //왼쪽이 있으면 왼쪽 내려감 srting추가
    if(node->left!=nullptr){
        pre=Preorder(node->left,pre);
    }
    //없으면 오른쪽 내려감 string 추가
    if(node->right!=nullptr){
        pre=Preorder(node->right,pre);
    }
    //끝나면 리턴
    return pre;
}
string Inorder(B1991* node,string in){
    //왼쪽이 있으면 왼쪽 내려감 srting추가
    if(node->left!=nullptr){
        in=Inorder(node->left,in);
    }

    in.push_back(node->alpha);

    //없으면 오른쪽 내려감 string 추가
    if(node->right!=nullptr){
        in=Inorder(node->right,in);
    }

    //끝나면 리턴
    return in;
}
string Postorder(B1991* node,string post){
    //왼쪽이 있으면 왼쪽 내려감 srting추가
    if(node->left!=nullptr){
        post=Postorder(node->left,post);
    }

    //없으면 오른쪽 내려감 string 추가
    if(node->right!=nullptr){
        post=Postorder(node->right,post);
    }

    post.push_back(node->alpha);
    //끝나면 리턴
    return post;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    char p;
    char c;
    cin>>n;

    vector<B1991> tree(n);
    string preorder;
    string inorder;
    string postorder;

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if(j==0){
                cin>>p;
                tree[p-65].alpha=p;
            }else if(j==1){
                cin>>c;
                if(c=='.'){
                    continue;
                }
                tree[p-65].left=&tree[c-65];
            }else{
                cin>>c;
                if(c=='.'){
                    continue;
                }
                tree[p-65].right=&tree[c-65];
            }
        }
    }
    
    preorder=Preorder(&tree[0],preorder);
    inorder=Inorder(&tree[0],inorder);
    postorder=Postorder(&tree[0],postorder);
    cout<<preorder<<"\n";
    cout<<inorder<<"\n";
    cout<<postorder;

}