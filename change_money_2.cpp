#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin>>N;
    int t5000=N/5000;
    N%=5000;
    int t2000=N/2000;
    N%=2000;
    int t1000=N/1000;
    N%=1000;
    cout<<t5000<<" "<<t2000<<" "<<t1000;
}
