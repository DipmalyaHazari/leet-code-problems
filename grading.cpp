
#include <iostream>
using namespace std;
#define MAX_STUDENT 100


int main(){

int number,a[MAX_STUDENT];

cout<<"enter the number of studnts:";
cin>>number;

cout<<"enter the marks of students:";
for(int i=0;i<number;i++){

cin>>a[i];

}

for(int i=0;i<number;i++){

	if(90<=a[i]){
		cout<<"A";
	    
	}
	
	else if(80<=a[i] && a[i]<90){
		cout<<"B";
	}
	else{
		cout<<"C";
	}
}

return 0;
}
