#include<bits/stdc++.h>

using namespace std;

void hamdaonguoc(char a[100]){	// Em n�n d�ng string a
	cout<<"Nhap vao chuoi can dao nguoc :"; 
	cin>>a;						// cin doan n�y l� sai roi nh� 
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

// Anh tr�nh b�y c�ch kh�c duoi n�y em tham khao

//int main(){
//	string a;
//	cout << "Nhap vao chuoi can dao nguoc : "; 
//	getline(cin,a);
//	reverse(a.begin(),a.end());
//	cout<<"Ham sau khi dao nguoc la : "<< a;
//}
