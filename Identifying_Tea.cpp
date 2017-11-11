#include<iostream>

using namespace std;

main()
{
    int T, A, B, C, D, E;
    int cntTea = 0;

    cin >> T;
    cin >> A >> B >> C >> D >> E;

    if (A == T)
        cntTea++;
    if (B == T)
        cntTea++;
    if (C == T)
        cntTea++;
    if (D == T)
        cntTea++;
    if (E == T)
        cntTea++;

    cout << cntTea << endl;

    return 0;
}
