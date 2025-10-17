#include<iostream>
using namespace std;

struct Color{
  int red;
int blue;
int green;
  
};

int main(){
  
  Color arr[5];
  arr[0]={50,100,150};
  arr[1]={51,101,151};
  arr[2]={52,102,152};
  arr[3]={53,103,153};
  arr[4]={54,104,154};
  arr[5]={55,105,155;}
  
  
  for(int j=0; j<3;j++){
    arr[j].red=255-arr[j].red;
    arr[j].green= 255- arr[j].green;
    arr[j].blue= 255- arr[j].blue;
    
  }

  for(int i=0; i<5;i++){
    cout<<"RGB values of "<<i<<" structure are: "<<arr[i].red<<" , "<<arr[i].green<<" , "<<arr[i].blue;
    cout<<"\n";
  }
  return 0;
}

