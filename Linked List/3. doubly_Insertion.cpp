#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node*next;
		Node* prev;
		
		Node(int data){
			this->data = data;
			this->next = 0;
			this->prev = 0;
		}
		
};
void insert_at_begin(Node* &head,Node* &tail,int d){

//	temp->prev = 0;
//	temp->next = head;
//or
	if(head == 0){
		Node* temp = new Node(d);
		head = temp;
		tail=temp;
	}
	else{
	Node* temp = new Node(d);
	temp->next = head;
	head->prev = temp;
	head = temp;
}
}
void insert_at_end(Node* &head,Node* &tail,int s){
	if(tail == 0){
		Node* temp = new Node(s);
		tail = temp;
		head=temp;
	}
	else{
	Node* temp = new Node(s);
	tail->next = temp;
	temp->prev = tail;
	tail = temp;
	}
	

}
void insert_at_anypos(Node* &head,int index,int a){
	Node* temp = head;
	Node* temp2 = new Node(a);
	int cnt = 1;
	while( cnt < index-1){
		temp = temp->next;
		cnt++;	
	}
	temp2->next = temp->next;
	temp2->prev = temp;
	temp->next = temp2;
	temp = temp2;
	
	
}
void print(Node* &head){
	Node* temp = head;
	while( temp != 0){
		cout<<temp->data<<" ";
		temp = temp->next;
	
	}
}
int getlength(Node* &head){
	Node* temp = head;
	int len= 0;
	while(temp != 0){
		len++;
		temp = temp->next;
	}
	cout<<endl;
	return len;
}
int main(){
	Node* newNode = new Node(10);
	
	cout<< newNode->data <<endl;
	cout<< newNode->prev <<endl;
	cout<< newNode->next <<endl;
	
	Node* head = newNode;
	insert_at_begin(head,tail,20);
	insert_at_begin(head,tail,30);
	insert_at_begin(head,tail,40);
	insert_at_begin(head,tail,50);
	print(head);
	
	cout<<endl;
	cout<<"Add at end: "<<endl;
	Node* tail = newNode;
	insert_at_end(head,tail,30);
	print(head);
	cout<<endl;
	
	cout<<"After inserting no. at any pos: "<<endl;
	insert_at_anypos(head,2,100);
	print(head);
	cout<<endl;
	
	cout<<"Length of list: "<<getlength(head)<<endl;;
}
