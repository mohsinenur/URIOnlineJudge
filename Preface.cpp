#include<iostream>

using namespace std;

main()
{
    int a, b, quotient, reminder;
    cin >> a;
    cin >> b;

    if (a>0 && b>0)
    {
        quotient = a / b;
        reminder = (quotient -  (a % b));
    }else if (a>0 && b<0)
    {
        quotient = a / b;
        reminder = (a -  (quotient * b));
    }else if (a<0 && b>0)
    {
        quotient = a / b;
        quotient = quotient - 1;
        reminder = (a -  (quotient * b));
    }else
    {
        quotient = a / b;
        reminder = ((a * (-1)) -  (quotient *  (b * (-1))));
    }

    cout << quotient << " " << reminder << endl;

    return 0;
}
