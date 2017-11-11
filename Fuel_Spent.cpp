#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    float X, Y;

    cin >> X;
    cin >> Y;
    cout << fixed;

    cout << setprecision(3) << (X*Y)/12 << endl;

    return 0;
}
