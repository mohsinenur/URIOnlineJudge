#include<iostream>

using namespace std;

main()
{
    int N, i;
    int res = 1;

    cin >> N;

    for (i=0; i<= i+1; i++)
    {
        res *= (N - i);
        if (i == N-1)
            break;
    }

    cout << res << endl;

    return 0;

}
