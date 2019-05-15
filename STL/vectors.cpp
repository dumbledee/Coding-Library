#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printvector(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
}
void delvalue(vector<int> &v,int val)
{
	int flag=0;
	for(int i=0;i<v.size();i++)
		if(v[i]==val)
			{
				v.erase(v.begin()+i);
				flag=1;
				break;
			}
			if(!flag)
				cout<<"Value to be deleted not found"<<endl;
}
int main()
{
	vector<int> v;
	int size,num,casevar,index;
	cout<<"Enter the size of the vector\n";
	cin>>size;
	cout<<"Enter the elements..\n";
    for(int i=0;i<size;i++)
       {
       	cin>>num;
       	v.push_back(num);
       }
    do 
    {
    	cout<<"1.Sort the vector in increasing order"<<endl;
    	cout<<"2.Reverse the vector"<<endl;
    	cout<<"3.Print all the elements of the vector"<<endl;
    	cout<<"4.Insert element at specific postion"<<endl;
    	cout<<"5.Sort the vector in decreasing order"<<endl;
    	cout<<"6.Erase the element at particular index"<<endl;
    	cout<<"7.Erase the first element with given value"<<endl;
    	cout<<"8.Print the current size of the vector"<<endl;
    	cin>>casevar;
    	switch(casevar)
    	{
    		case 1: sort(v.begin(),v.end());
    		        cout<<"Modified Vector"<<endl;
    		        printvector(v);
    		        break;
    		case 2: reverse(v.begin(),v.end());
    		        cout<<"Modified Vector"<<endl;
    		        printvector(v);
    		        break;
    		case 3: printvector(v);  
    		        break;
    		case 4: cout<<"Enter index and number"<<endl;
    		        cin>>index>>num;    
    		        v.emplace(v.begin()+index,num);
    		        break;
    		case 5: sort(v.begin(),v.end(),greater<int>());
    		        cout<<"Modified Vector"<<endl;
    		        printvector(v);
    		        break;
    		case 6: cout<<"Enter the index"<<endl;
    		        cin>>index;
    		        v.erase(v.begin()+index);
    		        break;
    		case 7:cout<<"Enter value"<<endl;
    		       cin>>num;	
    		       delvalue(v,num);
    		       cout<<"Modified Vector"<<endl;
    		       printvector(v);
    		       break;
    		case 8:cout<<v.size()<<endl;    
    		default: cout<<"Enter the correct choice"<<endl;   
    	}
    } while(casevar>0&&casevar<9);  
}