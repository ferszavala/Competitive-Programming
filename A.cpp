#include <iostream>
using namespace std;

int main()
{
    int c=0, n;
    cin>>c;
    while(c--) 
    {
        cin>>n;
        n = (((((n*567)/9)+7492)*235)/47)-498;
        if(n<0)
        {
            n = n*(-1);
        }
        cout<<n/10%10<<endl;
    }
    return 0;
}