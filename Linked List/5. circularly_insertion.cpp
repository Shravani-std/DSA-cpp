#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* tail;
		Node* next;
	Node(int data){
		this->data = data;
		this->tail = 0;
		this->next = 0;
	}
};
	void insert(Node* &tail,int i,int d){
		Node* newNode = new Node(d);
		if( tail == 0){
			
			tail = newNode;
			newNode->next = newNode;
		}
		else {
        Node* curr = tail;
        do {
            if (curr->data == i) {
                Node* temp = new Node(d);
                temp->next = curr->next;
                curr->next = temp;
                if (curr == tail) {
                    tail = temp;
                }
                return;
            }
            curr = curr->next;
        } while (curr != tail);
    }
	}
	void print(Node* &tail){
		Node*temp = tail;
		while(tail->next != temp){
			cout<<tail->data<<" ";
			tail = tail->next;
		}
		cout<<" ";
		
		//OR
		
		/*do{
			cout<<tail->data<<" ";
			tail = tail->next;
	     }while(tail != temp);*/
	}
int main(){
	Node* neww = new Node(20);
	Node* tail = neww;
	insert(tail,5,3);
	print(tail);
}

