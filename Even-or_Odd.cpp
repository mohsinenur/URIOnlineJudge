#include<iostream>

using namespace std;

main()
{
    int N, X, i;

    cin >> N;

    for (i = 1; i <= N; i++)
    {
        cin >> X;

        if (((X%2) == 0) && X > 0)
        {
            cout << "EVEN POSITIVE" << endl;
        }else if (((X%2) != 0) && X > 0)
        {
            cout << "ODD POSITIVE" << endl;
        }else if (((X%2) == 0) && X < 0)
        {
            cout << "EVEN NEGATIVE" << endl;
        }else if (((X%2) != 0) && X < 0)
        {
            cout << "ODD NEGATIVE" << endl;
        }else if (X == 0)
        {
            cout << "NULL" << endl;
        }
    }

    return 0;
}
