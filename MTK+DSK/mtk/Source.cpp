#include <iostream>
#include <fstream>
using namespace std;
struct matran {
	int n;
	int a[10][10];
};
void taomatran(matran& mt) {
	cout << "nhap n";
	cin >> mt.n;
	for (int i = 0; i < mt.n; i++)
		for (int j = 0; j < mt.n; j++)
			mt.a[i][j] = 0;
}
void nhapmatran(matran& mt) {
	int ddau, dcuoi;
	cout << "nhap canh. Nhap 0 de thoat! ";
	do {
		cout << "nhap dinh dau: ";
		cin >> ddau;
		cout << "nhap dinh cuoi ";
		cin >> dcuoi;
		cout << "nhap trong so: ";
		cin >> mt.a[ddau][dcuoi];

	} while (ddau !=0 || dcuoi!=0);
}
void xuatmatran(matran mt) {
	for (int i = 0; i < mt.n; i++)
	{
		for (int j = 0; j < mt.n; j++)
			cout << mt.a[i][j] << " ";
		cout << endl;
	}
}
void ghimatran(matran& mt, ofstream& l) {
	l << mt.n;
	l << endl;
	for (int i = 0; i < mt.n; i++)
	{
		for (int j = 0; j < mt.n; j++)
			l << mt.a[i][j] << " ";
		l << endl;
	}
	l.close();
}
void docmatran(matran &mt, ifstream &l) {
	l >> mt.n;
	for (int i = 0; i < mt.n; i++)
		for (int j = 0; j < mt.n; j++)
			l >> mt.a[i][j];
	l.close();

}
int demBRa(matran mt, int dinh) {
	int dem = 0;
	for (int i = 0; i < mt.n; i++)
		if (mt.a[i][dinh] != 0) dem++;
	return dem;
}
int maxDinhRa(matran mt) {
	int maxi = 0;
	int max = demBRa(mt, 0);
	for(int i=0;i<mt.n;i++)
			if (demBRa(mt,i) > max) {
				max = demBRa(mt, i);
				maxi = i;
			}
	return maxi;
}
int main() {
	//ofstream l("dothi.txt");
	ifstream l("dothi.txt");
	matran mt;
	/*taomatran(mt);
	nhapmatran(mt);*/
	/*xuatmatran(mt);*/
	//ghimatran(mt, l);
	docmatran(mt, l);
	xuatmatran(mt);
	cout << "dinh co bac ra lon nhat: " << maxDinhRa(mt);

}