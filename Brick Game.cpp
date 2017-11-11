#include<iostream>

using namespace std;

main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N;

        int n[N], cn, cptn;

        cn = N / 2;

        for ( int j = 0; j < N; j++)
        {
            cin >> n[j];
            if (cn  == j)
                cptn = n[j];

        }

        cout << "Case " << i << ": " << cptn << endl;
    }

    return 0;
}
