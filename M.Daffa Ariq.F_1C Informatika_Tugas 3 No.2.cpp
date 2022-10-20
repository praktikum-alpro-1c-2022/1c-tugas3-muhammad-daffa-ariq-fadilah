#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float praktikum=75, uts=70, uas=88;
    float nilaiAkhir;

    cout << "Nilai praktikum = " << praktikum << endl;
    cout << "Nilai uts = " << uts << endl;
    cout << "Nilai uas = " << uas << endl;

    nilaiAkhir=(praktikum * 20/100) + (uts * 30/100) + (uas * 50/100);

    cout << "Nilai akhirnya = " << nilaiAkhir << endl;

    return 0;
}
