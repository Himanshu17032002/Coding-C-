#include<iostream>
using namespace std;
int main(){
    int A[]={3,4,10,11};
    int size=sizeof(A)/sizeof(int);
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+A[i];
    }
    cout<<sum<<endl;
    return 0;

}