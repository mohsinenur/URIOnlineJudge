#include<iostream>

using namespace std;

main()
{
    int N;
    cin >> N;
    int hour;
    int minute;
    int second;
    hour = (N/60)/60 ;
    int leftSnd1;
    leftSnd1 = N - (hour * 60 * 60);
    minute = leftSnd1 / 60;
    int leftSnd2;
    leftSnd2 = leftSnd1 - (minute * 60);
    cout << hour << ":" << minute << ":" << leftSnd2 << endl;

    return 0;
}
