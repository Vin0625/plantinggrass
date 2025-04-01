#include<stdio.h>
#include <queue>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

int main() {
    int a,c=0;
    cin >> a;
    
    vector<int> result;
    
    for (int i = 0; i < a; i++) {
        int n, m, l;
        int num=0;
        int max = 0;
        int x;
        vector<int> v;
        cin >> n >> m;
        for (int j = 0;j < n;j++) {
            cin >> l;
            if (max < l) {
                max = l;
                x = j;
            }
            v.push_back(l);
        }
        bool it = true;
        int index=x;
        while (it) {
            if (v[x] == max) {
                c=x;
                num++;
                if (x == m) {
                    result.push_back(num);
                    v.clear();
                    it = false;
                    break;
                }
            }
            if (x == ((index-1)%n+n)%n) {
                x = c;
                max--;
                index = x;
                continue;
            }
            x++;
            x %= n;
        }
    }
    for (int i = 0;i < a;i++)
        cout << result[i] << '\n';
    return 0;
}