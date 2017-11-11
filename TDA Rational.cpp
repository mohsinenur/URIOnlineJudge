#include<iostream>
using namespace std;
main()
{
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        int X1, X2, Y1, Y2;
        char Sa;
        char Ac;

        cin >> X1 >> Sa >> Y1 >> Ac >> X2 >> Sa >> Y2;

        if(Ac == '+')
        {
            int tmpX1 =  (X1*Y2) + (X2*Y1);
            int tmpY1 =  Y1*Y2;

            for(int j = 2; j <= 999; j++)
            {
                if(tmpX1 % j == 0)
                {
                    if(tmpY1 % j == 0)
                    {
                        tmpX1 = tmpX1 / j;
                        tmpY1 = tmpY1 / j;
                        j = j;
                    }
                }
            }

            if(((X1*Y2) + (X2*Y1) == tmpX1) && (Y1*Y2 == tmpY1))
            {
                cout << (X1*Y2) + (X2*Y1) << "/" << Y1*Y2 << " = " << (X1*Y2) + (X2*Y1) << "/" << Y1*Y2 << endl;
            }else
            {
                cout << (X1*Y2) + (X2*Y1) << "/" << Y1*Y2 << " = " << tmpX1 << "/" << tmpY1 << endl;
            }

        }else if(Ac == '-')
        {
            int tmpX1 =  (X1*Y2) - (X2*Y1);
            int tmpY1 =  Y1*Y2;

            for(int j = 2; j <= 999; j++)
            {
                if(tmpX1 % j == 0)
                {
                    if(tmpY1 % j == 0)
                    {
                        tmpX1 = tmpX1 / j;
                        tmpY1 = tmpY1 / j;
                        j = j;
                    }
                }
            }
            if(((X1*Y2) - (X2*Y1) == tmpX1) && (Y1*Y2 == tmpY1))
            {
                cout << (X1*Y2) - (X2*Y1) << "/" << Y1*Y2 << " = " << (X1*Y2) + (X2*Y1) << "/" << Y1*Y2 << endl;
            }else
            {
                cout << (X1*Y2) - (X2*Y1) << "/" << Y1*Y2 << " = " << tmpX1 << "/" << tmpY1 << endl;
            }

        }else if(Ac == '*')
        {
            int tmpX1 =  X1*X2;
            int tmpY1 =  Y1*Y2;

            for(int j = 2; j <= 999; j++)
            {
                if(tmpX1 % j == 0)
                {
                    if(tmpY1 % j == 0)
                    {
                        tmpX1 = tmpX1 / j;
                        tmpY1 = tmpY1 / j;
                        j = j;
                    }
                }
            }

            if(((X1*X2) == tmpX1) && (Y1*Y2 == tmpY1))
            {
                cout << (X1*X2) << "/" << Y1*Y2 << " = " << (X1*X2) << "/" << Y1*Y2 << endl;
            }else
            {
                cout << X1*X2 << "/" << Y1*Y2 << " = " << tmpX1 << "/" << tmpY1 << endl;
            }

        }else if(Ac == '/')
        {
            int tmpX1 =  X1*Y2;
            int tmpY1 =  Y1*X2;

            for(int j = 2; j <= 9; j++)
            {
                if(tmpX1 % j == 0)
                {
                    if(tmpY1 % j == 0)
                    {
                        tmpX1 = tmpX1 / j;
                        tmpY1 = tmpY1 / j;
                        j = j;
                    }
                }
            }
            if(((X1*Y2) == tmpX1) && (Y1*X2 == tmpY1))
            {
                cout << (X1*Y2) << "/" << Y1*X2 << " = " << (X1*Y2) << "/" << Y1*X2 << endl;
            }else
            {
                cout << X1*Y2 << "/" << Y1*X2 << " = " << tmpX1 << "/" << tmpY1 << endl;
            }
        }
    }

    return 0;
}
