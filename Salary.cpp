#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int x, y;
    float z;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << fixed;

    cout << "NUMBER = " << x << endl;
    cout << "SALARY = U$ " << setprecision(2) << (y*z) << endl;

    return 0;
}
