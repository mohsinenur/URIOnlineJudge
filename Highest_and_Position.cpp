#include<iostream>

using namespace std;

main()
{
    int X, i;

    int sNum = 0;
    int bNum = 0;
    int bNumPos = 0;

    for (i = 1; i <= 100; i++)
    {
        cin >> X;

        sNum = X;

        if(sNum >= bNum)
        {
            bNum = sNum;
            bNumPos = i;
        }
    }

    cout << bNum << endl;
    cout << bNumPos << endl;

    return 0;
}
