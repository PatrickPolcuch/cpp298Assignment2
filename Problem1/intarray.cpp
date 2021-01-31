//intarray.cpp
#include <iostream>
using namespace std;
int main(int argc,char** argv);
int main(int argc,char** argv){
  int *numberArray = new int[argc-1];
  for(int i = 0; i<argc-1; ++i){//loops and adds the values to numberArray
    int temp = (stoi(argv[i+1]));
    numberArray[i]= temp;
  }
  for(int i = 0; i<argc-1; ++i){//loops to print the numbers in numberArray
    cout<<numberArray[i]<<endl;
  }
  delete numberArray;
  return 1;
}
