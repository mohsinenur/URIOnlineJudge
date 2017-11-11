#include<iostream>

using namespace std;

main()
{
    int x;
    int alcNum = 0;
    int gasNum = 0;
    int dieNum = 0;


    top:
    cin >> x;

    if (x == 1)
    {
        alcNum++;
        goto top;
    }else if (x == 2)
    {
        gasNum++;
        goto top;
    }else if (x == 3)
    {
        dieNum++;
        goto top;
    }else if (x == 4)
    {

    }else
    {
        goto top;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcNum << endl;
    cout << "Gasolina: " << gasNum << endl;
    cout << "Diesel: " << dieNum << endl;

    return 0;
}
