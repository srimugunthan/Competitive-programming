#include<iostream>
using namespace std;
unsigned int divisors(unsigned int n)
{
	unsigned int count=0;
	for(int i=2;i<=n;i++)
	{      
		if(n%i==0)
		{ 
			if(i*i>n)
			{	
				break;
			}
			else
			{
				count++;
			}
		}

	}
	count++;
	return count;

}
int main()
{
	unsigned int num,ans=0;
	cin>>num;
	num++;
	while(num--)
	{
		ans+=divisors(num);	

	}
	ans--;
	cout<<ans<<endl;
	return 0;
}
