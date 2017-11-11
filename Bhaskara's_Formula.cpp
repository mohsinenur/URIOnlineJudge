#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

main()
{
    double A, B, C, checkSqrt;

    cin >> A >> B >> C;
    cout << fixed;

    checkSqrt = (B*B) - (4*A*C);
    if ((2*A == 0) || (checkSqrt < 0)) {
         cout << "Impossivel calcular" << endl;
    }else {
        double R1 = ((-B) + sqrt(((B*B) - 4*A*C)))/(2*A);
        double R2 = ((-B) - sqrt(((B*B) - 4*A*C)))/(2*A);

        cout << setprecision(5) << "R1 = " << R1 << endl;
        cout << setprecision(5) << "R2 = " << R2 << endl;
    }

    return 0;
}
