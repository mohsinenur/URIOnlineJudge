#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    cout << fixed;
    double X;
    cin >> X;

    for (int i = 0; i < 100; i++)
    {
        cout << setprecision(4) << "N[" << i << "] = " << X << endl;
        X = X / 2;
    }

    return 0;
}
