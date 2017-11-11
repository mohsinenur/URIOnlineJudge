#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    double A, B;
    cin >> A >> B;
    cout << fixed;

    double newP = 0;

    newP = B - A;

    double persPrice = (100 * newP) / A;

    cout << setprecision(2) << persPrice << "%" << endl;

    return 0;
}
