#include<bits/stdc++.h>
using namespace std;
void printlist(list<int> &l)
{
	for(auto i=l.begin();i!=l.end();i++)
		 cout<<*i<<" ";
		cout<<endl;
}
int main()
{
    int choice,ele;
    list<int> list;
	cout<<"Lists Program"<<endl;
	do
	{
		cout<<"1. Add an element to the end and print list"<<endl;
		cout<<"2. Sort the list in ascending order and print"<<endl;
		cout<<"3. Reverse the list and print"<<endl;
		cout<<"4. Print the size of the list"<<endl;
		cout<<"5. Print the entries of the list"<<endl;
		cout<<"6. Remove an element from the back of the list and print it"<<endl;
		cout<<"7. Remove an element from the front of the list and print it"<<endl;
		cout<<"8. Add an element to the front and print list"<<endl;
		cin>>choice;
		switch(choice)
		{
           case 1: cout<<"Enter the element"<<endl;
           		   cin>>ele;
           		   list.push_back(ele);
           		   printlist(list);
           		   break;
           case 2: list.sort();
                   printlist(list);
                   break;
           case 3: list.reverse();
                   printlist(list);
                   break;
           case 4: cout<<list.size()<<endl;
                   break;
           case 5: printlist(list);
                   break;
           case 6: if(list.size())
                   { list.pop_back();
                     printlist(list);
                    }
                    else
                    	cout<<-1<<endl;	
                   break;
           case 7: if(list.size())
                   { 
                   	  list.pop_front();
                      printlist(list);
                   }
                   else
                   	cout<<-1<<endl;
                   break;
           case 8: cout<<"Enter the element"<<endl;
           		   cin>>ele;
                   list.push_front(ele);
                   printlist(list);
                   break; 
           default:cout<<"Enter a valid choice"<<endl;
		}
	}while(choice>0&&choice<9); 	
}