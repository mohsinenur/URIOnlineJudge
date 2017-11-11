#include<iostream>

using namespace std;

int main()
{
    int test, i;
    double food;
    cin >> test;

    for(i = 1; i <= test; i++)
    {
        cin >> food;

        int countDay = 0, j;
        double avlFood = 0;
        double x = 2;

        for(j = 1; j <= j+1; j++)
        {
            avlFood = food / x;
            countDay++;
            food = avlFood;

            if (avlFood <= 1) {
                break;
            }
        }

        cout << countDay << " dias" << endl;
    }

    return 0;
}
