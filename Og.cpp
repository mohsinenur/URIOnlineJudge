#include<iostream>

using namespace std;

main()
{
    top:
    int L, R;
    cin >> L >> R;

    if ((L == 0) && (R == 0))
    {

    }else
    {
        cout << L + R << endl;

        goto top;
    }

    return 0;
}
