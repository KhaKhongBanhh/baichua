#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node *next;
};

// TAO RA NODE MOI
node* makeNode(int x){
	node *newNode = new node();
	newNode -> data = x;
	newNode -> next = NULL;
	return newNode;
}

// DUYET DSLK
void duyet(node *head){
	while(head != NULL){
		cout << head -> data << ' ';
		head = head -> next;
	}
}

// DEM SO NODE TRONG DSLK
int size(node *head){
	int cnt = 0;
	while(head != NULL){
		++cnt;
		head = head -> next;
	}
	return cnt;
}

// THEM NODE VAO DAU DSLK
void pushFront(node **head, int x){
	node *newNode = makeNode(x);
	newNode -> next = (*head);
	(*head) = newNode;
}



int main(){
//	node *head = NULL;
//	for(int i=1;i<=5;i++){
//		pushFront(&head,i);
//	}
//	duyet(head);
//	cout << size(head);
	
	return 0;
}
