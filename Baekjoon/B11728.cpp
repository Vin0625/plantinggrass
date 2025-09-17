#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<int> V1(N);
    vector<int> V2(M);

    for (int i = 0; i < N; i++)
    {
        cin >> V1[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> V2[i];
    }

    int i = 0, j = 0, k = 0;
    vector<int> sum(N + M);
    while (j < N && k < M)
    {
        if (j == N || k == M)
        {
            break;
        }
        else if (V1[j] > V2[k])
        {
            sum[i] = V2[k];
            k++;
        }
        else
        {
            sum[i] = V1[j];
            j++;
        }
        i++;
    }

    while (j<N)
    {
        sum[i++]=V1[j++];
    }
    

    while (k<M)
    {
        sum[i++]=V2[k++];
    }

    for(int s=0;s<sum.size();s++){
        cout << sum[s] << " ";
    }
    
}