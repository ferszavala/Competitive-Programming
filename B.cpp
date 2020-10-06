#include<iostream>
using namespace std;

int main() 
{
	int c=0, n=0, m=0;
	cin>>c;
	while(c--)
    {
		cin>>n; cin>>m;
		cout<<(n/3)*(m/3)<<endl;
	}

	return 0;
}