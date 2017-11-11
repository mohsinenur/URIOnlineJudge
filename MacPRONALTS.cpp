#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    cout << fixed;
    int p, i;
    double tPrice = 0.0;

    cin >> p;

    for (i=1; i<=p; i++)
    {
        int x, q;
        double Price = 0.0;

        cin >> x >> q;

        if(x == 1001)
        {
            Price = (double)q * 1.50;
        }else if(x == 1002)
        {
            Price = (double)q * 2.50;
        }else if(x == 1003)
        {
            Price = (double)q * 3.50;
        }else if(x == 1004)
        {
            Price = (double)q * 4.50;
        }else if(x == 1005)
        {
            Price = (double)q * 5.50;
        }

        tPrice += Price;
    }

    cout << setprecision(2) << tPrice << endl;

    return 0;
}
