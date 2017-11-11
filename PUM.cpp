#include<iostream>

using namespace std;

main()
{
    int N, i, j;
    int k = 0;

    cin >> N;

    for (i=1; i<=N; i++)
    {
        for (j=1+k; j<=4*i; j++)
        {
            if (j<4*i)
            {
                cout << j << " ";
            }else
            {
                cout << "PUM" << endl;
            }
            k++;
        }
    }

    return 0;
}
