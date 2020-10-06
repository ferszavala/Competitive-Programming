#include<iostream>
using namespace std;

int main()
{
    int c=0, n=0, max, vel=0;
    cin>>c;

    for(int i=1; i<=c; i++)
    {
        max = 1;
        cin>>n;

        while (n--)
        {
            cin>>vel;
            
            if(max<vel)
            {
                max = vel;
            }
        }
        cout<<"Case "<<i<<": "<<max<<endl;
    }
}