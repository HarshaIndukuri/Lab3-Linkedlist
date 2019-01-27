#include<iostream>


using namespace std;






class Node {
	public:
	int data;
	Node * next;

	Node(){
	next=NULL;
	}
};

class clinkedlist{
	public:
	Node * head;

	clinkedlist(){
	head=NULL;
	}
			
	
	//insert function

	void insert(int n){

	Node * temp = new Node;
	temp->data=n;

	if (head==NULL){
	head=temp;
	head->next=head;
	}

	else{
	
	Node * current = head;

	while (current->next!=head){

	current=current->next;
	}

	current->next=temp;
	temp->next=head;

	}

	}


	//insertAt function
	void insertAt(int pos, int n){
		
	Node * temp=new Node;
	temp->data=n;	
	Node * current = head;
	int c=1;

	if(pos==1){
	temp->next=current;
	head=temp;
	}
	
	else{
	while(c<pos-1){
	c++;
	current=current->next;
	if(current==head){
	cout<<"The linkedlist does not have enough elements "<<endl;
	break;
	}
	}
	if(current!=head){
	temp->next=current->next;
	current->next=temp;
	}
	}
	}	
	
	//delete function
	void del(){
	
	Node * current = head;
	Node * temp;
	while(current->next->next!=head){
	current=current->next;
	}
	temp = current->next;
	current->next=head;
	delete temp;
	}

	//delete at function
	void delAt(int pos){
	
	Node * current = head;
	Node * temp;
	int c=1;
		
	while(c<pos-1){
	c++;
	current=current->next;
	}
	temp = current->next;
	current->next=temp->next;
	delete temp;
	}

	//count function

	void count(){
	int c=1;
	Node * current=head;
	while (current->next!=head){
	c++;
	current=current->next;
	}
	cout<<"The linkedlist has "<<c<<" elements"<<endl;
	}	
	

	//display function

	void display(){

	Node * current = head;

	while (current->next!=head){
	cout<<current->data<<"->";
	current=current->next;
	}
	cout<<current->data;
	cout<<endl;
	}
		
};

	




















	int main(){
	
	clinkedlist c1;

	c1.insert(2);
	c1.insert(4);
	c1.insert(6);
	c1.insert(8);
	c1.insert(10);
	c1.insert(12);
	c1.display();

	c1.insertAt(3,5);
	c1.display();
	
	c1.insertAt(9,9);
	
	c1.del();
	c1.display();

	c1.delAt(2);
	c1.display();
	c1.count();

	}
	







	

