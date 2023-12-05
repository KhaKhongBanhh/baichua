#include<bits/stdc++.h>

using namespace std;

bool songuyento(int n){
	int dem = 0;
	for (int i = 1; i <= sqrt(n); i++){
		if(n%i==0) dem++; 
	}
	if(dem==1) return true;
}
 
int main(){
	int n;	// KHONG CAN BIEN a NHE
	cout << "n = ";
	cin >> n;
	if(n>3 && n<100) {
		cout<<"Cac so nguyen to tu 3 den "<< n <<" la: ";
		for(int i = 3; i < n; i++){
			if (i >= 3 && songuyento(i)==true) cout<< i <<" ";	// DOAN NAY KHONG CAN VIET DAI THE NHE
		}
	}
	return 0; 
} 
