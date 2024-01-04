#include<bits/stdc++.h>

using namespace std;

class employee{
	private :
		int id;
		string employee_name;
		string position;
		int basic_salary;
		int attraction_salary;
		int position_salary;
		int responsible_salary;
	public :
		employee(){
		}
		employee(int id, string employee_name,string position,int basic_salary,int attraction_salary,int position_salary,int responsible_salary){
			this -> id = id;
			this -> employee_name = employee_name;
			this -> position = position;
			this -> basic_salary = basic_salary;	
			this -> attraction_salary = attraction_salary;	
			this -> position_salary = position_salary;	
			this -> responsible_salary = responsible_salary;		
		}
		friend istream& operator >> (istream &in, employee &a);
		friend ostream& operator << (ostream &out, employee a);
		string get_value_name(){
			return employee_name;
			return position;
		}
		int get_value(){
			return id;
			return basic_salary;
			return attraction_salary;
			return position_salary;
			return responsible_salary;
		}
		void set_value(int id){
			this -> id = id;
			this -> employee_name = employee_name;
			this -> position = position;
			this -> basic_salary = basic_salary;	
			this -> attraction_salary = attraction_salary;	
			this -> position_salary = position_salary;	
			this -> responsible_salary = responsible_salary;
		}
};

istream& operator >> (istream &in, employee &a){
	cout << "Nhap id cua nhan vien: ";
	in >> a.id;
	in.ignore();
	cout << "Nhap ten nhan vien: ";
	getline(in,a.employee_name);
	cout << "Nhap chuc danh cua nhan vien: ";
	getline(in,a.position);
	cout << "Nhap luong co ban: ";
	in >> a.basic_salary;
	cout << "Nhap luong thu hut: ";
	in >> a.attraction_salary;
	cout << "Nhap luong vi tri: ";
	in >> a.position_salary;
	cout << "Nhap luong trach nhiem: ";
	in >> a.responsible_salary;
	cout << "\n";
	return in;
}
ostream& operator << (ostream &out, employee a){
	out << a.id << "\t" << a.employee_name << "\t" << a.position << "\t"<< a.basic_salary << "\t" << a.attraction_salary;
	out << "\t" << a.position_salary << "\t" << a.responsible_salary << "\t";
	
	out << a.basic_salary + a.attraction_salary + a.position_salary + a.responsible_salary << endl;
	return out;
}

int main(){
	cout << "Nhap so nhan vien: ";
	int n;
	cin >> n;
	employee a[n];
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cout << "id" << "\t" << "ten" << "\t\t" << "chdanh" << "\t\t" << "lcoban" << "\t" << "pthhut";
	cout << "\t" << "pchvu" << "\t" << "ptnhiem" << "\t" << "tong" <<  endl;
	
	for(int i=0;i<n;i++){
		cout << a[i];
	}
	return 0;
}
