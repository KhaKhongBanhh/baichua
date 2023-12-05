#include<bits/stdc++.h>

using namespace std;

void nhap(int a[][100],int &n,int &m){
	cout<<"nhap vao so hang :";cin>>n;
	cout<<"nhap vao so cot :";cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"moi nhap vao gia tri a["<<i+1<<"]["<<j+1<<"] :";cin>>a[i][j];
		}
	}
}
void xuat(int a[][100],int n,int m){
	cout<<"mang vua nhap la :";
	for(int i=0;i<n;i++){
		cout<<endl;
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<"\t";
		}
	}
}
bool songuyento(int n){
	int i;
	if (n < 2) return false;
	else
		for ( i=2 ; i <= sqrt(n) ; i++ ){
			if ( n % i == 0)
			return false; 
		}
	return true; 
}

//Tim hang co nhieu SNT nhat
int timhangcosonguyento ( int a[][100] , int n, int m){
	int dem ;
	int demmax = 0;
	int vitri = 0;
	for ( int i=0 ; i<m ; i++){
		dem =0;
		for ( int j=0 ; j<n ; j++){
			if ( songuyento(a[i][j]))
				dem++;
		}
		if( demmax < dem){
			demmax = dem;
			vitri = i+1;
		}
	}
	switch (demmax){
		case 0:
			cout << "Khong hang nao co SNT.";
			break;
		default:
			cout << "\nHang " << vitri << " co nhieu SNT nhat (" << demmax << " SNT)";
			break; 
	}
}

void doivitrihang(int a[][100],int n,int m){
	int h1,h2,k;
    cout<<"\nmoi nhap hang thu nhat muon doi :";
	cin>>h1;
    cout<<"moi nhap hang thu hai muon doi :";
	cin>>h2;	
    for(int j=0;j<m;j++){
    	a[k][j]=a[h1][j];
    	a[h1][j]=a[h2][j];
    	a[h2][j]=a[k][j];
	}
	xuat(a,n,m);
}
int main(){
	int a[100][100],n,m;
	nhap(a,n,m);
	xuat(a,n,m);
	doivitrihang(a,n,m);
	songuyento(n);
	timhangcosonguyento(a,n,m);
}
