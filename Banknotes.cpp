#include<iostream>

using namespace std;

main()
{
    int N;

    cin >> N ;

    int quotient100 = N/100;
    int quotient50 = (N-(quotient100*100))/50;
    int quotient20 = ((N -(quotient50*50)-(quotient100*100))/20);
    int quotient10 = ((N -(quotient20*20)-(quotient50*50)-(quotient100*100))/10);
    int quotient5 = ((N -(quotient10*10)-(quotient20*20)-(quotient50*50)-(quotient100*100))/5);
    int quotient2 = ((N -(quotient5*5)-(quotient10*10)-(quotient20*20)-(quotient50*50)-(quotient100*100))/2);
    int quotient1 = ((N -(quotient2*2) -(quotient5*5)-(quotient10*10)-(quotient20*20)-(quotient50*50)-(quotient100*100))/1);

    cout << N << endl;
    cout << quotient100 << " nota(s) de R$ 100,00" << endl;
    cout << quotient50 << " nota(s) de R$ 50,00" << endl;
    cout << quotient20 << " nota(s) de R$ 20,00" << endl;
    cout << quotient10 << " nota(s) de R$ 10,00" << endl;
    cout << quotient5 << " nota(s) de R$ 5,00" << endl;
    cout << quotient2 << " nota(s) de R$ 2,00" << endl;
    cout << quotient1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
