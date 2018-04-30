#include<stdlib.h>
#include<iostream>
using namespace std;

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head; 
struct Node* GetNewNode(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}

void InsertAtTail(int x) {
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; 
	temp->next = newNode;
	newNode->prev = temp;
}

void Print() {
	struct Node* temp = head;
	cout<<"display forward : ";
	while(temp != NULL) {
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<"\n";
}


int main() {


	head = NULL; 
	
	cout<<"how many numbers"<<endl;
	int n,i,x,y;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter the number"<<endl;
		cin>>x;
		
	InsertAtTail(x); Print(); 
	
	
}}

