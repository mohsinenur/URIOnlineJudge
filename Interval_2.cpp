#include<iostream>

using namespace std;

main()
{
    int N, X, i;
    int temp1 = 0;
    int temp2 = 0;
    int temp3 = 0;
    int temp4 = 0;

    cin >> N;

    for (i = 1; i <= N; i++)
    {
        cin >> X;
        if ((X >= 10) && (X <= 20))
        {
            temp1 = 1;
            temp2 += temp1;
        }else
        {
            temp3 = 1;
            temp4 += temp3;
        }
    }

    cout << temp2 << " in" << endl;
    cout << temp4 << " out" << endl;

    return 0;
}
