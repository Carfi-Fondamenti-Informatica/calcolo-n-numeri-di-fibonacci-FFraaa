#include <iostream>
using namespace std;

int main() {
    int a=0,b=1,n=0,c=a+b;
cin>>n;
cout<<b<<endl;
for(int i=2;i<(n+1);i++){
    if(c<=n){
        cout<<c<<endl;
        a=b;
        b=c;
        c=a+b;
    }
}
    return 0;
}

