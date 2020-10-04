#include<bits/stdc++.h>
#include<algorithm>
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int f,r,c;
	cin>>f>>r>>c;

	int mn=min(f/3, min(r,c)/2);
	f=f-mn*3;
	r=r-mn*2;
	c=c-mn*2;
	int ans=mn*7;
	int ar[7]={0};
	int arr[14]={1,2,3,1,3,2,1,1,2,3,1,3,2,1};
	int ff=f,cc=c,rr=r;

	for (int i = 0; i < 7; ++i)
	{
		if(arr[i]==1)
			f--;
		else if(arr[i]==2)
			r--;
		else
			c--;
		ar[0]++;
		if(f==0 || r==0 || c==0)
			break;
	}

	f=ff;
	c=cc;
	r=rr;
	for (int i = 1; i < 8; ++i)
	{
		if(arr[i]==1)
			f--;
		else if(arr[i]==2)
			r--;
		else
			c--;
		ar[1]++;
		if(f==0 || r==0 || c==0)
			break;
	}
	f=ff;
	c=cc;
	r=rr;
	for (int i = 2; i < 9; ++i)
	{
		if(arr[i]==1)
			f--;
		else if(arr[i]==2)
			r--;
		else
			c--;
		ar[2]++;
		if(f==0 || r==0 || c==0)
			break;
	}
	f=ff;
	c=cc;
	r=rr;
	for (int i = 3; i < 10; ++i)
	{
		if(arr[i]==1)
			f--;
		else if(arr[i]==2)
			r--;
		else
			c--;
		ar[3]++;
		if(f==0 || r==0 || c==0)
			break;
	}
	f=ff;
	c=cc;
	r=rr;
	for (int i = 4; i < 11; ++i)
	{
		if(arr[i]==1)
			f--;
		else if(arr[i]==2)
			r--;
		else
			c--;
		ar[4]++;
		if(f==0 || r==0 || c==0)
			break;
	}
	f=ff;
	c=cc;
	r=rr;
	for (int i = 5; i < 12; ++i)
	{
		if(arr[i]==1)
			f--;
		else if(arr[i]==2)
			r--;
		else
			c--;
		ar[5]++;
		if(f==0 || r==0 || c==0)
			break;
	}
	f=ff;
	c=cc;
	r=rr;
	for (int i = 6; i < 13; ++i)
	{
		if(arr[i]==1)
			f--;
		else if(arr[i]==2)
			r--;
		else
			c--;
		ar[6]++;
		if(f==0 || r==0 || c==0)
			break;
	}
}