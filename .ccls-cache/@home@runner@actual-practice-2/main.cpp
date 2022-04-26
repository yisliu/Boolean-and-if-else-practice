#include <iostream>
using namespace std;

int main() {
  bool b = true;
  cout<<b;
  b = true;
  cout<<"Bool test\n";
  cout<<b<<endl;
  b = false;
  cout<<b<<endl;
  cout<<"Tots not bool: "<<(not b)<<endl;
  for (int i = 0; i<10; i++){
    cout<<i<<"/9\n";
  }
  int f = 0;
  cout<<"insert number 1 to 4:\n";
  cin>>f;
  //int end = 0;
    if (f==1){
      cout<<"north\n";

    }
    else if (f==2){
      cout<<"west\n";
    }
    else if (f==3){
      cout<<"south\n";
    }
    else if (f==4){
      cout<<"east\n";
    }
  int s;
  cout<<"Enter a score between 1 to 100\n";
  cin>>s;
  if (s<50){
    cout<<"You get a f-";
  }
  else if (s<60){
    cout<<"You get a f";
  }
  else if (s<70){
    cout<<"You get a d";
  }
  else if (s<80){
    cout<<"You get a c";
  }
  else if (s<90){
    cout<<"You get a b";
  }
  else if (s>=90){
    cout<<"You get an a";
  }
}