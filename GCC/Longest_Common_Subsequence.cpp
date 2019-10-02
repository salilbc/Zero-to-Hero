#include<iostream>
using namespace std;
char **b;
int **C,m,n;
void LCS(string s1,string s2)
{
	m=s1.length();
	n=s2.length();
	C=new int*[m+1];
	b=new char*[m+1];
	for(int i=0;i<=m;i++)
	{
		C[i]=new int[n+1];
		b[i]=new char[n+1];
		C[i][0]=0;
	}
	for(int i=0;i<=n;i++)
		C[0][i]=0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				C[i][j]=C[i-1][j-1]+1;
				b[i][j]='\\';
			}
			else if(C[i][j-1]>=C[i-1][j])
			{
				C[i][j]=C[i][j-1];
				b[i][j]='-';
			}
			else
			{
				C[i][j]=C[i-1][j];
				b[i][j]='|';
			}
		}
	}
}
void disp(string s1,int i,int j)
{
	if(i==0||j==0)
	return;
	if(b[i][j]=='\\')
	{
		disp(s1,i-1,j-1);
		cout<<s1[i-1];
	}
	else if(b[i][j]=='|')
	disp(s1,i-1,j);
	else if(b[i][j]=='-')
	disp(s1,i,j-1);
}
int main()
{
	string s1,s2;
	cout<<"Enter two strings: \n";
	cin>>s1>>s2;
	LCS(s1,s2);
	cout<<"Longest Common Subsequence in the 2 entered strings: ";
	disp(s1,m,n);
	cout<<"\nLength of LCS is: "<<C[m][n];
	return 0;
}