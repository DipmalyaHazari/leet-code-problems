#include <iostream>
using namespace std;


namespace myspace{

	int myfunc(int x,int y){
	int z=x+y;
	return z;
	}
	
}


using namespace myspace;


int main(){

	int z=myfunc(3,4);

	return 0;


}

