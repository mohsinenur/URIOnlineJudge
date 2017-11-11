#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    double S = 0;
    double tS = 0;
    int i;
    int n = 2;

    cout << fixed;
    for (i=3; i<=39; i++)
    {
        if ((i%2) != 0)
        {
            S = (double)i/n;
            tS += S;
            n = (n*2);
        }
    }

    cout << setprecision(2) << tS+1 << endl;

    return 0;
}
