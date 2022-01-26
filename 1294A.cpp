#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int max=a>b?a>c?a:c:b>c?b:c;
        cout<<max<<endl;


    }
    return 0;
}