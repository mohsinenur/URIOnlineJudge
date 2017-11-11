#include<iostream>

using namespace std;

main()
{
    int n, i;
    float hNoteNum;
    float hNote = 8.0;

    cin >> n;
    for (i=1; i<=n; i++)
    {
        int m;
        float note;

        cin >> m >> note;

        if (note >= 8.0)
        {
            if (note >= hNote)
            {
                hNote = note;
                hNoteNum = m;
            }
        }
    }

    cout << hNoteNum << endl;

    return 0;
}
