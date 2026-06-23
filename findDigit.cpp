#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin>>a;
    int tmp=a;
    while(tmp){
        cout<<tmp%10<<" ";
        tmp/=10;
    }
}
