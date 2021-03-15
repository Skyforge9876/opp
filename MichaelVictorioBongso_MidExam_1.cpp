#include <iostream>

using namespace std;

class grading{
	private:
		int mahasiswa;
		int Assignment[100];
		int Quiz[100];
		int Attendance[100];
		int MidExam[100];
		int FinalExam[100];
		int TempAttendance[100];
		int TempQuiz[100];
		int TempAssignment[100];
		int TempMid[100];
		int TempFinal[100];
		int GradeMahasiswa[100];
		string GradeSymbol[100];
	public:
		void input()
		{
			cout << "Grading System v1.0" << endl;
			cout << "===========================" << endl; 
			cout << "Enter Number of Student: ";
			cin >> mahasiswa;
			cout << endl;
		}
		void nilai()
		{
			for (int i=1; i<=mahasiswa; i++)
			{
				cout << "Enter Grade For Student " << i << endl;
				cout << "Attendance			:";
				cin >> Attendance[i];
				cout << "Quiz				:";
				cin >> Quiz[i];
				cout << "Assignment			:";
				cin >> Assignment[i];
				cout << "MidExam				:";
				cin >> MidExam[i];
				cout << "FinalExam			:";
				cin >> FinalExam[i];
				cout << endl;
			}
		}
		void perhitungan()
		{
			for (int i=1; i<=mahasiswa; i++){
				TempAttendance[i] = (Attendance[i] * 10) / 100;
				TempQuiz[i] = (Quiz[i] * 10) / 100;
				TempAssignment[i] = (Assignment[i] * 20) / 100;
				TempMid[i] = (MidExam[i] * 30) / 100;
				TempFinal[i] = (FinalExam[i] * 30) / 100;
				GradeMahasiswa[i] =  TempAttendance[i] + TempQuiz[i] + TempAssignment[i] + TempMid[i] + TempFinal[i];
				if (GradeMahasiswa[i] >= 91)
				{
					GradeSymbol[i] = 'A';
				}
				else if (GradeMahasiswa[i] >= 85 && GradeMahasiswa[i] <=90)
				{
					GradeSymbol[i] = "A-";
				}
				else if (GradeMahasiswa[i] >= 82 && GradeMahasiswa[i] <=84)
				{
					GradeSymbol[i] = "B+";
				}
				else if (GradeMahasiswa[i] >= 78 && GradeMahasiswa[i] <=81)
				{
					GradeSymbol[i] = "B";
				}
				else if (GradeMahasiswa[i] >= 75 && GradeMahasiswa[i] <=77)
				{
					GradeSymbol[i] = "B-";
				}
				else if (GradeMahasiswa[i] >= 70 && GradeMahasiswa[i] <=74)
				{
					GradeSymbol[i] = "C+";
				}
				else if (GradeMahasiswa[i] >= 67 && GradeMahasiswa[i] <=69)
				{
					GradeSymbol[i] = "C";
				}
				else if (GradeMahasiswa[i] >= 60 && GradeMahasiswa[i] <=66)
				{
					GradeSymbol[i] = "C-";
				}
				else if (GradeMahasiswa[i] >= 40 && GradeMahasiswa[i] <=59)
				{
					GradeSymbol[i] = "D";
				}
				else if (GradeMahasiswa[i] >= 0 && GradeMahasiswa[i] <=39)
				{
					GradeSymbol[i] = "F";
				}
				
			}
			
		}
		void output()
		{
				cout << "-----------------------" << endl;
				cout << "STUDENTS GRADE" << endl;
				cout << "-----------------------" << endl;
				cout << "Student		Grade" << endl;
				for(int i=1; i<=mahasiswa; i++){
				cout << i <<"\t\t"<<GradeMahasiswa[i] <<"("<< GradeSymbol[i] <<")" << endl;
				}
		
		}
};


int main(){
	grading maha;
	maha.input();
	maha.nilai();
	maha.perhitungan();
	maha.output();
}
