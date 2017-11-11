#include <iostream>
#include <string>

using namespace std;

int main() {
    string diai,tempoi,diaf,tempof;
    int di,hi,mi,si,df,hf,mf,sf,total,dd,dh,dm,ds;

    getline(cin, diai);
    getline(cin, tempoi);
    getline(cin, diaf);
    getline(cin, tempof);


    di = atoi(diai.substr(4,1).c_str());
    hi = atoi(tempoi.substr(0,2).c_str());
    mi = atoi(tempoi.substr(5,2).c_str());
    si = atoi(tempoi.substr(10,2).c_str());

    df = atoi(diaf.substr(4,1).c_str());
    hf = atoi(tempof.substr(0,2).c_str());
    mf = atoi(tempof.substr(5,2).c_str());
    sf = atoi(tempof.substr(10,2).c_str());

    total = (df*60*60*24 + hf*60*60 + mf*60 + sf) - (di*60*60*24 + hi*60*60 + mi*60 + si);
    dd = total/86400;
    total -= dd*86400;
    dh = total/3600;
    total -= dh*3600;
    dm = total/60;
    total -= dm*60;
    ds = total;

    cout << dd << " dia(s)" << endl;
    cout << dh << " hora(s)" << endl;
    cout << dm << " minuto(s)" << endl;
    cout << ds << " segundo(s)" << endl;

    return 0;
}
