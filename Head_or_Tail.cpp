#include<iostream>

using namespace std;

main()
{
    top:
    int N, i;
    int mary = 0;
    int john = 0;

    cin >> N;
    if (N == 0)
    {

    }else
    {
        for (i=1; i<=N; i++)
        {
            int p;
            cin >> p;
            if (p == 0)
                mary++;
            else
                john++;
        }

        cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
        goto top;
    }

    return 0;
}
