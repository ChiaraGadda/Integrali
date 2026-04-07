#include <iostream>
#include "personal.h"
using namespace std;

int main(){
    double x, y, xp, yp; //xp e yp = xprecedente e yprecedente
    double area = 0;

    leggi_dd(xp, yp);

    while(leggi_dd(x, y)){
        area += (x - xp) * (y + yp) / 2;
        xp = x;
        yp = y;
    }

    cout << area << endl;

    return 0;
}
