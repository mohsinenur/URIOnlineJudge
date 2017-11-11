#include<iostream>

using namespace std;

main()
{
    int N, X, Y;
    int sNum = 0;
    cin >> N;


    for (int i=1; i<=N; i++)
    {
        cin >> X >> Y;

        int p = X;
        int q = 0;


        for(int k=X; k<=(p+1); k++)
        {
            if(k%2 != 0)
            {
                sNum += k;
                q++;
            }
            p++;
            if (q == Y)
                break;
        }

        cout << sNum << endl;
        sNum = 0;
    }

    return 0;
}
