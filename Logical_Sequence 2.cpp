#include<iostream>

using namespace std;

main()
{
    int X, Y, i;
    int j = 0;


    cin >> X >> Y;

    for (i=1; i<=Y; i++)
    {
        cout << i;
        if (i == X+j)
        {
            cout << endl;
            j = j+X;
        }else
        {
            cout << " ";
        }
    }

    return 0;
}
