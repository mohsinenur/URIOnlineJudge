#include<iostream>

using namespace std;

main()
{
    int N[1000];
    int T, i, j;

    cin >> T;

    j = 0;
    for (i=0; i<=999; i++)
    {
        cout << "N[" << i << "] = " << j << endl;
        j++;
        if (j > T-1)
            j = 0;
    }

    return 0;

}
