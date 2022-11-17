#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float b=25, x=15, c=20, Y;

    cout << "Nilai b = " << b << endl;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai c = " << c << endl;
    cout << "Selesaikan rumus Y = bx^2+0,5x-c" << endl;

    Y=b*x*x + 0.5*x - c;

    cout << "Nilai Y = " << Y << endl;

    return 0;
}
