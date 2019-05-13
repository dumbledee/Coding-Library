#include<iostream>
using namespace std;
void patternmatcher(string text, string pat)
{
	 string s = pat+"$"+text;
     int n=s.length();
     int i,l,r,a[n],set[n],temp,id,t,flag=0;
     a[0]=-1;
     //to calculate the first non zero z-box and corresponding l and r
     for(i=1;i<n;i++)
     {
     	if(s[i]!=s[0])
     		{
     			a[i]=0;
     		}
     	else
     	{
     		temp=0;
     		int j=i;
     		for(int t=0;j<n,t<n;t++,j++)
     			if(s[j]==s[t])
     				temp++;
     			else
     				break;
     			a[i]=temp;
     			l=i;
     			r=l+temp-1;
     			break;
     	}
     }
     i++;
     //first non zero z box calculated
     //now we can proceed with calculation of other z boxes
     while(i<n)
     {
           if(r<i)//the previous z box ends before the current index to be considered
           {
           	temp=0;
           	t=i;
           	for(int j=0;t<n,j<n;j++,t++)
           		{
           			if(s[t]==s[j])
           			temp++;
           		    else
           		     break;
           	     }
           	a[i]=temp;
            l=i;
            r=l+temp-1;
            i++;
           }	
           else//the previous z box touches or crosses the index
           {
           	    id= i-l;
                if(id+a[id]<=r-l)//the z box entirely inside the previous z box hence no calculations needed
                {
                     a[i]=a[id];      
                }
                else// z box crossing the previous z box
                {
                	temp=0;
                       a[i]=a[id];
                      int k=a[i];
                       for(t=r+1;k<n,t<n;k++,t++)
                       	  {
                       	  	 if(s[t]==s[k])
                       	  	 temp++;
                       	  	 else
                       	  	 break;
                       	  }
                       a[i]+=temp;
                       l=i; 
                       r=i+temp-1;
                }
                i++;
           }
     }
     for(int i=0;i<n;i++)
     	{
     		if(a[i]==pat.length())
     		{
     			cout<<"Pattern found at index: "<<i-1-pat.length()<<"\n";
     			flag++;
     		}
     	}
     	if(!flag)
     		cout<<"Pattern not found!";
     	}
int main()
{
	string pat,text;
	cin>>text>>pat;
	patternmatcher(text,pat);
}