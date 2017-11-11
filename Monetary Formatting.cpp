#include<iostream>
using namespace std;
main()
{
    long long dollars;
    int cents;
    while (cin >> dollars)
    {
        cin >> cents;
        int d[10], i;
        long long sDol;
        long long div = 1;
        for(i = 1; i <= i+1; i++)
        {
            sDol = dollars/div;
            d[i] = (dollars/div) % 10;
            div *= 10;
            if(sDol < 10)
                break;
        }


        if(i<4)
        {
            for(int j = i; j >= 1; j--)
            {
                if(j==i)
                {
                    cout << "$";
                }

                cout << d[j];

                if(j == 1)
                {
                    cout << ".";
                    if(cents < 10)
                    {
                        cout << 0 << cents << endl;
                    }else
                    {
                        cout << cents << endl;
                    }
                }
            }
        }else if(i<7)
        {
            for(int j = i; j >= 1; j--)
            {
                if(j==i)
                {
                    cout << "$";
                }
                if(j==3)
                {
                    cout << ",";
                }

                cout << d[j];

                if(j == 1)
                {
                    cout << ".";
                    if(cents < 10)
                    {
                        cout << 0 << cents << endl;
                    }else
                    {
                        cout << cents << endl;
                    }
                }
            }
        }else if(i<10)
        {
            for(int j = i; j >= 1; j--)
            {
                if(j==i)
                {
                    cout << "$";
                }
                if(j==3)
                {
                    cout << ",";
                }
                if(j==6)
                {
                    cout << ",";
                }

                cout << d[j];

                if(j == 1)
                {
                    cout << ".";
                    if(cents < 10)
                    {
                        cout << 0 << cents << endl;
                    }else
                    {
                        cout << cents << endl;
                    }
                }
            }
        }
    }

    return 0;
}
