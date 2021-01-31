//zeroboth.cpp
#include <iostream>
using namespace std;
int main(int argc,char** argv);
void zeroBoth(int *a, int*b);
int main(int argc,char** argv){
  int a = 10;
  int b = 12;
  int *c = &a;
  int *d = &b;
  zeroBoth(c,d);
  cout<<a<<"\n"<<b<<endl;
}

void zeroBoth(int *a, int*b){
  *a=0;
  *b=0;
}
