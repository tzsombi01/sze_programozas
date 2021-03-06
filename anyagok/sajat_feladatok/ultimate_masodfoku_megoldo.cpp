#include <iostream>
#include <math.h>
using namespace std;

int main() {
  cout<<"Másodfokú egyenlet kalkulátor"<<endl;
  cout<<"Amennyiben tiezed törttel számolna, pont operátorral adja meg a számokat. ";
  cout<<"(Például: 1.5)"<<endl;   
  double a,b,c,x1,x2,diszkriminans,komp1,komp2,gyok;
 //Adatok bekérése
  cout<<"Adja meg 'a' együtthatót:"; cin>>a;
  cout<<"Adja meg 'b' együtthatót:"; cin>>b;
  cout<<"Adja meg 'c' együtthatót:"; cin>>c;
  //Az 'a' együttható nem lehet 0 mivel akkor 0-ás osztó keletkezik.
  if(a==0){
    cout<<"Hiba, az egyenlet nem másodfokú. (0-ás osztó!)";
    return 0;
  } 
  //Ha a 'b' és 'c' együtthatók nullák, akkor az eredmény 0.
  if((b == 0) && (c==0)){
    cout<<"A feladat megoldása: 0";
    return 0;
  }
  //Az adatokból a képlet kiírása.
  cout<<"Az ön által megadott képlet: ";
  if(b>=0 && c>=0){
    cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl; 
  }
  else if(b<=0 && c>=0){
    cout<<a<<"x^2"<<b<<"x+"<<c<<"=0"<<endl;     
  }
  else if(b>=0 && c<=0){
    cout<<a<<"x^2+"<<b<<"x"<<c<<"=0"<<endl;     
  }
  else if(b<=0 && c<=0){
    cout<<a<<"x^2"<<b<<"x"<<c<<"=0"<<endl;     
  }
  //Diszkrimináns és a gyökös tag meghatározása.
  diszkriminans= (b*b-4*a*c);
  gyok= sqrt(diszkriminans);
  //Ha két megoldása van az egyenletnek:
  if(diszkriminans > 0){
    x1=(-b + gyok)/(2*a);
    x2=(-b - gyok)/(2*a);
    cout<<"Az ön képletének két megoldása:"<<endl;
    cout<<"X1="<<x1<<endl;
    cout<<"X2="<<x2<<endl;
  //Ha egy megoldása van az egyenletnek:
  }else if(diszkriminans == 0){
    cout<<"Az ön képletének egy megoldása van:"<<endl;
    cout<<"X1=X2="<<x1;
  //Ha komplex megoldása van az egyenletnek:
  }else if(diszkriminans<0){
    cout<<"A gyök alatt negatív szám jött ki:"<<diszkriminans<<endl;
    komp1=abs(diszkriminans);
    komp2=(-b)/(2*a);
    cout<<"Diszkrimináns komplexként: "<<sqrt(komp1)<<"i"<<endl;
    cout<<"Az ön képletének komplex megoldásai:"<<endl;
    cout<<"X1="<<komp2<<"+"<<"("<<sqrt(-diszkriminans)/(2*a)<<"i"<<")"<<endl;
    cout<<"X2="<<komp2<<"-"<<"("<<sqrt(-diszkriminans)/(2*a)<<"i"<<")"<<endl;
  }
  return 0;
}

