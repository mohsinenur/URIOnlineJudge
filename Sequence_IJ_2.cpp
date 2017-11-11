#include<iostream>

using namespace std;

main()
{
    int i;

    for (i=1; i<=9; i++)
    {
        int j;
        int k = 7;
        for (j=i; j<=2+i; j++)
        {
            cout << "I=" << i << " J=" << k << endl;
            k--;
        }
        i++;
    }

    return 0;
}
