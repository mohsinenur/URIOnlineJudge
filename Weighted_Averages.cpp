#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    cout << fixed;

    int N, i;

    cin >> N;
    for (i=1; i<=N; i++)
    {
        float x, y, z, avg;

        cin >> x >> y >> z;

        avg = ((x*2) + (y*3) + (z*5)) / 10;

        cout << setprecision(1) << avg << endl;

    }

    return 0;
}
