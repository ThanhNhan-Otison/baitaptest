#include "Header.h"
void khoitao(al& l) {
	cout << "nhap so dinh";
	cin >> l.n;
	for (int i = 0; i < l.n; i++)
		l.list[i] = nullptr;
}

node* taonode(int dinhke, int trongso) {
	node* p = new node();
	if (p == nullptr) return nullptr;
	p->dinhke = dinhke;
	p->trongso = trongso;
	p->next = nullptr;
	return p;
}

//void doc(al& l, ifstream& f) {
//	int dem, dinhke, trongso;
//	f >> l.n;
//	for (int i = 0; i < l.n; i++)
//		l.list[i] = nullptr;
//	for (int i = 0; i < l.n; i++)
//	{
//		f >> dem;
//		while (dem) {
//			f >> dinhke;
//			f >> trongso;
//			node* p = taonode(dinhke, trongso);
//			if (l.list[i] == nullptr)
//				l.list[i] = p;
//			else
//			{
//				node* t = l.list[i];
//				while (t->next != nullptr)
//					t = t->next;
//				t->next = p;
//			}
//			dem--;
//		}
//
//	}f.close();
//}
//
//void xuat(al l) {
//	for (int i = 0; i < l.n; i++) {
//		cout << char(i + 65) << "->\t";
//		while (l.list[i]) {
//			cout << l.list[i]->dinhke << "|" << l.list[i]->trongso << "->\t";
//			l.list[i] = l.list[i]->next;
//		}
//		cout << endl;
//	}
//
//}
void xuat(al l) {
	for (int i = 0; i < l.n; i++)
	{
		cout << char(i+65) << "->\t";
		while (l.list[i])
		{
			cout << l.list[i]->dinhke << "|" << l.list[i]->trongso << "->\t";
			l.list[i] = l.list[i]->next;
		}cout << endl;
	}
}
void doc(al& l, ifstream& f) {
	int dem, dinhke, trongso;
	f >> l.n;
	for (int i = 0; i < l.n; i++)
		l.list[i] = nullptr;
	for (int i = 0; i < l.n; i++) {
		f >> dem;
		while (dem) {
			f >> dinhke;
			f >> trongso;
			node* p = taonode(dinhke, trongso);
			if (l.list[i] == nullptr)
				l.list[i] = p;
			else {
				node* t = l.list[i];
				while (t->next != nullptr)
					t = t->next;
				t->next = p;
			}
			dem--;
		}
	}
}