#include <iostream>
using namespace std;

int main() 
{
	int c=0, l=0, w=0, h=0;
	cin>>c;
	for(int i=1; i<=c; i++)
    {
		cin>>l; cin>>w; cin>>h;
		if(l<=20 && w<=20 && h<=20)
        {
            cout<<"Case "<<i<<": good"<<endl;
        }
		else
        {
            cout<<"Case "<<i<<": bad"<<endl;
        } 
	}

	return 0;
}