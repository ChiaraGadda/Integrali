#include<iostream>
using namespace std;

void leggi_d(double d){
    if(!(cin >> d)){
        errore();
    }
    return;
}

void leggi_dd(double a, double b){ //leggi doppio double
    if(!(cin >> a >> b)){
        errore();
    }
    return;
}

void leggi_i(unsigned int &n){
    if(!(cin >> n)){
        errore();
    }
    return;
}

void errore(){
    cerr << "Errore di input" << endl; //sarebbe cout specifico per gli errrori
    exit(1);
}