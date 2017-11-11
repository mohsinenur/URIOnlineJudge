#include<iostream>

using namespace std;

main()
{
    int in, gr;
    int x;
    int grenais = 0;
    int inWon = 0;
    int grWon = 0;
    int Empates = 0;

    top:
    cin >> in >> gr;
    cout << "Novo grenal (1-sim 2-nao)" << endl;

    if (in > gr)
    {
        inWon++;
    }else if (in < gr)
    {
        grWon++;
    }else
    {
        Empates++;
    }

    grenais++;
    cin >> x;


    if (x == 1)
    {
        goto top;
    }else if (x == 2)
    {
        cout << grenais << " grenais" << endl;
        cout << "Inter:" << inWon << endl;
        cout << "Gremio:" << grWon << endl;
        cout << "Empates:" << Empates << endl;
        cout << "Inter venceu mais" << endl;
    }

    return 0;
}
