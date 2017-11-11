#include<iostream>
#include <cmath>
using namespace std;
main()
{
    int P, N, i, j, tmpV = 0;
    cin >> P >> N;
    int pipe[N];

    for(i = 0; i < N; i++)
    {
        cin >> pipe[i];
    }

    for(j = 0; j < N; j++)
    {
        if(pipe[j] >= pipe[j+1])
        {
            tmpV = pipe[j] - pipe[j+1];
        }else
        {
            tmpV = pipe[j+1] - pipe[j];
        }

        if(tmpV <= P  )
        {
            if(j == N-1)
            {
                cout << "YOU WIN" << endl;
                break;
            }
        }else
        {
            cout << "GAME OVER" << endl;
            break;
        }
    }

    return 0;
}
