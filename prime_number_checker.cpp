#include <iostream>
#include <cmath>
using namespace std;


bool check_prime_number(int number){

if(number<2) return false;
if(number==2) return true;
if(number%2) return true;


int limit=sqrt(number);

for(int i=3;i<=limit;i=i+2){

	
	if(number%i==0){
		return false;		
	}
}

	return true;
}


int main(){

bool a=true;
int val=0;

cout<<"enter the number:";
cin>>val;

a=check_prime_number(val);




if(a){
  
	cout<<"Prime number";

}
else{
	cout<<"not a prime number";	
}

return 0;

}
