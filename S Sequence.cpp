#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    //s= 1/1 + 1/2 + 1/3 + ....+ 1/100
    double S = 0;
    double tS = 0;
    int i;

    cout << fixed;
    for (i=1; i<=100; i++)
    {
       S = (double)1/i;
       tS += S;
    }

    cout << setprecision(2) << tS << endl;

    return 0;
}
