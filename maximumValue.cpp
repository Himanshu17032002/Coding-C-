#include<iostream>
using namespace std;
int main(){
    int A[]={3,4,10,11};
    int size=sizeof(A)/sizeof(int);
    int maxi=0;
    for(int i=0;i<size;i++){
      {
         maxi=max(maxi,A[i]);
       }
    }
    cout<<maxi<<endl;
    return 0;

}