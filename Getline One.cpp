#include<iostream>
#include <iomanip>

using namespace std;

main()
{
    string name1;
    string name2;
    int dist = 0, avDist = 0;
    int frnd = 0;
    double avgRslt = 0;
    cout << fixed;
    while (cin >> name1 >> name2 >> dist)
    {
        avDist += dist;
        frnd++;

        avgRslt = (double)avDist / (double)frnd;

        cout << setprecision(1) << avgRslt << endl;
    }

    return 0;
}
