#include<iostream>
using namespace std;
main()
{
    int a, b;

    while(cin >> a >> b)
    {
        if( a != 0 && b != 0)
        {
            int cra[a];
            int crb[b];
            for(int i = 1; i <= a; i++)
            {
                cin >> cra[i];
            }
            for(int j = 1; j <= b; j++)
            {
                cin >> crb[j];
            }

            int bigN;
            if(a>b)
                bigN = b;
            else
                bigN = a;


            int cntCrd = 0;
            for(int k = 1; k <= bigN; k++ )
            {
                if(cra[k] != crb[k])
                {
                    if((cra[k] != 0) || (crb[k] != 0))
                    {
                        int tmpcrak = cra[k];
                        int tmpcrbk = crb[k];
                        for(int p = 1; p <= bigN; p++)
                        {
                            if(cra[p] == tmpcrak)
                            {
                                cra[p] = 0;
                            }
                            if(crb[p] == tmpcrbk)
                            {
                                crb[p] = 0;
                            }
                        }
                        cntCrd++;
                    }
                }else
                {
                    cout << "no entry" << endl;
                }
            }

            cout << cntCrd << endl;
        }
    }
    return 0;
}
