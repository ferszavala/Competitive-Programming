/*Some operators checks about the relationship between two values and these operators are called relational operators. Given two numerical values 
your job is just to find out the relationship between them that is (i) First one is greater than the second (ii) First one is less than the 
second or (iii) First and second one is equal.*/
#include <iostream>

using namespace std;

int main() 
{
	int n=0;
    int a=0;
    int b=0;
	cin>>n;
	for(int i=0;i<n;i++)
    {
		cin>>a; cin>>b;
		if(a<b) 
        {
            cout<<"<"<<endl;
        }
		else if(a>b)
        {
            cout<<">"<<endl;
        }
		else 
        {
            cout<<"="<<endl;
        }
	}

	return 0;
}