#include<iostream>

using namespace std;

main()
{
    int X, Z;
    int i;
    int j = 0;
    int smplX = 0;
    int newX = 0;

    cin >> X;

    top:
    cin >> Z;

    if (Z <= X)
    {
        goto top;
    }else
    {
        for (i=0; i<=X+1; i++)
        {
            smplX = (X+i);
            newX += smplX;
            j++;

            if (newX > Z)
            {
                break;
            }
        }

        if (newX > Z)
        {
            cout << j << endl;
        }
    }

    return 0;
}
