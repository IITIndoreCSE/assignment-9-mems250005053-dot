#include<iostream>
using namespace std;

struct Item{
  int id;
  float cost;
};

int main(){
  Item i1;
  Item i2;
  Item i3;
  Item i4;
  Item i5;
  Item i6;

  Item arr[6];
  cout<<"Plese enter values for first four elements";
  arr[0]={100,20.34};
  arr[1]={101,60.34};
  arr[2]={103,30.34};
  arr[3]={104,110.34};
  
  cout<<"Item with price greater than 50.00 are ";
  for(int j=0; j<6 ;j++){
    if(arr[j].cost>50){
      cout<<"The id of the item is: "<<arr[i].id;
    }
  }
  return 0;
}
