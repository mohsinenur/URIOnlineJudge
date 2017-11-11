#include<iostream>

using namespace std;

main()
{
    long int y;

    while (cin >> y)
    {
        if (y%4 == 0)
        {
            if (y%15 == 0)
            {
                if (y%55 == 0)
                {
                    cout << "This is leap year." << endl;
                    cout << "This is huluculu festival year." << endl;
                    cout << "This is bulukulu festival year." << endl << endl;
                }else
                {
                    cout << "This is leap year." << endl;
                    cout << "This is huluculu festival year." << endl << endl;
                }
            }else if (y%55 == 0)
            {
                cout << "This is leap year." << endl;
                cout << "This is bulukulu festival year." << endl << endl;
            }else
            {
                cout << "This is leap year." << endl << endl;
            }
        }else if (y%15 == 0)
        {
            cout << "This is huluculu festival year." << endl << endl;
        }else
        {
            cout << "This is an ordinary year." << endl << endl;
        }
    }

    return 0;
}
