#include<iostream>

using namespace std;

main()
{
    int A, B;
    cin >> A >> B;

    if (A<B)
    {
        if (B%A != 0)
        {
            cout << "Nao sao Multiplos" << endl;
        }else
        {
            cout << "Sao Multiplos" << endl;
        }
    }else
    {
        if (A%B != 0)
        {
            cout << "Nao sao Multiplos" << endl;
        }else
        {
            cout << "Sao Multiplos" << endl;
        }
    }
    return 0;
}
