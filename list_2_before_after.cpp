#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
	forward_list <int>x{1,2,4,5};
	

	
	forward_list<int>::iterator itr , p;
	
	itr = x.before_begin();
	
	for(p=x.begin() ; *p!=4 ; p++ ,itr++);
	
	x.insert_after(itr,3);
	
	for(itr=x.begin() ; itr!=x.end() ;itr++)
	 cout << *itr << " "; // 1 2 3 4 5
	 
	 cout << "\n";
	 
	 itr = x.erase_after(x.begin()); // 1 3 4 5
	 cout << *itr << "\n"; // 3
     
     x.erase_after(itr,x.end());
     
     for(itr=x.begin(); itr!=x.end() ; itr++)
      cout << *itr << " "; // 1 3
}
