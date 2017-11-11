#include<iostream>

using namespace std;

main()
{
    int N;

    cin >> N;
    for (int i = 1; i <= (N); i++)
    {
        int num1 = i;
        int num2 = i * num1;
        int num3 = num1 * num2;
        cout << num1 << " " << num2 << " " << num3 << endl;
        cout << num1 << " " << num2 + 1 << " " << num3 + 1 << endl;
    }

    return 0;
}
