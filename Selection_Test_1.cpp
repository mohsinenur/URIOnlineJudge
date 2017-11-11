#include<iostream>

using namespace std;

main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int sumAB = A + B;
    int sumCD = C + D;

    if(B > C && D > A && sumCD > sumAB){
        if (C > 0 && D > 0) {
            if ( A%2 == 0) {
                cout << "Valores aceitos" << endl;
            }else {
                cout << "Valores nao aceitos" << endl;
            }
        }else {
           cout << "Valores nao aceitos" << endl;
        }
    }else {
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}
