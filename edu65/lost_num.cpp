#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=1;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c,d,a1,a2,b1,b2,c1,c2,d1,d2;

	cout<<"? 1 2\n";
	cin>>a;
	fflush(stdout);
	cout<<"? 1 3\n";
	cin>>b;
	fflush(stdout);
	cout<<"? 4 5\n";
	cin>>c;
	fflush(stdout);
	cout<<"? 4 6\n";
	cin>>d;
	fflush(stdout);

	int arr[6]={4,8,15,16,23,42};
	int brr[6]={0};
	f(6)
	{
		g(6)
		{
			if(arr[i]*arr[j]==a && i!=j)
			{
				a1=arr[i];
				a2=arr[j];
			}

			if(arr[i]*arr[j]==b && i!=j)
			{
				b1=arr[i];
				b2=arr[j];
			}

			if(arr[i]*arr[j]==c && i!=j)
			{
				c1=arr[i];
				c2=arr[j];
			}

			if(arr[i]*arr[j]==d && i!=j)
			{
				d1=arr[i];
				d2=arr[j];
			}
		}

		if(a1==b1)
		{
			brr[0]=a1;
			brr[1]=a2;
			brr[2]=b2;
		}
		else if(a1==b2)
		{
			brr[0]=a1;
			brr[1]=a2;
			brr[2]=b1;
		}
		else if(a2==b1)
		{
			brr[0]=a2;
			brr[1]=a1;
			brr[2]=b2;
		}
		else if(a2==b2)
		{
			brr[0]=a2;
			brr[1]=a1;
			brr[2]=b1;
		}

		if(c1==d1)
		{
			brr[3]=c1;
			brr[4]=c2;
			brr[5]=d2;
		}
		else if(c1==c2)
		{
			brr[3]=c1;
			brr[4]=c2;
			brr[5]=d1;
		}
		else if(c2==d1)
		{
			brr[3]=c2;
			brr[4]=c1;
			brr[5]=d2;
		}
		else if(c2==d2)
		{
			brr[3]=c2;
			brr[4]=c1;
			brr[5]=d1;
		}
	}

	cout<<"! ";
	f(6)
	{
		cout<<brr[i]<<" ";
	}
	return 0;
}