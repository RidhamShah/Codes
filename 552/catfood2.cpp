#include<bits/stdc++.h>
#include<algorithm>
#define fr(i,n) for(long long i=0;i<n;i++)
using namespace std;

int main()
{
	long long f,r,c;
	cin>>f>>r>>c;

	long long mn=min(f/3, min(r,c)/2);
	f=f-mn*3;
	r=r-mn*2;
	c=c-mn*2;
	long long ans=mn*7;
	long long ar[7]={0};
	long long arr[14]={1,2,3,1,3,2,1,1,2,3,1,3,2,1};
	long long ff=f,cc=c,rr=r;
	
	
	for(int j=0;j<7;j++)
	{
		f=ff;
		c=cc;
		r=rr;
		for (long long i = j; i < 7+j; ++i)
		{
			if(arr[i]==1 && f>0)
			{
				f--;
				ar[j]++;
				continue;
			}
		
			if(arr[i]==2 && r>0)
			{
				r--;
				ar[j]++;
				continue;
			}
			
			if(arr[i]==3 && c>0)
			{
				c--;
				ar[j]++;
				continue;
			}
			break;
		}		
	}
	/*
	for (long long i = 0; i < 7; ++i)
	{
		if(arr[i]==1 && f>0)
		{
			f--;
			ar[0]++;
			continue;
		}
			
		if(arr[i]==2 && r>0)
		{
			r--;
			ar[0]++;
			continue;
		}
		if(arr[i]==3 && c>0)
		{
			c--;
			ar[0]++;
			continue;
		}
		break;
	}

	f=ff;
	c=cc;
	r=rr;
	for (long long i = 1; i < 8; ++i)
	{
		if(arr[i]==1 && f>0)
		{
			f--;
			ar[1]++;
			continue;
		}
			
		if(arr[i]==2 && r>0)
		{
			r--;
			ar[1]++;
			continue;
		}
		
		if(arr[i]==3 && c>0)
		{
			c--;
			ar[1]++;
			continue;
		}
		
		break;
		
	}
	f=ff;
	c=cc;
	r=rr;
	for (long long i = 2; i < 9; ++i)
	{
		if(arr[i]==1 && f>0)
		{
			f--;
			ar[2]++;
			continue;
		}
			
		if(arr[i]==2 && r>0)
		{
			r--;
			ar[2]++;
			continue;
		}
		
		if(arr[i]==3 && c>0)
		{
			c--;
			ar[2]++;
			continue;
		}
		break;
	}
	f=ff;
	c=cc;
	r=rr;
	for (long long i = 3; i < 10; ++i)
	{
		if(arr[i]==1 && f>0)
		{
			f--;
			ar[3]++;
			continue;
		}
			
		if(arr[i]==2 && r>0)
		{
			r--;
			ar[3]++;
			continue;
		}
		
		if(arr[i]==3 && c>0)
		{
			c--;
			ar[3]++;
			continue;
		}
		break;
	}
	f=ff;
	c=cc;
	r=rr;
	for (long long i = 4; i < 11; ++i)
	{
		if(arr[i]==1 && f>0)
		{
			f--;
			
			ar[4]++;
			continue;
		}
			
		if(arr[i]==2 && r>0)
		{
			r--;
			ar[4]++;
			continue;
		}
		
		if(arr[i]==3 && c>0)
		{
			c--;
			ar[4]++;
			continue;
		}
		break;
	}
	f=ff;
	c=cc;
	r=rr;
	for (long long i = 5; i < 12; ++i)
	{
		if(arr[i]==1 && f>0)
		{
			f--;
			ar[5]++;
			continue;
		}
			
		if(arr[i]==2 && r>0)
		{
			r--;
			ar[5]++;
			continue;
		}
		
		if(arr[i]==3 && c>0)
		{
			c--;
			ar[5]++;
			continue;
		}
		break;
	}
	f=ff;
	c=cc;
	r=rr;
	for (long long i = 6; i < 13; ++i)
	{
		//cout<<i;
		if(arr[i]==1 && f>0)
		{
			f--;
			//cout<<"ya";
			ar[6]++;
			continue;
		}
		
			
		if(arr[i]==2 && r>0)
		{
			r--;
			//cout<<"ea";
			ar[6]++;
			continue;
		}
		
		if(arr[i]==3 && c>0)
		{
			c--;
			//cout<<"ad";
			ar[6]++;
			continue;
		}
		break;
	}
	*/
	sort(ar,ar+7,greater<int>());
	
	cout<<ans+ar[0];
}
