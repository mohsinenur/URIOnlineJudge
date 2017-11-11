#include<iostream>

using namespace std;

main()
{
    int L;

    while (cin >> L)
    {
        int V[L], totalS = 0;

        bool speed1 = false;
        bool speed2 = false;
        bool speed3 = false;

        for (int i = 1; i<= L; i++)
        {
            cin >> V[i];

            if (V[i] < 10)
                speed1 = true;
            else if (V[i] >= 10 && V[i] < 20)
                speed2 = true;
            else if (V[i] >= 20)
                speed3 = true;
        }

        if (speed3 == true)
            cout << 3 << endl;
        else if (speed2 == true)
            cout << 2 << endl;
        else if (speed1 == true)
            cout << 1 << endl;
    }

    return 0;
}
