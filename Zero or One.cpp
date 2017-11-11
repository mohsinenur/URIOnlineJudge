#include<iostream>
using namespace std;

main()
{
    int A, B, C;
    while(cin >> A >> B >> C)
    {
        int count1 = 0;
        int count0 = 0;

        if (A == 1)
        {
            count1++;
            if (B == 0 && C == 0)
            {
                cout << "A" << endl;
            }
        }
        else
        {
            count0++;
            if (B == 1 && C == 1)
            {
                cout << "A" << endl;
            }
        }

        if (B == 1)
        {
            count1++;
            if (A == 0 && C == 0)
            {
                cout << "B" << endl;
            }
        }
        else
        {
            count0++;
            if (A == 1 && C == 1)
            {
                cout << "B" << endl;
            }
        }
        if (C == 1)
        {
            count1++;
            if (A == 0 && B == 0)
            {
                cout << "C" << endl;
            }
        }
        else
        {
            count0++;
            if (A == 1 && B == 1)
            {
                cout << "C" << endl;
            }
        }

        if (count1 == 3 || count0 == 3)
            cout << "*" << endl;
    }

    return 0;

}
