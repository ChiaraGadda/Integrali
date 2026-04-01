#include <iostream>
#include "personal.cpp"

int main()
{
 double c1,c2,c3,a,b;
 unsigned int n;
 //std::cout<<"Inserisci parametri, intervallo, n campionamento";
 //std::cin>>c1>>c2>>c3>>a>>b>>n;
 leggi_d(c1);
 leggi_d(c2);
 leggi_d(c3);
 leggi_d(a);
 leggi_d(b);
 leggi_i(n);
 double s=(b-a)/n; //lo calcolo qui, così ogni volta non devo farlo nel for visto cche da lo stesso ris
	
 for(int i=0; i<=n; i++) {
  double x = a + i * s;
  double y = c1 + c2 * x + c3 * x * x;
  std::cout << x << "\t" << y << std::endl; //se devo solo stampare posso fare i calcoli qua
 }
	
	
 return 0;
}
