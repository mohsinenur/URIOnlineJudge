#include<iostream>

using namespace std;

main()
{
    int a, b;

    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << "O JOGO DUROU " << 24 << " HORA(S)" << endl;
    }else if(a == 0 && b > 12)
    {
        cout << "O JOGO DUROU " << b << " HORA(S)" << endl;
    }
    else if (a > 12)
    {
        cout << "O JOGO DUROU " << (24 - a) + b << " HORA(S)" << endl;
    }else if (a < 12)
    {
        cout << "O JOGO DUROU " << (12-a) + (b-12) << " HORA(S)" << endl;
    }

    return 0;
}
