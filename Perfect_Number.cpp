#include<iostream>

using namespace std;

main()
{
    int N;
    cin >> N;

    for (int i=1; i<=N; i++)
    {
        int X;
        int sSum = 0;
        cin >> X;

        for (int j=1; j<X; j++)
        {
            if (X%j == 0)
            {
                sSum += j;
            }
        }
        if (sSum == X)
            cout << X << " eh perfeito" << endl;
        else
            cout << X << " nao eh perfeito" << endl;
    }

    return 0;
}
