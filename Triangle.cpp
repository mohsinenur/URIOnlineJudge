#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    float A, B, C;
    cin >> A >> B >> C;
    cout << fixed;

    if ((A+B > C) && (B+C > A) && (C+A > B) )
    {
        cout << setprecision(1) << "Perimetro = " << A+B+C << endl;
    }else
    {
        cout << setprecision(1) << "Area = " <<((A+B)*C)/2 << endl;
    }

    return 0;
}
