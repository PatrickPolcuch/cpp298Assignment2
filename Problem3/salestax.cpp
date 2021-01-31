//salestax.cpp
#include <iostream>
using namespace std;
int main(int argc,char** argv);
float addTax(float taxRate, float cost);
int main(int argc,char** argv){
  cout<<addTax(0.08,1.00)<<endl;
  return 1;
}

float addTax(float taxRate, float cost){
  return ((taxRate+1)*cost);//I interpreted 8% as 0.08, but if 8%=8, replace taxRate with taxRate/100
}
