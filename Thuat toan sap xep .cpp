#include<bits/stdc++.h>

using namespace std;

// SAP XEP CHON
void selectionSort(int a[], int n){
	for(int i=0;i<n-1;i++){
		int min_pos = i;
		
		for(int j = i+1;j<n;j++){
			if(a[j] < a[min_pos]){
				min_pos = j;
			}
		}
		
		swap(a[i], a[min_pos]);
	}
}

//SAP XEP NOI BOT
void bubbleSort(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

// SAP XEP CHEN
void insertionSort(int a[], int n){
	for(int i=1;i<n;i++){
		
		int x = a[i];
		int pos = i-1;
		
		while(pos >= 0 && x < a[pos]){
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	insertionSort(a,n);
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}
