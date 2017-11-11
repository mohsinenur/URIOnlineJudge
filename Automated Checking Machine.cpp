#include<iostream>

using namespace std;

main()
{
    int X[5], i;
    int Y[5], j;
    bool com = false;

    for (i=1; i<=5; i++)
    {
        cin >> X[i];
    }
    for (j=1; j<=5; j++)
    {
        cin >> Y[j];
        if (Y[j] == X[j])
            com = true;
    }

    if(!com)
        cout << "Y" << endl;
    else
        cout << "N" << endl;

    return 0;
}
