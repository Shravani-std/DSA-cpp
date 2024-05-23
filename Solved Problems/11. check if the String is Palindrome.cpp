#include<iostream>
using namespace std;


//1. string is not case sensitive
char toLowerCase(char ch){
	if(ch > 'a' && ch < 'z'){
		return ch;
	}
	else{
		char temp = ch - 'A' + 'a';
		return temp;
	}
}
bool checkStringIsPalindrome(char name[], int n){
	int s = 0;
	int e = n-1;
	
	while(s<e){
		if(toLowerCase(name[s]) != toLowerCase(name[e])){
			return 0;
		}
		else{
			s++;
			e--;
		}
	
	}
		return 1;
}
int getLength(char name[]){
	int count = 0;
	for(int i = 0 ; name[i] != '\0'; i++){
		count++;
	}
	return count;
}
int main(){
	char name[50];
	cout<<"enter name: ";
	cin>>name;
	cout<<"Your name: "<<name<<endl;
	int len = getLength(name);
	cout<<"Length of your name: "<<len<<endl;
	
	cout<<"check if the string palindrome or not: "<< checkStringIsPalindrome(name,len)<<endl;
	char ch = 'B';
	cout<<"Coversion: "<<toLowerCase(ch)<<endl;
	return 0;
}
