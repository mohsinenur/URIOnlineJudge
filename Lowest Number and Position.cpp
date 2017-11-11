#include<iostream>

using namespace std;

main()
{
    int N, minm, pos;
    cin >> N;

    int X[N];

    minm = 1000;
    pos = 0;

    for (int i=0; i<N; i++)
    {
        cin >> X[i];
        if (X[i] < minm)
        {
            pos = i;
            minm = X[i];
        }
    }

    cout << "Menor valor: " << minm << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}
