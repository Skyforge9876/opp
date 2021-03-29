#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		char gender;
	public:
		person()
		{
		 name = "Blank";
		 gender = '-';	
		}
		void setName(string name){
		cout << "Masukkan Nama: ";
		cin >> name;
		}
		
		void setGender(char gender){
		cout << "Masukkan Jenis Kelamin: ";
		cin >> gender;
		}
		string getName(){
			return name;
		}
		char getGender(){
			return gender;
		}
};		


class student{
	private:
		int nim;
		string registration_number;
		string prodi;
	public:
		void setNim(int nim){
		cout << "Masukkan Nim: ";
		cin >> nim;	
		}
		void setRegistrationNumber(string registration_number){
		cout << "Masukkan registration number: ";
		cin >> registration_number;	
		}
		void setProdi(string prodi){
		cout << "Masukkan Prodi: ";
		cin >> prodi;	
		}
		int getNim(){
			return nim;
		}
		string getRegistrationNumber(){
			return registration_number;
		}
		string getProdi()
		{
			return prodi;
		}
};
class Teacher : public Person, public student{
	private:
		int nik;
		string faculty;
	public:
		void setNik(int nik){
		cout << "Masukkan Nik: ";
		cin >> nik;
		}
		int getNik(){
			return nik;
		}
		void setFaculty(string faculty){
			cout << "Masukkan falculty: ";
		cin >> faculty;
		}
		string getFaculty(){
			return faculty;
		}

int main()
{
	int studentnum;
	cout << "Masukkan berapa student yang akan di operasi";
	cin >> studentnum;
	Teacher tn[100]; 
	
	for (int i=1; i>=studentnum; i++)
	{
		tn[i].setName();
		tn[i].setGender();
		tn[i].setNick();
		tn[i].setFaculty();
		tn[i].setNim();
		tn[i].setRegistrationNumber()
		tn[i].setProdi();
		cout << "=====================" << endl;
		cout << "Name : " << tn[i]setName() << endl;
		cout << "Gender : " << tn[i]setGender() << endl;
		cout << "Nick : " << tn[i]setNick() << endl;
		cout << "Faculty : " << tn[i]setFaculty() << endl;
		cout << "Nim : " << tn[i]setNim() << endl;
		cout << "Prodi : " << tn[i]setProdi() << endl;		
	}
}
