#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int R;
    cin >> R;
    cout << fixed;
    cout << "VOLUME = " << setprecision(3) << ((4/3.0)*(3.14159)*R*R*R) << endl;

    return 0;
}
