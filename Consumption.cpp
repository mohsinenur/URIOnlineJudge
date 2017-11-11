#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    int X;
    float Y;

    cin >> X;
    cin >> Y;

    cout << fixed;
    cout << setprecision(3) << X/Y << " km/l" << endl;

    return 0;
}
