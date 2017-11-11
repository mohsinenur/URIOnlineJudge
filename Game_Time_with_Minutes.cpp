#include<iostream>

using namespace std;

main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (a == c)
    {
        if (b > d)
        {
            cout << "O JOGO DUROU " << 23 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
        }else if (b < d)
        {
            cout << "O JOGO DUROU " << 0 << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
        }else
        {
            cout << "O JOGO DUROU " << 24 << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
        }
    }else if (a < c)
    {
        if (a < 12 && c < 12)
        {
            if (b > d)
            {
            if ((c-a) == 1)
            {
                cout << "O JOGO DUROU " << 0 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
            }else
            {
                cout << "O JOGO DUROU " << c - a - 1 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
            }

            }else
            {
                cout << "O JOGO DUROU " << c - a << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
            }
        }else if (a < 12 && c > 12)
        {
            if (b > d)
            {
                cout << "O JOGO DUROU " << (12-a) + (c-12) - 1 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
            }else
            {
                cout << "O JOGO DUROU " << (12-a) + (c-12) << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
            }
        }else if (a > 12 && c > 12)
        {

            if (b > d)
            {
                if ((c-a) == 1)
                {
                    cout << "O JOGO DUROU " << 0 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
                }else
                {
                    cout << "O JOGO DUROU " << c - a - 1 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
                }

            }else
            {
                cout << "O JOGO DUROU " << c - a << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
            }
        }
    }else if(a > c)
    {
        if(a > 12 && c > 12)
        {
            if (b > d)
            {
                if((a-c) == 1)
                {
                    cout << "O JOGO DUROU " << 0 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
                }else
                {
                    cout << "O JOGO DUROU " << (24-a) + c - 1 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
                }

            }else
            {
                cout << "O JOGO DUROU " << (24-a) + c << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
            }
        }else if(a > 12 && c < 12)
        {
            if (b > d)
            {
                cout << "O JOGO DUROU " << (24-a) + c - 1 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
            }else
            {
                cout << "O JOGO DUROU " << (24-a) + c << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
            }
        }else if(a < 12 && c < 12)
        {
            if (b > d)
            {
                if((a-c) == 1)
                {
                    cout << "O JOGO DUROU " << 0 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
                }else
                {
                    cout << "O JOGO DUROU " << (24-a) + c -1 << " HORA(S) E " << 60 - (b-d) << " MINUTO(S)" << endl;
                }

            }else
            {
                cout << "O JOGO DUROU " << (24-a) + c << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
            }
        }
    }

    return 0;
}
