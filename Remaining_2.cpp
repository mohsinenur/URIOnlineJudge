#include<iostream>

using namespace std;

main()
{
    int N, i;

    cin >> N;

    cout << 2 << endl;
    for (i = 1; i <= 10000; i++)
    {
        if ((i%N) == 0)
        {
            cout << i+2 << endl;
        }
    }

    return 0;
}
