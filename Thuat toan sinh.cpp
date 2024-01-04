#include<bits/stdc++.h>

using namespace std;

int n,a[100], ok,k;

void khoiTaoSinhXauNhiPhan(){
	for(int i=1;i<=n;i++){
		a[i] = 0;
	}
}

void sinhXauNhiPhan(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i ==0 ){
		ok = 0;
	}
	else a[i] = 1;
}
void thucHanhSinhXauNhiPhan(){
	cin >> n;
	ok =1;
	khoiTaoSinhXauNhiPhan();
	while(ok){
		for(int i=1;i<=n;i++){
			cout << a[i];
		}
		cout << endl;
		sinhXauNhiPhan();
	}
}

void khoiTaoSinhToHopChapKCuaN(){
	for(int i=1;i<=k;i++){
		a[i] = i;
	}
}
void sinhToHopChapKCuaN(){
	int i = k;
	while(i >=1 && a[i] == n-k+i){
		--i;
	}
	if(i ==0) ok = 0;
	else {
		a[i]++;
		for(int j = i+1;j<=k;j++){
			a[j] = a[j-1] + 1;
		}
	}
}
void thucHanhSinhToHopChapKCuaN(){
	cin >> n>> k;
	ok = 1;
	khoiTaoSinhToHopChapKCuaN();
	while(ok){
		for(int i=1;i<=k;i++){
			cout << a[i];
		}
		cout << endl;
		sinhToHopChapKCuaN();
	}
}

void thucHanhSinhHoanVi(){
	cin >> n;
	a[n];
	for(int i=0;i<n;i++){
		a[i] = i +1;
	}
	do{
		for(int i=0;i<n;i++){
			cout << a[i];
		}
		cout << endl;
	}while(next_permutation(a,a+n));
}


int main(){
	thucHanhSinhXauNhiPhan();
	thucHanhSinhToHopChapKCuaN();
	thucHanhSinhHoanVi();
	return 0;
}
