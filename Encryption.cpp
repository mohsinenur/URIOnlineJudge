#include <iostream>
#include <cstring>
#include <string>
using namespace std;
main()
{
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        char word[1000];
        gets(cin, word);

        for(int j = 0; j < strlen(word); j++)
        {
            cout << word[j];

        }

        cout << strlen(word) << endl;

    }
}
