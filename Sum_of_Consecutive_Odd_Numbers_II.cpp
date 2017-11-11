#include<iostream>

using namespace std;

main()
{
    int N, X, Y, i, j;

    cin >> N;

    for (i = 1; i <= N; i++)
    {
        int sOdd = 0;
        int nOdd = 0;
        cin >> X >> Y;

        if (X > Y)
        {
            for (j = (Y+1); j < X; j++)
            {
                if ((j%2) != 0)
                {
                    sOdd = j;
                    nOdd += sOdd;
                }
            }
            cout << nOdd << endl;
        }else if (X < Y)
        {
            for (j = (X+1); j < Y; j++)
            {
                if ((j%2) != 0)
                {
                    sOdd = j;
                    nOdd += sOdd;
                }
            }
            cout << nOdd << endl;
        }else
        {
            cout << nOdd << endl;
        }
    }

    return 0;
}
