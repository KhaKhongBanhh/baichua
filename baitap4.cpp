#include<bits/stdc++.h>

using namespace std;

void hamdaonguoc(char a[100]){	// Em nên dùng string a
	cout<<"Nhap vao chuoi can dao nguoc :"; 
	cin>>a;						// cin doan này là sai roi nhé 
	int lo = 0;
  	int length;
  	for (length = 0; a[length] != '\0' ; length++) {} 
  	while ( lo < length ){
    --length;
    char doi = a[lo];
    a[lo] = a[length];
    a[length] = doi;
    ++lo;
  	}
  	cout<<"Ham sau khi dao nguoc la :"<<a;
}
int main(){
	char a[100];		// Thay char a[100] bang string a
	hamdaonguoc(a);
}

// Anh trình bày cách khác duoi này em tham khao

//int main(){
//	string a;
//	cout << "Nhap vao chuoi can dao nguoc : "; 
//	getline(cin,a);
//	reverse(a.begin(),a.end());
//	cout<<"Ham sau khi dao nguoc la : "<< a;
//}
