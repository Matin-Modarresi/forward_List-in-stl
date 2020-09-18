#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> x={1,2,3,7,4,5};
	
	forward_list<int> y={6,8,9};
	
	forward_list<int>::iterator pos1,pos2,itr;
	
	pos1=x.before_begin();
	pos2=y.before_begin();
	
	for(itr=x.begin() ; itr!=x.end()  ;itr++ , pos1++)
	 if(*itr==7) break; //  pos1 -> 3 address
	 
	 for(itr=y.begin() ; itr!=y.end() ; itr++ , pos2++)
	 if(*itr==8) break; // pos2 -> 6 address
	 
	 x.splice_after(pos2, y, pos1);
	 
	 for(itr=x.begin() ; itr!=x.end() ; itr++)
	  cout << *itr << " ";  // 1 2 3 4 5
	  
	  cout << "\n";
	  
	  for(itr=y.begin() ; itr!=y.end() ; itr++)
	  cout << *itr << " "; //6 7 8 9
	 
}
