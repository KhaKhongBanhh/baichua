#include<bits/stdc++.h>

using namespace std;

void chuyenDoiSangSoNhiPhan(){
	int n;
	cin >> n;
	stack<int> st;
	while(n!=0){
		st.push(n%2);
		n/=2;
	}
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
	cout << endl;
}

void kiemTraDayNgoacDung(){
	string a;
	getline(cin,a);
	stack<char> st;
	bool check = true;
	for(int i=0;i<a.length();i++){
		if(a[i] == '(') st.push(a[i]);
		else if(a[i] == ')' && st.size() == 0) {
			check = false;
			break;
		}
		else st.pop();
	}
	if(check == true && st.size() ==0) cout << "YES\n";
	else cout << "NO\n";
}


int main(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout << st.top() << endl;
	cout << st.size() << endl;
	st.pop();
	if(st.empty()){
		cout << "Empty !" <<endl;
	}
	chuyenDoiSangSoNhiPhan();
	cin.ignore();
	kiemTraDayNgoacDung();
	return 0;
}
