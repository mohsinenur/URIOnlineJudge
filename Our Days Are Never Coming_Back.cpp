#include<iostream>
using namespace std;

main()
{
    int N, i;
    cin >> N;

    string quite[34] = {"L","I","F","E"," ","I","S"," ","N","O","T"," ","A"," ","P","R","O","B","L","E","M"," ","T","O"," ","B","E"," ","S","O","L","V","E","D"};

    for(i = 0; i < N; i++)
    {
        cout << quite[i];
    }
    cout << endl;

    return 0;
}
