#include<iostream>
using namespace std;

main()
{
    int n, i;
    cin >> n;
    int sum = n-3;
    long long value = sum;

    for (i = 1; i <= sum; i++)
    {
        value += i;
    }

    cout << value << endl;

    return 0;
}
