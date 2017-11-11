#include<iostream>

using namespace std;

main()
{
    int a, b, c, d, e;
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    //for a
    if (a > 0)
    {
        pos = 1;
        if (a%2 != 0)
        {
            odd = 1;
        }else
        {
            even = 1;
        }
    }else if (a < 0)
    {
        neg = 1;
        if (a%2 != 0)
        {
            odd = 1;
        }else
        {
            even = 1;
        }
    }else
    {
        even = 1;
    }

    //for b
    if (b > 0)
    {
        pos = pos+1;
        if (b%2 != 0)
        {
            odd = odd+1;
        }else
        {
            even = even+1;
        }
    }else if (b < 0)
    {
        neg = neg+1;
        if (b%2 != 0)
        {
            odd = odd+1;
        }else
        {
            even = even+1;
        }
    }else
    {
        even = even+1;
    }

    //for c
    if (c > 0)
    {
        pos = pos+1;
        if (c%2 != 0)
        {
            odd = odd+1;
        }else
        {
            even = even+1;
        }
    }else if (c < 0)
    {
        neg = neg+1;
        if (c%2 != 0)
        {
            odd = odd+1;
        }else
        {
            even = even+1;
        }
    }else
    {
        even = even+1;
    }

    //for d
    if (d > 0 )
    {
        pos = pos+1;
        if (d%2 != 0)
        {
            odd = odd+1;
        }else
        {
            even = even+1;
        }
    }else if (d < 0)
    {
        neg = neg+1;
        if (d%2 != 0)
        {
            odd = odd+1;
        }else
        {
            even = even+1;
        }
    }else
    {
        even = even+1;
    }

    //for e
    if (e > 0)
    {
        pos = pos+1;
        if (e%2 != 0)
        {
            odd = odd+1;
        }else
        {
            even = even+1;
        }
    }else if (e < 0)
    {
        neg = neg+1;
        if (e%2 != 0)
        {
            odd = odd+1;
        }else
        {
            even = even+1;
        }
    }else
    {
        even = even+1;
    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}
