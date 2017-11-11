#include<iostream>

using namespace std;

main()
{
    int M, N, i;
    int sNum = 0;

    begining:
    cin >> M >> N;
    if ((M <= 0) || (N <= 0))
    {

    }else if (M > N)
    {
        int tNum = 0;
        for (i = N; i <= M; i++)
        {
            sNum = i;
            tNum += sNum;
            if (i < M)
            {
                cout << sNum;
                cout << " ";
            }
            else
            {
                cout << sNum;
            }
        }

        cout << " Sum=" << tNum << endl;
        goto begining;
    }else if ((M < N) || (M == N))
    {
        int tNum = 0;
        for (i = M; i <= N; i++)
        {
            sNum = i;
            tNum += sNum;
            if (i < N)
            {
                cout << sNum;
                cout << " ";
            }
            else
            {
                cout << sNum;
            }

        }
        cout << " Sum=" << tNum << endl;
        goto begining;
    }

    return 0;
}
