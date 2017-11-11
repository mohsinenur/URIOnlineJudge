#include<iostream>

using namespace std;

main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " eh o maior" << endl;
        }else
        {
            cout << c << " eh o maior" << endl;
        }
    }else if (b > c)
    {
        if (b > a)
        {
            cout << b << " eh o maior" << endl;
        }else
        {
            cout << a << " eh o maior" << endl;
        }
    }else if (c > a)
    {
        if (c > b)
        {
            cout << c << " eh o maior" << endl;
        }else
        {
            cout << b << " eh o maior" << endl;
        }
    }

    return 0;
}
