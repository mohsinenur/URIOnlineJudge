#include<iostream>

using namespace std;

main()
{
    int QT, i;
    cin >> QT;

    for (i=1; i<=QT; i++)
    {
        string name1, PorM1, name2, PorM2;
        long long N, M;

        cin >> name1 >> PorM1 >> name2 >> PorM2;
        cin >> N >> M;

        if (((N + M) % 2) == 0)
        {
            cout << name1 << endl;
        }else
        {
            cout << name2 << endl;
        }
    }

    return 0;
}
