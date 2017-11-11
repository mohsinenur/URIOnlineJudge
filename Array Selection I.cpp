#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    int n = 100;
    float A[n];
    cout << fixed;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] <= 10)
        {
            cout <<  setprecision(1) << "A[" << i << "] = "  << A[i] << endl;
        }
    }

    return 0;
}
