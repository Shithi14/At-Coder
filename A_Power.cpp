//https://atcoder.jp/contests/abc283/tasks/abc283_a?lang=en

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    int a,b;
    cin>>a>>b;
    int mul=1;
    for (int i=1;i<=b;i++){
        mul*=a;
    }
    cout<<mul<<endl;


   

return 0;
}