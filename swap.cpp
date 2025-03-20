#include <stdio.h>
using namespace std;


//arithematic operator
void swap_1(int &a,int &b){
	

	 a=a+b;
	 b=a-b;
	 a=a-b;
}

//bitwise operator
void swap_2(int &a,int &b){
	a=a^b;
	b=a^b;
	a=a^b;
}

int main(){
	int a=0,b=0,c=0;

	cout<<"enter the value of a and b:";
	cin>>a>>b;

	cout<<"option:";
	cin>>c;

	switch(c){

	case 0:
		
		swap_1(a,b);

	case 1:
		swap_2(a,b);

	}

	cout<<a<<endl<<b<<endl;

}

