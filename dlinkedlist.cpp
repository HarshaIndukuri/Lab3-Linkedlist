#include<iostream>




using namespace std;





class Node {

	public:
	int data;
	Node * next;
	Node * prev;

	Node(){
	next = NULL;
	prev = NULL;
	}

};


class dlinkedlist {

	public:
	Node * head;
	Node * tail;

	dlinkedlist(){
	head = NULL;
	tail = NULL;
	}
	
	//Insert function

	void insert(int n){

	Node * temp = new Node;
	
	if (head==NULL){
	temp->data=n;
	head=temp;
	tail=temp;
	}
	
	else {
	temp->data=n;
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
	tail->next=NULL;
	}

	}

	//insert at function
	void insertAt(int pos, int n){
	
	Node * current = head;
	int c = 1;
	Node * temp = new Node;
	
	if(pos==1){
	temp->data=n;
	head=temp;
	temp->next=current;
	current->prev=temp;
	}

	else{
	while (c<pos-1){
	current=current->next;
	c++;
	if(current==NULL){
	cout<<"The linkedlist doesn't have enough elements genius!"<<endl;
	break;
	}
	}

	if(current!=NULL){
	temp->data=n;
	current->next->prev=temp;
	temp->next=current->next;
	current->next=temp;
	temp->prev=current;
	}
	}
	}

	//delete function

	void del(){

	Node * current = tail->prev;
	int c = 1;
	Node * temp = tail;

	current->next=NULL;
	
	tail->prev=NULL;

	current=tail;

	delete temp;


	}	

	//deleteAt function;

	void delAt(int pos){
	Node * temp;
	Node * current = head;
	int c = 1;	

	while(c<pos-1){
	current=current->next;
	c++;
	}

	temp = current->next;
	temp->next->prev=current;
	current->next=temp->next;
	temp->next=NULL;
	temp->prev=NULL;
	delete temp;
	}		
	
	//count function
	void count(){
	Node * current = head;
	int c = 1;
	while(current->next!=NULL){
	current=current->next;
	c++;
	}
	cout<<"The number of elements in the linkedlist is "<<c<<endl;
	}
	
	//display function
	void display(){
	
	Node * current = head;

	while(current!=NULL){
	
	cout<<current->data<<"->";
	current=current->next;

	}

	cout<<endl;

	}


};



	int main() {

	dlinkedlist d1;

	d1.insert(1);
	d1.insert(4);
	d1.insert(9);
	d1.insert(16);
	d1.insert(25);
	d1.display();

	d1.insertAt(2,3);
	d1.display();

	d1.del();
	d1.display();
	
	d1.delAt(3);
	d1.display();
	d1.insertAt(8,2);
	d1.display();

	d1.insertAt(1,5);
	d1.display();

	d1.count();

	}


















	














































