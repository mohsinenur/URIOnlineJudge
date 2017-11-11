#include<iostream>
#include<iomanip>
using namespace std;

main()
{
    int a, b;
    float c;
    int x, y;
    float z;

    cin >> a >> b >> c;
    cin >> x >> y >> z;

    cout << fixed;
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << ((b*c)+(y*z)) << endl;

    return 0;

}
