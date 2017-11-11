#include<iostream>

using namespace std;

main()
{
    int N, i;
    cin >> N;

    for (i=1; i<=N; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << (x*y)/2 << " cm2" << endl;
    }

    return 0;
}
