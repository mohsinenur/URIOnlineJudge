#include<iostream>

using namespace std;

main()
{
    int i;
    int j = 60;

    for(i=1; i<=(i+1); i++)
    {
        cout << "I=" << i << " J=" << j << endl;
        j += (-5);
        i += 2;

        if (j == -5)
            break;
    }

    return 0;
}
