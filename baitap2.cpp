#include<iostream>
using namespace std;
void nhap(int a[],int &n){
	cout<<"Nhap vao n so nguyen :";
	cin>>n;
	if(n>=0 && n<=50){
		for(int i=0;i<n;i++){
			cout<<"Moi nhap gia tri thu a["<<i+1<<"] :";
			cin>>a[i];
		}
	}
	else{
		cout<<"n khong thoa man\n"; // THIEU \n em nhe
		return ;
	}
}
void xuat(int a[],int n){
	cout <<"Mang vua nhap la :";
	for(int i=0;i<n;i++){
		cout<< a[i] <<" ";
	}
}

void demsopt(int a[],int n){
	int dem=0,x;
	cout<<"\nMoi nhap gia tri x de dem so lan x xuat hien :";cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			dem++;
		}
	}
	cout<<"Gia tri "<<x<<" xuat hien "<<dem<<" lan";
}
void giatrinhonhat(int a[],int n){
	int min = a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	if(min != "") cout<<"\nGia tri nho nhat trong mang la :"<<min;	// MUON DAY DU THI THEM 2 DONG NAY
	else cout << "Trong mang khong co gia tri nao !!\n";
}
void timgiatri(int a[],int n){
	int b,dem=0;
	cout<<"\nNhap gia tri can tim :";cin>>b;
	for(int i=0;i<n;i++){
		if(a[i]==b){
			cout<<"Phan tu "<< b <<" xuat hien o vi tri :"<<i+1<<endl;
			dem++;
		}
	}
	if(dem==0){
		cout<<"khong co gia tri "<< b <<" trong mang\n";
	}
}
void tongcacptam(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			sum=sum+a[i];
		}
	}
	cout<<"Tong cac phan tu am co trong mang la :"<< sum;
}
int main(){		// Ngoài dùng mang 1 chieu em co the hoc them set vs map nhé, bài toán se nhanh hon
	int a[100],n;
	nhap(a,n);
	xuat(a,n);
	demsopt(a,n);
	giatrinhonhat(a,n);
	timgiatri(a,n);
	tongcacptam(a,n);
}
