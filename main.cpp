#include <iostream>

using namespace std;


class stack
{
      char *stck; 
      int index;   
      
public:
	  ~stack();
      void init(int n);     
      void add(char ch); 
      void del();      
	  void print();
};
void stack::init(int n)
{
     stck = new char[n];
	 for (int i = 0; i < n; i++)
		 stck[i] = NULL;
	 index = 0;
} 

stack::~stack()
{
	free(stck);
}
void stack::add(char x)
{
	    stck[index]=x;
		index++;
		cout<<stck[index];
}	

void stack::del()
{
	stck[index]=NULL;
	index--;
}

void stack::print()
{
	for(index; index > 0; index--)
	cout<<stck[index];
}

void main() {
	stack s;
	int n;
	char DE[4]; 
	char val; // значение
    cout<<"KOldeistv:";
    cin>>n;
	s.init(n);
	for (int i = 0; i < n; i++)
	{
		cin >> DE;
		if (DE=="add") {
			cin >> val;
			s.add(val);
		}
		if (DE=="del") s.del();
	}
	s.print();
	system("pause>>void");
}
                                   