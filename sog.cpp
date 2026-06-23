#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin>>a;
    int tmp=a;
    long long res=0;
    while(tmp){
        int rem = tmp%10;
        res += rem;
        tmp/=10;
    }
    cout<<res;
}
