/*A particle has initial velocity and acceleration. If its velocity after certain time is v then what will its
displacement be in twice of that time?*/
#include<iostream>

using namespace std;

int main()
{
    int v = 0;
    int t = 0;
    while(cin>>v && cin>>t)
    {
        cout<<2*v*t<<endl;
    }
    return 0;
}