#include <iostream>
using namespace std;



int main(){

int number=0,a[number];

cout<<"enter the number of studnts:";
cin>>number;

cout<<"enter the marks of students:";
for(i:number){

cin>>a[i];



}

for(i:number){

	if(90<=a[i]<=100){
		cout<<"A";}
	else if(80<=a[i]<=90){
		cout<<"B";
	}else{
		cout<<"C";
	}
}


