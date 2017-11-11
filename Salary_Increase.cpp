#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    float x;
    float mEarn = 0;

    cin >> x;
    cout << fixed;

    if ((x >= 0.00) && (x <= 400.00))
    {
        mEarn = (x*15)/100;
        cout << setprecision(2) << "Novo salario: " << mEarn + x << endl;
        cout << setprecision(2) << "Reajuste ganho: " << mEarn << endl;
        cout << "Em percentual: 15 %" << endl;
    }else if ((x >=400.01) && (x <= 800.00))
    {
        mEarn = (x*12)/100;
        cout << setprecision(2) << "Novo salario: " << mEarn + x << endl;
        cout << setprecision(2) << "Reajuste ganho: " << mEarn << endl;
        cout << "Em percentual: 12 %" << endl;

    }else if ((x >= 800.01) && (x <= 1200.00))
    {
        mEarn = (x*10)/100;
        cout << setprecision(2) << "Novo salario: " << mEarn + x << endl;
        cout << setprecision(2) << "Reajuste ganho: " << mEarn << endl;
        cout << "Em percentual: 10 %" << endl;
    }else if ((x >= 1200.01) && (x <= 2000.00))
    {
        mEarn = (x*7)/100;
        cout << setprecision(2) << "Novo salario: " << mEarn + x << endl;
        cout << setprecision(2) << "Reajuste ganho: " << mEarn << endl;
        cout << "Em percentual: 7 %" << endl;
    }else if (x >= 2000.00)
    {
        mEarn = (x*4)/100;
        cout << setprecision(2) << "Novo salario: " << mEarn + x << endl;
        cout << setprecision(2) << "Reajuste ganho: " << mEarn << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;

}
