#include <iostream>
#include <string>
#include "personal.h"
using namespace std;

int main(){
    //double c1, c2, c3;
    double a, b;
    unsigned int n;
    string fun;

    //leggi_funct(fun);
    cin >> fun;
    //leggi_f(c1, c2, c3);
    leggi_dd(a, b);
    leggi_i(n);

    if (n == 0) {
        errore(3);
    }
    if (a > b) {
        errore(2);
    }

    double s = (b - a) / n;

        cerr << "Funzione: " << fun <<" ["<<a<<","<<b<<"] n="<<n; 
    for(unsigned int i = 0; i <= n; i++) {
        double x = a + i * s;
        //cout << x << "\t" << f(x, c1, c2, c3) << endl;
        cout << x << "\t" << calc_funct(fun, x) << endl;
    }
    return 0;
}