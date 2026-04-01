#include <iostream>
using namespace std;

int main(){
    double x, y, xp, yp, area = 0;
    cin >> xp >> yp;
    while(cin >> x >> y){
        area += (x - xp) * (y + yp) / 2;
        xp = x;
        yp = y;
    }

    cout << area;
    return 0;
}
