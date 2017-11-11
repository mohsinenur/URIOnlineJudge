#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    double R;
    cin >> R;
    cout << fixed;
    cout << "A=" << setprecision(4) << 3.14159*(R*R) << endl;
    return 0;
}
