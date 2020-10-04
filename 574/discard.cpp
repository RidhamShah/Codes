	#include<bits/stdc++.h>
	#include<algorithm>
	#include<functional>
	#define f(n) for(long long int i=0;i<n;i++)
	#define g(n) for(long long int j=0;j<n;j++)
	#define t(a) long long int a;cin>>a
	using namespace std;

	int main(int argc, char const *argv[])
	{
		t(n);
		t(m);
		t(k);
		std::vector<long long int> v;
		f(m)
		{
			t(a);
			v.push_back(a);
		}

		long long int d=0,turn=0;
		long long int ch=(v[0]/k)+k,c=v.size();
		f(c)
		{
			//cout<<v[0]<<"&"<<ch;
			if(v[0]<=ch)
			{
				d++;
				v.erase(v.begin());
			}
			else
			{
				
				if(d==0)
				{
					ch+=k;
				}
				else
				{
					turn++;
					ch=+d;
					d=0;
				}
				i--;
			}
			//cout<<"t="<<turn<<endl;
		}
		// while(v.size())
		// {
		// 	aa:;
		// 	for(v.size())
		// 	{
		// 		if(v[0]<ch)
		// 		{
		// 			d++;
		// 			v.erase(v.begin());
		// 		}
		// 		else
		// 		{
		// 			if(d!=0)
		// 			{
		// 				ch+=d;
		// 				turn++;
		// 				d=0;
		// 			}
		// 			else
		// 			{
		// 				ch+=k;
		// 			}
		// 			goto aa;
		// 		}
		// 	}
		// }
		cout<<turn+1;
		return 0;
	}