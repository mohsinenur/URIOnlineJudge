#include<iostream>

using namespace std;

main()
{
    int X, Y;

    cin >> X;
    cin >> Y;

    if (X > Y)
    {
        for (int i = Y+1; i < X; i++)
        {
            if ((i%5) == 2)
            {
                cout << i << endl;
            }else if ((i%5) == 3)
            {
                 cout << i << endl;
            }
        }
    }else if (X < Y)
    {
        for (int i = X+1; i < Y; i++)
        {
            if ((i%5) == 2)
            {
                cout << i << endl;
            }else if ((i%5) == 3)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}
