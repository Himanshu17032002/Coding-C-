#include<iostream>
#include<vector>
using namespace std;
//finding the last occurence of element in the array.
int main(){
vector<int>v(6);
cout<<"enter values"<<endl;
for(int i=0;i<6;i++){
    cin>>v[i];
}
int key,ans=-1;
cout<<"enter key"<<endl;
cin>>key;
//from begining
cout<<"form begining"<<endl;
for(int i=0;i<v.size();i++){
    if(v[i]==key){
        ans=i;
    }
}
cout<<ans<<endl;

// from last
cout<<"form last"<<endl;
for(int i=v.size()-1;i>=0;i--){
    if(v[i]==key){
        ans=i;
        break;
    }
}
cout<<ans<<endl;

// no. of occurence of a key

int count=0;
cout<<"No. of occurence"<<endl;
for(int i=0;i<v.size();i++ ){
    if(v[i]==key){
        count++;
    }
}
cout<<count<<endl;

// no. of strictly greater element than key

cout<<"No. of greater"<<endl;
for(int i=0;i<v.size();i++ ){
    if(v[i]>key){
        count++;
    }
}
cout<<count<<endl;
}