 #include<iostream>
 using namespace std;
 int main(){
    int A[]={3,5,4,8,11};
    int n=sizeof(A)/sizeof(int);
    int key=8;
    int ans=-1;
    for(int i=0;i<n;i++){
        if(A[i]==key){
            ans=i;
            break; //to just reduce the traversal
        }
    }
    cout<<ans<<endl;
    return 0;
 }