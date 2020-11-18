#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int ar[10000]={1};
    int carry=0,end=0;
    for(int i=2;i<=n;i++){
        for(int j=0;j<=end;j++){
            int mul=ar[j]*i+carry;
            ar[j]=mul%10;
            carry=mul/10;
        }
        while(carry!=0){
            ar[++end]=carry%10;
            carry/=10;
        }
    }
    for(int i=end;i>=0;i--)
        cout<<ar[i];
}


