#include<iostream>

using namespace std;

main()
{
    int C, i;
    cin >> C;

    for (i=1; i<=C; i++)
    {
        int N;
        cin >> N;

        if (N%2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}
