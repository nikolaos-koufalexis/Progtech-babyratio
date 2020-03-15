#ifndef CONTEST  
#include "babyratio.hpp"
#endif  
#include <iostream>  
  
using namespace std;  
  
rational::rational (int n,int d){  
  nom=n;  
  den=d;  
  int gcd=rational::gcd(nom,den);  
  den/=gcd;  
  nom/=gcd;  
}  
  
rational rational::add(rational r){  
  r.nom=r.nom*den+r.den*nom;  
  r.den=r.den*den;  
  int gcd=rational::gcd(r.nom,r.den);  
  r.den/=gcd;  
  r.nom/=gcd;  
  return r;  
}  
  
rational rational::sub(rational r){  
  r.nom=-(r.nom*den)+(r.den*nom);  
  r.den=r.den*den;  
  int gcd=rational::gcd(r.nom,r.den);  
  r.den/=gcd;  
  r.nom/=gcd;  
  return r;  
}  
  
rational rational::mul(rational r){  
  r.nom=r.nom*nom;  
  r.den=r.den*den;  
  int gcd=rational::gcd(r.nom,r.den);  
  r.den/=gcd;  
  r.nom/=gcd;  
  return r;  
}  
  
  
rational rational::div(rational r){  
  r.nom=r.nom*den;    
  r.den=r.den*nom;  
  int gcd=rational::gcd(r.nom,r.den);  
  r.den/=gcd;  
  int temp=r.den;  
  r.nom/=gcd;  
  r.den=r.nom;  
  r.nom=temp;  
  return r;  
}  
  
void rational::print(){
  nom=den<0 ? -nom : nom;
  den=den<0 ? -den : den;
  cout<<nom<<"/"<<den;  
}  
  
int rational::gcd(int a,int b){  
  
  if (b == 0){  
    return a;  
  }  
  else{  
    return gcd(b, a % b);  
  }  
}  
