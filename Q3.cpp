#include<iostream>
using namespace std;

struct Point{
float x;
float y;
};

int main(){
  Point arr[7];
  for(int i=0; i<7; i++){
    float a,b;
    int n=0;
    cout<<"Enter "<<i<<" set of coordinates\n";
    cout<<"Enter x coordinate :";
    cin>>a;
    cout<<"Enter y coordinate :";
    cin>>b;
    cout<<"\n";
    arr[i].x=a;
    arr[j].y=b;
  }
  for(int j=0; j<7; j++){
    if(arr[j].x>0 && arr[j].y>0){
      n++;
    }
  }
  cout<<"The no. of points in first quadrant are : "<<n;
  return 0;
}
