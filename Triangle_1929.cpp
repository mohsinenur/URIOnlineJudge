#include<iostream>

using namespace std;

main()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    if (((A+B < C) && C > D  && A+B >= D))
    {
        cout << "S" << endl;
    }else
    {
        cout << "N" << endl;
    }

    return 0;
}
