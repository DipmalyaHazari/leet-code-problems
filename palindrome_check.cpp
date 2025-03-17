#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(string str){
	string str2=str;
	int n=str.length();
	for(int i=0;i<n/2;i++){
		str2=swap(str[i],str[n-i-1])
	}
	return str==str2;
	
}

int main(){
	string str;
	cout<<"enter the string:";
	getline(cin,str);

	bool check=palindrome(str);
	if(check) cout<<"paindrome";
	else cout<<"not palindrome";

}
