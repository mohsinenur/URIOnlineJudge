#include<iostream>

using namespace std;

main()
{
    int x, y, z;

    cin >> x >> y >> z;

    if (x > y)
    {
        if (x > z)
        {
            if (y > z)
            {
                cout << z << endl;
                cout << y << endl;
                cout << x << endl;
                cout << endl;
                cout << x << endl;
                cout << y << endl;
                cout << z << endl;
            }else
            {
                cout << y << endl;
                cout << z << endl;
                cout << x << endl;
                cout << endl;
                cout << x << endl;
                cout << y << endl;
                cout << z << endl;
            }
        }else
        {
            cout << y << endl;
            cout << x << endl;
            cout << z << endl;
            cout << endl;
            cout << x << endl;
            cout << y << endl;
            cout << z << endl;
        }
    }else if (x < y)
    {
        if (y > z)
        {
           if (x > z)
            {
                cout << z << endl;
                cout << x << endl;
                cout << y << endl;
                cout << endl;
                cout << x << endl;
                cout << y << endl;
                cout << z << endl;
            }else
            {
                cout << x << endl;
                cout << z << endl;
                cout << y << endl;
                cout << endl;
                cout << x << endl;
                cout << y << endl;
                cout << z << endl;
            }
        }else
        {
            cout << x << endl;
            cout << y << endl;
            cout << z << endl;
            cout << endl;
            cout << x << endl;
            cout << y << endl;
            cout << z << endl;
        }
    }else if (x == y)
        {
            if (x > z)
            {
                cout << z << endl;
                cout << y << endl;
                cout << x << endl;
                cout << endl;
                cout << x << endl;
                cout << y << endl;
                cout << z << endl;
            }else
            {
                cout << y << endl;
                cout << x << endl;
                cout << z << endl;
                cout << endl;
                cout << x << endl;
                cout << y << endl;
                cout << z << endl;
            }
        }

    return 0;
}
