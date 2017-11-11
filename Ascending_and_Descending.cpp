#include<iostream>

using namespace std;

main()
{
    int X, Y;

    Begining:
    cin >> X >> Y;

    if (X == Y)
    {

    }else
    {
        if (X > Y)
        {
            cout << "Decrescente" << endl;
            goto Begining;
        }else if (X < Y)
        {
            cout << "Crescente" << endl;
            goto Begining;
        }
    }

    return 0;
}
