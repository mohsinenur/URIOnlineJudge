#include<iostream>

using namespace std;

main()
{
    int X;
    cin >> X;

    int year;
    int month;
    int day;
    int daysLeft1, daysLeft2;

    year = X / 365;
    daysLeft1 = X - (year * 365);
    month = daysLeft1 / 30;
    daysLeft2 = daysLeft1 - (month * 30);
    day = daysLeft2;

    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << day << " dia(s)" << endl;

    return 0;
}
