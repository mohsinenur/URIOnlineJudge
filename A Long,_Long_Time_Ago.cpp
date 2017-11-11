#include<iostream>

using namespace std;

main()
{
    int N, i;

    cin >> N;

    for (i=1; i<=N; i++)
    {
        int T;
        cin >> T;

        if (T < 2015)
        {
            cout << 2015 - T << " D.C." << endl;
        }else
        {
            cout << T - 2014 << " A.C." << endl;
        }
    }

    return 0;
}
