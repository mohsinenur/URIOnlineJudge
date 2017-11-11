#include<iostream>

using namespace std;

main()
{
    for(int i=1; i<=7; i++)
    {
        if(i==1)
            cout << "**a" << endl;
        if(i==2)
            cout << "**b" << endl;
        if(i==3)
            cout << "***c" << endl;
        if(i==4)
            cout << "***d" << endl;
        if(i==5)
            cout << "****e" << endl;
        if(i==6)
            cout << "****f" << endl;
        if(i==7)
            cout << "*****g" << endl;
    }
    return 0;
}
