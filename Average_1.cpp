#include<iostream>
#include<iomanip>
using namespace std;

main()
{
    float x, y;
    cin >> x;
    cin >> y;
    cout << fixed;
    cout << "MEDIA = " << setprecision(5) << (x*3.5+y*7.5)/11 << endl;

    return 0;
}

