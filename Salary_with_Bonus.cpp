#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    string name;
    double salary, sold;

    cin >> name;
    cin >> salary;
    cin >> sold;
    cout << fixed;
    cout << "TOTAL = R$ " << setprecision(2) << salary + ((sold*15)/100) << endl;

    return 0;
}
