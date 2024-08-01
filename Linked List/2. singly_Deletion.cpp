#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node*next;
		Node(int data){
			this->data = data;
			this->next = 0;
		}
		~Node(){
			int value = this->data;
			if(this->next != 0){
				delete next;
				this->next = 0;
			}
		}
		
};
void insert_at_head(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insert_at_end(Node* &tail, int s) {
    Node* temp = new Node(s);
    tail->next = temp;
    tail = temp;
}
void insert_at_any(Node* &head,Node* &tail,int a,int index){
	Node*temp = head;
	if(index == 1){
		insert_at_head(head, a);
		return ;
	}
	if(temp->next == 0 ){
		insert_at_end(tail,a);
		return ;
	}
	int cnt = 1;
	while(cnt < index-1){
		temp = temp->next;
		cnt++;
	}
	Node*temp2 = new Node(a);
	temp2->next = temp->next;
	temp->next = temp2;
	
}

void delete_Node(int index, Node*& head){
	if(index == 1){
		Node* temp = head;
		head = head->next;
		temp->next = 0;
		delete temp;
	}
	else{
		Node* current = head;
		Node* previous = 0;
		int count = 1;
		while( count < index){
			previous = current;
			current = current->next;
			count++;
		}
		previous->next = current->next;
		current->next = 0;
		delete current;
	}
}

void traverse(Node* &head) {
    Node* temp = head;
    while (temp != 0) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node* head = node1; // initial head
    Node* tail = node1; // initial tail

    cout << "First Node added: " << endl;
    traverse(head);

    cout << "Second Node Added: " << endl;
    insert_at_head(head, 20);
    traverse(head);

    cout << "Third node Added: " << endl;
    insert_at_head(head, 30);
    traverse(head);

    cout << "Fourth node Added: " << endl;
    insert_at_head(head, 40);
    traverse(head);

    cout << "Fifth node Added: " << endl;
    insert_at_head(head, 50);
    traverse(head);

    cout << "Node Added at Tail: " << endl;
    insert_at_end(tail, 60);
    traverse(head);
	
//	cout<<" add at mid or anywhere"<<endl;
//	insert_at_any(head,tail,25,4);
//	traverse(head);
//    return 0;
    cout<<"Delete 3rd no."<<endl;
    delete_Node(3,head);
    traverse(head);
}

