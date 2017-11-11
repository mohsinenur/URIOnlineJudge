#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int N, i, j, k;
    cin >> N;

    for(i = 1; i <= N; i++)
    {
        int QT, S;
        cin >> QT >> S;
        int QT1[QT];
        for(j = 1; j <= QT; j++)
        {
            cin >> QT1[j];
        }

        int fnlDiff = 0, diff = 0, result;
        for(k = 1; k <= QT; k++)
        {
            diff = abs(QT1[k] - S);
            if(k == 1)
            {
                fnlDiff = diff;
                result = k;
            }
            if (diff < fnlDiff)
            {
                fnlDiff = diff;
                result = k;
            }
        }

        cout << result << endl;
    }

    return 0;
}
