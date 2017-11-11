#include<iostream>

using namespace std;

main()
{
    int X, Y;

    first:
    cin >> X >> Y;

    if ((X == 0) || (Y == 0))
    {

    }else
    {
        if ((X > 0) && (Y > 0))
        {
            cout << "primeiro" << endl;
            goto first;
        }else if ((X > 0) && (Y < 0))
        {
            cout << "quarto" << endl;
            goto first;
        }else if ((X < 0) && (Y > 0))
        {
            cout << "segundo" << endl;
            goto first;
        }else if ((X < 0) && (Y < 0))
        {
            cout << "terceiro" << endl;
            goto first;
        }
    }

    return 0;
}
