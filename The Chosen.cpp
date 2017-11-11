#include<iostream>
using namespace std;
main()
{
    int n, i, j;
    cin >> n;
    int m[n];
    double note[n];
    for(i = 1; i <= n; i++)
    {
        cin >> m[i] >> note[i];
    }

    double tmp = 0;
    int tmpM = 0;
    for(j = 1; j<= n; j++)
    {
        if(note[j] >= tmp)
        {
            tmp = note[j];
            tmpM = m[j];
        }
    }
    if (tmp >= 8)
    {
        cout << tmpM << endl;
    }else
    {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}
