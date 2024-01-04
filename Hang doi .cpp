#include<bits/stdc++.h>

using namespace std;

int main(){
	queue<int> q;
	
	q.push(1);
	q.push(2);
	
	cout << q.front() << endl;
	q.pop();
	cout << q.size() << endl;
	if(!q.empty()){
		cout << "YES\n";
	} else cout << "NO\n";
}
