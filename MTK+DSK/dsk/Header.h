#include <iostream>
#include <fstream>
struct node {
	int dinhke, trongso;
	node* next;
};
using namespace std;
struct al {
	int n;
	node* list[50];
};

void doc(al& l, ifstream& f);
node* taonode(int dinhke, int trongso);
void khoitao(al& l);
void xuat(al l);