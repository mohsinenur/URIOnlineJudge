#include<iostream>

using namespace std;

main()
{
    int X;

    top:
    cin >> X;

    if (X == 0)
    {

    }else
    {
        for (int i=1; i<=X; i++)
        {
            cout << i;
            if (i == X)
            {
                cout << endl;
            }else
            {
                cout << " ";
            }

        }
        goto top;
    }

    return 0;
}
