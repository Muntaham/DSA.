#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node*next;
	};
	struct Node*head;
	void insert(int x){
		struct Node*temp=(Node*)malloc(sizeof(struct Node));
		temp->data=x;
		temp->next=head;
		head=temp;
	}
	void print(){
		struct Node*temp=head;
		cout<<"The List is :"<<endl;
		while(temp!=NULL){
			cout<<temp->data;
			temp=temp->next;
			cout<<"  ";
				}
				cout<<endl;
		}
			void delet(int z){
			struct Node* temp1=head;
			if(z==1){
			head=temp1->next;
			free(temp1);
			return;
			}
		
		int i;
		for(i=0;i<z-2;i++){
		temp1=temp1->next;}
		struct Node* temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
		}

		int main(){
			int a;
			while(1){
			
				  	
	cout<<"                    Main Menu"<<endl;            
				
			cout<<"Enter 1 to create Link List :"<<endl;
			cout<<"Enter 2 to Traverse Link List :"<<endl;
		    cout<<"Enter 3 to delete Link List :"<<endl;
			cin>>a;
		switch(a){
		
			case 1:
					head=NULL;
			cout<<"How many numbers you want to enter:";
			int n,x;
			cin>>n;
			for(int i=0;i<n;i++){
				cout<<"Enter the number :"<<endl;
				cin>>x;
				insert(x);
				}
				break;
				case 2:
					print();
			break;
			case 3:
					int z;
					cout<<"Enter the node for delete : ";
					cout<<endl;
				cin>>z;
				delet(z);
				print();
		}
	}}

