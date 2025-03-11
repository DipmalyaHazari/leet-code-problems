#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int countWords(string str){

	stringstream s(str);

	string word;

	int count=0;
	while(s>>word)
		count++;

return count;

}


int main(){

	string str;
	cout<<"enter the string:";
	getline(cin,str);
	
	int number_of_words=countWords(str);
	cout<<number_of_words;


return 0;
}
