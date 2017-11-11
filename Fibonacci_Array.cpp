#include<iostream>

using namespace std;

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N;
        unsigned long long int fib[N];

        fib[0] = 0;
        fib[1] = 1;

        for (int j = 2; j <= N; j++)
        {
            fib[j] = fib[j-2] + fib[j-1];
        }

        cout << "Fib(" << N << ") = " << fib[N] << endl;
    }

    return 0;
}
