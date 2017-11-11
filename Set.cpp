#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while(N != 0)
    {
        for(int i = 1; i <= N; i++)
        {
            char wOne[4], wTwo[10];
            cin >> wOne >> wTwo;
            wOne[i] = wOne;
        }
    }
}
