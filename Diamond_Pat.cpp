//diamond shape of alphabets...
#include<iostream>
using namespace std;
int main(){
    int n=5;
    //upper triangle
    for( int line=1;line<=n;line++){
        int x=n-line;
        for( int i=0;i<x;i++){
            cout<<" ";
        }
        int y=2*line-1;
        for( int j=0;j<y;j++)
{
    cout<<(char)('A'+j);
}
cout<<"\n";
    }
// lower triangle

for( int line=n+1;line<=2*n-1;line++){
        int x=line-n;
        for( int i=0;i<x;i++){
            cout<<" ";
        }
        int y=2*(2*n-line)-1;
        for( int j=0;j<y;j++)
{
    cout<<(char)('A'+j);
}
cout<<"\n";
    }




    return 0;
}