#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    float A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;
    cout << fixed;

    cout << "MEDIA = " << setprecision(1) << (A*2 + B*3 + C*5)/10 << endl;

    return 0;
}
