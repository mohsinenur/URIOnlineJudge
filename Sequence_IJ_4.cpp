#include<iostream>

using namespace std;

main()
{
    float i;
    float l = 0;
    float n = 0;

    for (i=0; i<=10; i++)
    {
        float j;
        float k = 1;

        for (j=1; j<=3; j++)
        {
            cout << "I=" << l << " J=" << k + n << endl;

            k++;
        }
        n += 0.2;
        l += 0.2;
    }

    return 0;
}
