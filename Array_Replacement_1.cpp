#include<iostream>

using namespace std;

main()
{
    int n = 10;
    int X[n];
    for (int i = 0; i < n; i++)
    {
        cin >> X[i];

        if (X[i] <= 0)
        {
            cout << "X[" << i << "] = " << 1 << endl;
        }
        else
        {
            cout << "X[" << i << "] = " << X[i] << endl;
        }
    }

    return 0;
}
