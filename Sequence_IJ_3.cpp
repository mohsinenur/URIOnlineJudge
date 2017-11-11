#include<iostream>

using namespace std;

main()
{
    int i;
    int n = 0;
    int l= 0;

    for(i=1; i<=9; i++)
    {
        int j = 0;
        int k = 7+n+l;
        for(j=1; j<=3; j++)
        {
            cout << "I=" << i << " J=" << k << endl;
            k--;
        }
        n++;
        i++;
        l++;
    }

    return 0;
}
