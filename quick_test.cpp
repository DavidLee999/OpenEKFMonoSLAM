#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n = 9;
	
	double d = reinterpret_cast<double>(n);
	
	cout<<d<<endl<<reinterpret_cast<int>(d)<<endl;
       
	//test how to sync to local
	return 0;
}
