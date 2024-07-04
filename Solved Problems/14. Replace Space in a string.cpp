#include<iostream>
#include<string.h>
using namespace std;

void replaceSpace(string &str){
	string temp = "";
	for(int i = 0 ; i<str.length() ; i++){
		if( str[i] == ' '){
			temp.push_back('@');
			temp.push_back('#');
		}
		else{
			temp.push_back(str[i]);
		}
	}
	str = temp;
}
int main(){
	string s;
	cout<<"Enter string: ";
	std::getline(cin,s);
	
	replaceSpace(s);
	cout<<"After replacing spaces in string: "<<s<<endl;
	
	return 0;
}
