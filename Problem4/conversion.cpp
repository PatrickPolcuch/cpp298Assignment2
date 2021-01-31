//conversion.cpp
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc,char** argv);
float userIn();
float calc(float feet);
void consoleOut(float meters);
int main(int argc,char** argv){
  string user = "nope";
  while(user!="exit"){//so the user can try multiple times if they want
    consoleOut(calc(userIn()));
    cout<<"Type exit to end program, type anything else to try a new number."<<endl;
    cin>>user;
  }
}

float userIn(){//gets the amount of feet and inches from the user and returns the distance as feet (so 1 foot 6inches = 1.5feet)
  cout<<"How many feet?"<<endl;
  float feet;
  cin>>feet;
  cout<<"How many inches?"<<endl;
  float inches;
  cin>>inches;
  return (feet+(inches/12));
}

float calc(float feet){//calculates how many meters
  return (feet*0.3048);
}

void consoleOut(float meters){//outputs result to user
  cout<<"That equals "<<meters<<" meters,"<<endl;
  cout<<"or "<<meters-fmod(meters,1)<<" meters "<<fmod(meters,1)*100<<" centimeters."<<endl;
}
