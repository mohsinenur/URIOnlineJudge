#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    cout << fixed;
    float N1, N2, N3, N4, Media, X1, reMedia;

    cin >> N1 >> N2 >> N3 >> N4;

    Media = ((N1*2) + (N2*3) + (N3*4) + (N4*1)) / 10;

    if (Media >= 7.0)
    {
        cout << setprecision(1) << "Media: " << Media << endl;
        cout << "Aluno aprovado." << endl;

    }else if (Media < 5.0)
    {
        cout << setprecision(1) << "Media: " << Media << endl;
        cout << "Aluno reprovado." << endl;
    }else if ((Media >= 5.0) && (Media <= 6.9))
    {
        cout << setprecision(1) << "Media: " << Media << endl;
        cout << "Aluno em exame." << endl;
        cin >> X1;
        cout << "Nota do exame: " << X1 << endl;

        reMedia = (Media + X1) / 2;

        if (reMedia >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }else if (reMedia <= 4.9)
        {
            cout << "Aluno reprovado." << endl;
        }

        cout << setprecision(1) << "Media final: " << reMedia << endl;
    }

    return 0;
}
