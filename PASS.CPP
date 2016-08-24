#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
int main()
{
	int m,n,z,x=0,r=0;
	char c,l[654],s[50][654];
	ofstream fo("password.txt",ios::out);
	ifstream fi("password.txt",ios::in);
	cout<<"Enter length of password(max 50):";
	cin>>m;
	cout<<"Enter no. of alphabets(max 95):";
	cin>>n;
	do
	{
		z=0;
		do
		{
			c=(char)(32);
			for(int i=0;i<n;i++)
			{
				char(++c);
				for(int j=0;j<pow(n,x);j++)
				{
					fo<<c;
					z++;
				}
			}
		}while(z<pow(n,m));
		++x;
		fo<<"\n";
	}while(x<m);
	fo.close();
	while(!fi.eof())
	{
		fi>>l;
		for(int t=0;t<pow(n,m);t++)
			s[r][t]=l[t];
		r++;
	}
	ofstream fof("password.txt",ios::out);
	for(int t=0;t<pow(n,m);t++)
	{
		cout<<"\n";
		fof<<"\n";
		for(int i=0;i<m;i++)
		{
			fof<<s[i][t];
			cout<<s[i][t];
		}
	}
	fi.close();
	fof.close();
	return 0;
}
