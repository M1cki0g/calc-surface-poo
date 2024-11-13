#include "surface.h"

using namespace std;

float rectangle::surface(){
return a*b;
}

rectangle::rectangle(float a , float b){
this->a=a;
this->b=b;
}

void rectangle::afficher(){
cout<<a<<endl;
cout<<b<<endl;
}

int main(){
rectangle r1(4,2);
r1.afficher();
cout<<"surface = "<<r1.surface()<<endl;
return 0;
}
