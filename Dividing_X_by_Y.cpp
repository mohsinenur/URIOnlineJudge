#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    int N;

    cout << fixed;
    cin >> N;

    for (int i=1; i<=N; i++)
    {
        int X, Y;

        cin >> X >> Y;
        if (Y == 0)
        {
            cout << "divisao impossivel" << endl;
        }else if (X == 0)
        {
            cout << 0.0 << endl;
        }else
        {
            double xy = (double)X/Y;
            cout << setprecision(1) << xy << endl;
        }
    }

    return 0;
}
