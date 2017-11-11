#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

main()
{
    double x1, x2, y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    double result1 = x2-x1;
    double result2 = y2-y1;
    double resultPow1 = pow(result1, 2.0);
    double resultPow2 = pow(result2, 2.0);

    cout << fixed;
    cout << setprecision(4) << sqrt(resultPow1 + resultPow2) << endl;

    return 0;
}
