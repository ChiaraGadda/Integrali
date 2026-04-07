#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

void errore(int codice) {
    cerr << "ERRORE: ";
    switch (codice) {
        case 1:
            cerr << "Input non valido." << endl;
            break;
        case 2:
            cerr << "Intervallo non valido (a > b)." << endl;
            break;
        case 3:
            cerr << "Numero di intervalli (n) no zero." << endl;
            break;
        case 4:
            cerr << "File terminato inaspettatamente." << endl;
            break;
        default:
            cerr << "Errore generico" << endl;
            break;
    }
    exit(codice);
}

bool leggi_d(double &d){
    if(!(cin >> d)){
        if(cin.eof()){
            return false; // vedo se sono a fine del file
        }
        errore(1);
    }
    return true;
}

bool leggi_dd(double &a, double &b){
    if(!(cin >> a >> b)){
        if(cin.eof()){
            return false; // fine del file
        }//qua è come se ci fosse else
        errore(1);
    }
    return true;
}

void leggi_f(double &a, double &b, double &c){
    if(!(cin >> a >> b >> c)){
        errore(1);
    }
    return;
}

void leggi_i(unsigned int &n){
    if(!(cin >> n)){
        errore(1);
    }
    return;
}

// se cambio il return posso calcolare altre funzioni, in quel caso dovrei sistemare anche leggi_f e le dichiarazioni delle variabili
double f(double x, double c1, double c2, double c3){
    return c1 + c2 * x + c3 * x * x;
}

//extra

#include <muParser.h> //(dopo aver installato tramite packetmanager muparser -> sudo dnf install muParser-devel su fedora)

void leggi_funct(string &f){
    if(!(cin>>f))
        errore(1);
}

double calc_funct(string &f, double x){ //lavora ad "oggetti" , fa il try catch per gestire se la funzione è impossibile ecc.
    try{ 
    mu::Parser p; //oggetto tipo parser
    p.DefineVar("x", &x); //definisco la variabile x che sarà usata nella funzione
    p.SetExpr(f); //definisco l'espressione da calcolare
    return p.Eval(); 
    } catch (mu::Parser::exception_type &e) {
        exit(1);
    }
}