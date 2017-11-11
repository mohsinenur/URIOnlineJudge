#include <iostream>

using namespace std;

main()
{
    int V;

    cin >> V;

    int N[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << V << endl;
        V = V * 2;
    }
    return 0;
}
