#include<iostream>

using namespace std;

main()
{
    int N;

    cin >> N;

    for (int i=1; i<=N; i++)
    {
        if (i<N)
        {
            cout << "Ho";
            cout << " ";
        }
        else
        {
            cout << "Ho";
            cout << "!" << endl;
        }
    }

    return 0;
}
