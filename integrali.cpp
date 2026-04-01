#include <iostream>
#include "personal.cpp"
using namespace std;

int main(){
    double x, y, xp, yp, area = 0;
    leggi_dd(xp, yp);
    while(1){
        leggi_dd(x, y);
        area += (x - xp) * (y + yp) / 2;
        xp = x;
        yp = y;
    }

    cout << area;
    return 0;
}
