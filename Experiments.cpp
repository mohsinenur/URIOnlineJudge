#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    int N, i, tAnml;
    int sapos = 0;
    int coelhos = 0;
    int ratos = 0;
    double perCoe = 0.0;

    cout << fixed;
    cin >> N;
    for(i=1; i<=N; i++)
    {
        int x;
        string a;

        cin >> x >> a;

        if (a == "C")
        {
            coelhos += x;
        }else if (a == "R")
        {
            ratos += x;
        }else if (a == "S")
        {
            sapos += x;
        }
    }

    tAnml = coelhos + ratos + sapos;
    perCoe = (double)(((double)coelhos * 100) / (double)tAnml);
    double perRat = (double)(((double)ratos * 100) / (double)tAnml);
    double perSap = (double)(((double)sapos * 100) / (double)tAnml);

    cout << "Total: "<< tAnml << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << setprecision(2) << "Percentual de coelhos: " << perCoe << " %" << endl;
    cout << setprecision(2) << "Percentual de ratos: " << perRat << " %" << endl;
    cout << setprecision(2) << "Percentual de sapos: " << perSap << " %" << endl;
}
