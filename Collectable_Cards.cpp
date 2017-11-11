#include<iostream>
using namespace std;

main()
{
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        int F1, F2, resultF1, resultF2;
        cin >> F1 >> F2;

        for(int j = F1-1; j > 1; j--)
        {
            if (F1%j == 0)
            {
                resultF1 = F1/j;
            }
        }

        for(int j = F2-1; j > 1; j--)
        {
            if (F2%j == 0)
            {
                resultF2 = F2/j;
            }

            if (F2%resultF1 == 0)
            {
                if (j == resultF1)
                    break;
            }
        }

        if(resultF1 > resultF2)
            cout << resultF1 << endl;
        else
            cout << resultF2 << endl;

    }

    return 0;
}
