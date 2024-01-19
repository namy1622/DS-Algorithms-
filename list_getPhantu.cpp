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

node *addElement(node *p, int x){
	node *temp = createNode(x);
	p->next = temp;
	return temp;
}
void printList(node *l){
	node *p = l;
	while(p != NULL){
		cout << p->data<< " ";
		p = p->next;
	}
}

node *getNode(node *l, int k){
	node *p = l;
	for(int i = 0; i< k; i++){
		p = p->next;
	}
	return p;
}

int main(){
	int n, x, k;
	cout<<"- So luong muon them: ";
	cin>> n;
	cout<< "- Gia tri ban dau: ";
	cin>> x;
	node *l = createNode(x);
	node *p = l;
	for(int i = 1; i< n; i++){
		cout<<"+ Gia tri tiep: ";
		cin>> x;
		p = addElement(p, x);
	}
	cout<<"------------------";
	cout<<"--> Day lien ket: ";
	printList(l);
	
	cout<<"\n - Lay gia tri o vi tri: ";
	cin>> k;
	p = getNode(l,k);
	cout<< "--> Gia tri o vi tri "<< k<< " la: "<<p->data;
	return 0;
}
