#include<iostream>

using namespace std;

main()
{
    int X, Y, i;

    int tNum = 0;

    cin >> X;
    cin >> Y;

    if ((X > Y) && (X > 13))
    {
        for (i = Y; i <= X; i++)
        {
            int sNum = 0;
            if ((i%13) != 0)
            {
                sNum = i;
                tNum += sNum;
            }
        }
        cout << tNum << endl;
    }else if ((X < Y) && (Y > 13))
    {
        for (i = X; i <= Y; i++)
        {
            int sNum = 0;
            if ((i%13) != 0)
            {
                sNum = i;
                tNum += sNum;
            }
        }
        cout << tNum << endl;
    }

    return 0;
}
