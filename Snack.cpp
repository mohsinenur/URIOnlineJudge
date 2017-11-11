#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    int X, Y;
    cin >> X;
    cin >> Y;
    cout << fixed;

    if (X == 1) {
        cout << setprecision(2) << "Total: R$ " << Y*4.00 << endl;
    }else if(X == 2) {
        cout << setprecision(2) << "Total: R$ " << Y*4.50 << endl;
    }else if(X == 3) {
        cout << setprecision(2) << "Total: R$ " << Y*5.00 << endl;
    }else if (X == 4) {
        cout << setprecision(2) << "Total: R$ " << Y*2.00 << endl;
    }else if (X == 5) {
        cout << setprecision(2) << "Total: R$ " << Y*1.50 << endl;
    }

    return 0;
}
