#include <iostream>

using namespace std;

int main()
{
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int A, B, R;
        int NA, NB;
        cin >> A >> B;
        NA = A;
        NB = B;
        while (NB != 0)
        {
            R = NA % NB;
            NA = NB;
            NB = R;
        }
        cout << A * B / NA << "\n";
    }
}