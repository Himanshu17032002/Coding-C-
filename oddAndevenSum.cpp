#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,5,6,4,9};
    int evensum=0,oddsum=0;
    for(int i=0;i<7;i++){
      if(i%2==0){
        evensum+=A[i];
      }
      else{
        oddsum+=A[i];
      }
    }
    cout<<"even sum:"<<evensum<<endl;
    cout<<"odd sum:"<<oddsum<<endl;
    cout<<"difference of oddsum and evensum :"<<oddsum-evensum<<endl;
}