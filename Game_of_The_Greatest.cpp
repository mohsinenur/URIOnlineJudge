#include<iostream>

using namespace std;

main()
{
    top:
    int N, i;
    cin >> N;
    if (N == 0)
    {

    }else
    {
        int plr1 = 0;
        int plr2 = 0;

        for (i=1; i<=N; i++)
        {
            int A, B;

            cin >> A >> B;

            if (A > B)
            {
                plr1 += 1;
                plr2 = plr2;

            }else if (A < B)
            {
                plr2 += 1;
                plr1 = plr1;
            }else
            {
                plr2 = plr2;
                plr1 = plr1;
            }
        }

        cout << plr1 << " " << plr2 << endl;
        goto top;
    }

    return 0;
}
