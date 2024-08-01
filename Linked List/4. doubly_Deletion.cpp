#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node*next;
		Node*pre;
	Node(int data){
		this->data = data;
		this->next = 0;
		this->pre = 0;
	}
	void insert_at_beg(Node* &head,int s){
		Node* temp = new Node(s);
		temp->next = head;
		head->pre = temp;
		head = temp;
	}
	void insert_at_end(Node* &tail,int f){
		Node* temp = new Node(f);
		temp->next = 0;
		tail->next = temp;
		temp->pre = tail;
		tail = temp;
	}

	void insertion(Node* &head,Node* &tail, int index,int d){
		Node* temp = head;
		if( index == 1){
			insert_at_beg(head,d);
			return ;
		}
		if( temp->next == 0){
			insert_at_end(tail,d);
			return ;
		}
		
		int cnt = 1;
		while( cnt < index){
			temp = temp->next;
			cnt++;
		}
		
		Node* temp2 = new Node(d);
		temp2->next = temp->next;
		temp->next->pre = temp2;
		temp2->pre = temp;
		temp = temp2;
		
	}
	void deletion(Node* &head,int index){
		
		if( index == 1){
			Node* temp = head;
			temp->next->prev = 0;
			head = temp->next;
			temp->next = 0;
			delete temp;
		}
		
		else{
			Node* curr = head;
			Node* prev = 0;
			
			int cnt = 1;
			while( cnt<index){
				prev = curr;
				curr = curr->next;
				cnt++;
			}
			curr->prev = 0;
			prev->next = curr->next;
			current->next->prev = prev;
			curr->next = 0;
			delete curr;
		}
		
	}
	void print(Node* &head){
		Node* temp = head;
		while( temp->next = 0){
			temp = temp->next;
			cout<< temp->data << " ";
		}
		cout<<endl;
	}
};
int main(){
	Node* newNode = new Node(10);
	Node* head = newNode;
	Node* tail = newNode;   
	
	insert_at_beg(head,50);
	print(head);
	
	insert_at_end(tail,60);
	print(head);
	
	insert_at_beg(head,20);
	print(head);
	
	insertion(head,tail,3,55);
	print(head);
	
	deletion(head,3);
	print(head);
}
