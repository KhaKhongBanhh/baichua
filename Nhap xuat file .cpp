#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream input("input.txt");
    fstream output;
    output.open("output.txt", ios::out);
	
	int n;
	input >> n;
	output << n;
	
    input.close();
    output.close();

    return 0;
}
