#include<iostream>
using namespace std;

class Node{
	public:
		int data;
	//	Node* tail;
		Node* next;
	Node(int data){
		this->data = data;
	//	this->tail = 0;
		this->next = 0;
	}
};
	void insert(Node* &tail,int ele,int d){
		Node* newNode = new Node(d);
		if( tail == 0){
			tail = newNode;
			newNode->next = newNode;
		}
		else {
        Node* curr = tail;
        while(curr->data != ele){
        	curr = curr->next;
		}
	//	Node* temp = new Node(d);
		newNode->next = curr->next;
		curr->next = newNode;
    }
	}
	void print(Node* tail){
		if(tail == 0 )
			return ;
			
		Node*temp = tail;
		
		
		do{
			cout<<tail->data<<" ";
			temp  = temp->next;
	     }while(temp != tail);
	     cout<<endl;
	}
int main(){
	//Node* newNode = new Node(10);
	Node* tail = 0;
	insert(tail,0,10);
	insert(tail,10,20);
	insert(tail,20,30);

	print(tail);
	return 0;
}

