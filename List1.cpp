#include<iostream>

using namespace std;

struct node{
	int data;
	node *next;
};

node *createNode(int x){
	node *temp = new node;
	temp->next = NULL;
	temp->data = x;
	return temp;
}


 node *addElement(node*p, int x){

	node *temp = createNode(x);
	p->next = temp;
	return temp;
}

void printList(node *l){
	node *p = l;
	while(p!= NULL){
		cout<< p->data << " - ";
		p = p->next;
	}
}

int main(){
	int n, x;
	cout<<"- Nhap so luong them: ";
	cin>> n;
	cout<< "- Gia tri dau danh sach: ";
	cin>> x;
	
	node *l = createNode(x);
	node *p = l;
	
	for(int i= 1; i<n; i++){
		cout<< "+ Gia tri muon them: ";
		cin>> x;
		addElement(p, x);
	}
	
	printList(l);
}
