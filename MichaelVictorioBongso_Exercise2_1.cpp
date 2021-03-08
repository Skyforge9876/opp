#include <iostream>

using namespace std;
class Employee{
	private:
		int Emp1;
		int Compes;
	public:
		void storage(int temp){
		cout << "Enter Data Employee: "; cin >> Emp1;
		cout << "Enter Compensation: "; cin >> Compes;
	}
		void output(int temp){
		cout << "=====================" << endl; 
		cout << "Data Employee: " << Emp1 << endl;
		cout << "Compensation: " << Compes << endl;
		cout << "=====================" << endl;
		
	}
};

int main(){
	int EmpTemp1, EmpTemp2, EmpTemp3;
	Employee Empl1, Empl2, Empl3;
	Empl1.storage(EmpTemp1);
	Empl2.storage(EmpTemp2);
	Empl3.storage(EmpTemp3);
	Empl1.output(EmpTemp1);
	Empl2.output(EmpTemp2);
	Empl3.output(EmpTemp3);
	return 0;
}
