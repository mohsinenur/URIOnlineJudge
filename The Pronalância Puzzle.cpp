#include<iostream>
using namespace std;
main()
{
    long long n, divS = 1,divV, sN, fN, i, j;
    long long aN[11];
    cin >> n;

    for (i = 1; i <= i+1; i++)
    {
        divV = n / divS;
        sN = divV % 10;
        fN = (n / divS);
        aN[i] = sN;
        divS *= 10;

        if (fN < 10)
            break;
    }

    for (j = 1; j <= i; j++)
    {
        cout << aN[j];
        if(j==i)
        {
           cout << endl;
           break;
        }

    }

    return 0;
}
