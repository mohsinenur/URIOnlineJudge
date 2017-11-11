#include<iostream>

using namespace std;

main()
{
    int T, i;

    cin >> T;

    for (i=1; i<=T; i++)
    {
        int R1, R2;
        cin >> R1 >> R2;
        cout << R1 + R2 << endl;
    }

    return 0;
}
