#include<iostream>

using namespace std;

main()
{
    int N, i;
    cin >> N;

    for (i=0; i<N; i++)
    {

        int X, j;
        int tem = 0;

        cin >> X;

        for (j=1; j<X; j++)
        {
            if (X%j == 0)
                tem++;
            if (tem > 1)
                break;
        }

        if (tem == 1)
        {
            cout << X << " eh primo" << endl;
        }else
        {
            cout << X << " nao eh primo" << endl;
        }
    }

    return 0;
}
