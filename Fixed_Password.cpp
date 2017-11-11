#include<iostream>

using namespace std;

main()
{
    int a;

    first:
    cin >> a;

    if (a == 2002)
    {
        cout << "Acesso Permitido" << endl;
    }else
    {
        cout << "Senha Invalida" << endl;
        goto first;
    }

    return 0;
}
