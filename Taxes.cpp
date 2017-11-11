#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double sal;

    cout << fixed;
    cin >> sal;

    if(sal <= 2000.00){
           cout << "Isento\n";
    }else if (sal >= 2000.01 && sal <= 3000.00){
        cout << setprecision(2) << "R$ " << (sal - 2000.00)*0.08 << endl;
    }else if (sal >= 3000.01 && sal <= 4500.00){
        cout << setprecision(2) << "R$ " << ((sal - 3000.00)*0.18 + 1000.00*0.08) << endl;
    }else if (sal >= 4500.01){
        cout << setprecision(2) << "R$ " << ((sal - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08) << endl;
    }
    return 0;
}

