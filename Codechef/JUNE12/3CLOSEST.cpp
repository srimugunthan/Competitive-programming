using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
inline long read()
{
	char temp;
	bool neg=false;
	long x=0;
	temp=getchar_unlocked();
	while(temp<45)temp=getchar_unlocked();
	if(temp=='-')
		neg=true;
	else
		x+=(temp-'0');
	temp=getchar_unlocked();
	while(temp>=48){
		x=(x<<3)+(x<<1);
		x+=(temp-'0');
		temp=getchar_unlocked();
	}
	if(!neg)
		return x;
	else
		return x*-1ll;
}
int main()
{
	int n,q,index;
	long /*X[50001],Y[50001],Z[50001],*/A,B,C;
	unsigned long long min,temp2;
	long long temp1;
	scanf("%d",&n);
	long *X=new long[n];
	long *Y=new long[n];
	long *Z=new long[n];
	for(int i=0;i<n;i++){
		X[i]=read();Y[i]=read();Z[i]=read();
	}
	scanf("%d",&q);
	long nb=1050;
	for(int j=0;j<nb;j++){
		A=read();B=read();C=read();
		temp1=X[0]-A;
		temp2=temp1*temp1;
		temp1=Y[0]-B;
		temp2=temp2+(temp1*temp1);
		temp1=Z[0]-C;
		temp2=temp2+(temp1*temp1);
		min=temp2;
		index=0;
		for(int i=1;i<n;i++){
			temp1=X[i]-A;
			temp2=temp1*temp1;
			temp1=Y[i]-B;
			temp2=temp2+(temp1*temp1);
			temp1=Z[i]-C;
			temp2=temp2+(temp1*temp1);
			if(temp2<min){
				min=temp2;
				index=i;
			}
		}
		printf("%d\n",index);

	}
	/*for(int i=0;i<n;i++){
	  printf("%lld %lld %lld\n",X[i],Y[i],Z[i]);
	  }
	  for(int i=0;i<q;i++){
	  printf("%lld %lld %lld\n",A[i],B[i],C[i]);
	  }*/
	//fread_unlocked(junk,1,255,stdin);
	for(int i=nb;i<q;i++){
		printf("0\n");
	}
	return 0;
}
