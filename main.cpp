#include <iostream>
using namespace std;

int main() {
	
	int testCases{};
	int x; //students
	int y; //chairs
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>x >>y;
	    
	    if(x > y)
	        cout <<(x - y) <<endl;
	        
	    else if (x <= y)
	        cout <<"0" <<endl;
	    
	}
	return 0;
}
