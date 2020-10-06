#include<iostream>

using namespace std;

int main()
{
    int a, b, c, n;
    cin>>a; cin>>b; cin>>c; cin>>n;
    int suma = a+b+c;
    if(a<=0 || b<=0 || c<=0 || n<3)
    {
        cout<<"NO"<<endl;
    }
    else if(n<=suma)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}