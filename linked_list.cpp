
#include <bits/stdc++.h>
using namespace std ; 
struct node {
	int data ; 
	struct node * next ; //con tro kieu node ten next ; 
}
typedef struct node node ;
// moi node trong danh sach lien ket la con tro kieu node 
node *  makenode(int x ) {
	node * newNode = new node();// khai bao mot con tro toi doi tuong kieu node 
	newNode->data = x ; 
	newNode->next = NULL ; 
	return newNode ; 
}
int size(node *head ) {
	int cnt = 0 ; 
	while(head != NULL) {
		cnt++ ; 
		head = head->next;
	}
}

void duyet(node *head ) {// ban than node * head no la con tro roi nen ham no la truyen tham tri ;
	while( head !=  NULL) {
		cout << node->data ; 
		head = head->next ;// tro toi dia chi cua node ke tiep trong danh sach lien ket ;
	}
}
 void pushfront( node *&head , int x ) {
 	node *newNode = makenode(x);
 	// buoc 1 : phan next cua newNode => head 
 	newNode->next = head ; 
 	// buoc 2 : cap nhat node head => newNode ; 
 	*head = newNode ; 
}
// ham them node vao cuoi 
void pushback(node ** head , int x) {
	node *temp = *head ; 
	node *newNode = makenode(x);
	if( *head == null) {
		*head = newNode ;
		return ;
		}
	while( temp->next != NULL) {
		temp = temp->next ; 	
	}
    temp->next = newNode ; 
}
 // ham chen vao giua linked list
 void  insert(node **head ,int k,int x ) {
 	int n = size(*head);
 	if( k < 0 || k > n + 1 ) return ; 
    if(k == 1) {
 		return pushfront (head , x);
 	}
 	
 		node *temp = *head ; 
 		node * newNode = makenode (x);
 		newNode-> next = temp->next ; 
 		temp-> next = newNode ; 
 	}
// xoa node o dau linked list 
  void popfront (node **head ) {
  	if(*head == NULL ) return ; 
  	node *temp = *head ; 
  	*head = *head -> next ; 
  	delete temp ; 
}
void popback(node **head ) {
	if(*head == NULL) return ; 
	node *temp = *head ;
	if(temp ->next == NULL) {
	  *head = NULL ; 
	  delete temp ; 
	  return ;
	 }
	 while (temp->next->next != NULL) {
	 	temp = temp->next ; 
	 }
	 node *last = temp->next ; 
	 temp->next = NULL ; 
	 delete last ; 
}
// xoa nut o giua cua linked list 
void erase(node** head , int k ) {
	int n = size(*head) ;
	if(k < 1  || k > n) return ; // khong xoa ; 
	if( k == 1 ) popfront(head );
	else {
		node * temp = * head ; 
		for( int i = 1 ; i < k- 2; i++) {
			temp = temp->next ; 
		}
		// temp = k -1 ; 
	node *k_now = temp-> next ; // node thu k 
	// cho k -1 ket noi voi k +1 ; 
	temp-> next = k_now->next ; 
	delete k_now ; 
}
}

	 
	  
 	
 		

