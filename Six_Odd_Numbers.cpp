#include<iostream>

using namespace std;

main()
{
    int X,i;

    cin >> X;

    for (i = X; i <= X+11; i++)
    {
        if ((i%2) != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
