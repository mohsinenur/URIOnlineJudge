#include<iostream>

using namespace std;

main()
{
    int X;

    cin >> X;

    for (int i=1; i<=X; i++)
    {
        if (i%2 != 0)
        {
           cout << i << endl;
        }else
        {
            //nothing
        }
    }

    return 0;
}
