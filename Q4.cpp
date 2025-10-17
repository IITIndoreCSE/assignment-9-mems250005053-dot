#include<iostream>
using namespace std;

struct SalesRecord{
char month[20];
float amount;
};

int main(){
  SalesRecord arr[12];
  float x=0, x1=0;
  float y,y1=0;
  
  for(int i=0; i<12; i++){
    float a;
    char b[20];
    
    cout<<"Enter record of sales \n";
    cout<<"Enter month :";
    cin>>b;
    cout<<"Enter amount";
    cin>>a;
    cout<<"\n";
    arr[i].amount=a;
    arr[j].month=b;
  }
  float y= arr[0];
  for(int j=0; j<12; j++){
    if(arr[j]>x){
      x=arr[j];
      x1=j;
    }
    if(arr[j]<y){
      y=arr[j];
      y1=j;
    }
    
  }
  cout<<"Month with maximum sales : "<<arr[x1].month<<"\n";
  cout<<"Month with minimum sales : "<<arr[y1].month;
  return 0;
}
