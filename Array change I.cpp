#include<iostream>

using namespace std;

main()
{
    int N[20], i, j, tmp;
    i = 0;
    while (cin >> N[i])
    {
        i++;
        if (i == 20)
            break;
    }

    i = 0;

    for (j=19; j>=10; j--)
    {
        tmp = N[j];
        N[j] = N[i];
        N[i] = tmp;
        i++;
    }

    for(int k = 0; k < 20; k++){
            cout << "N[" << k << "] = " << N[k] << endl;
    }


    return 0;
}
