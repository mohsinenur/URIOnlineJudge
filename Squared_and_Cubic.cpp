#include<iostream>

using namespace std;

main()
{
    int N, i;

    cin >> N;

    for(i=1; i<=N; i++)
    {
        cout << i << " " << i*i << " " << i*i*i << endl;
    }

    return 0;
}
