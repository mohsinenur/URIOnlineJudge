#include<iostream>

using namespace std;

main()
{
    int A, N, i;
    int sNum = 0;
    int nTime = 0;

    top:
    cin >> A >> N;

    if (N<=0)
    {
        nTop:
        cin >> N;
        if (N > 0 )
        {
            for (i=A; i<=(A+1+nTime); i++)
            {
                sNum += i;
                nTime++;

                if(nTime == N)
                    break;
            }

            cout << sNum << endl;
        }else
        goto nTop;
    }else
    {
        for (i=A; i<=(A+1+nTime); i++)
        {
            sNum += i;
            nTime++;

            if(nTime == N)
                break;
        }

        cout << sNum << endl;
    }

    return 0;
}
