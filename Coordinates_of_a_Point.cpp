#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    float x, y;
    cin >> x >> y;

    if (x == 0.0 && y == 0.0)
    {
        cout << "Origem" << endl;
    }else
    {
        if (x > 0)
        {
            if (y > 0)
            {
                cout << "Q1" << endl;
            }else if (y == 0.0)
            {
                cout << "Eixo X" << endl;
            }else
            {
                cout << "Q4" << endl;
            }
        }else if (x < 0)
        {
            if (y > 0)
            {
                cout << "Q2" << endl;
            }else if (y == 0.0)
            {
                cout << "Eixo X" << endl;
            }
            else
            {
                cout << "Q3" << endl;
            }
        }else
        {
            cout << "Eixo Y" << endl;
        }
        }


    return 0;
}
