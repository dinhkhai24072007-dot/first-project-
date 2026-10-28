/*
* Ho ten : Vo Dinh Khai
* MSSV : 6651020031
* Lop :KTDT-VT K66
* De so : 1 Cau: 2
* Cam doan: Bai lam do em tu thuc hien, khong su dung tai lieu,
* Internet, cong cu AI hay tu hoan thien code.
*/
#include<iostream>
#include<iomanip>
using namespace std;
struct TNode { 
    int key; 
    TNode* left; 
    TNode* right; 
};
typedef TNode* Tree;
void insert(Tree* root, int k){
	if(root==NULL){
		root= new TNode();
		root->key = k;
		root->left = root->right = NULL;
	} else if(k < root->key) return insert(root->left, k);
	else if(k > root->key) return insert(root->right, k);
}
void NLR(Tree* root){
	if(root==NULL) return;
	cout << root->key << " ";
	NLR(root->left);
	NLR(root->right);
}
void LNR(Tree* root){
	if(root==NULL) return;
	LNR(root->left);
	cout << root->key << " ";
	LNR(root->right);
}
void NLR(Tree* root){
	if(root==NULL) return;
	LRN(root->left);
	LRN(root->right);
	cout << root->key << " ";
}
int main(){
	Tree root =NULL;
	int day[10] = {50, 30, 70, 20, 40, 60, 80, 35, 45, 65};
	for(int i=0;i<10;i++) insert(root, day[i]);
	cout << 
}
