#include <iostream>
using namespace std;

int main(){
    double x,y,xp=0,yp=0,area=0;
    while(cin>>x>>y){
        //calcolo area trapezio e sommo
        area+=(x-xp)*(y+yp)/2;
        xp=x;
        yp=y;
    }
    cout<<area;
    return area;
}