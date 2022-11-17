#include <iostream>
#include <math.h>
using namespace std;

int main(){

    // deklarasi variabel
    float i, v, r;
    float rumusArus, rumusTegangan, rumusHambatan;

    // input
    cout << "Masukkan nilai arus (i) : ";
    cin >> i;

    cout << "Masukkan nilai tegangan (v) : ";
    cin >> v;

    cout << "Masukkan nilai hambatan (r) : ";
    cin >> r;

    // rumus
    rumusArus=v/r;
    rumusTegangan=i*r;
    rumusHambatan=v/i;

    // hasil akhir
    cout << "Hasil perhitungan arus = " << rumusArus << endl;
    cout << "Hasil perhitungan tegangan = " << rumusTegangan << endl;
    cout << "Hasil perhitungan hambatan = " << rumusHambatan << endl;

    return 0;
}
