#include "Header.h"

#include "student.h"

int main() {

	setting();

	student();

    return 0;
}

void setting() {
	setlocale(0, "Rus");
	system("mode 120,50");
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsole, &csbi);
	csbi.dwSize.Y = 500;
	SetConsoleScreenBufferSize(hConsole, csbi.dwSize);
}

void student() {

	cout << "\n\n===========================================\n\n";

	Student* student = new Student();

	cout << "\n\n ������� ������ ������� �������-1 � �������-2:\n\n";

	student->input();

	cout << "\n===========================================\n";

	cout << "\n ����� �������-1:\n";
	student->output();

	cout << "\n===========================================\n";

	Student* student2 = new Student(student);

	cout << "\n\n ����� �������-2:\n";
	student2->output();

	delete student;
	delete student2;

	cout << "\n\n===========================================\n";

	student = new Student("������", "������", "�����", "���", "�������������� �������", "����������� � �������������� �������", "�����", 2);

	cout << "\n\n ����� ���-3:\n";
	student->output();

	delete student;

	cout << "\n\n===========================================\n";

	Student* student3 = new Student[5];

	cout << "\n\n ������� ������ ������� ������� �������-4:\n";

	for (int i = 0; i < 5; i++) {
		cout << "\n ����� - " << i + 1 << endl;
		student3[i].input();
	}

	cout << "\n\n===========================================\n";
	cout << "\n ������ ������� �������-4:\n";

	for (int i = 0; i < 5; i++) {
		cout << "\n ����� - " << i + 1;
		student3[i].output();
	}

	delete[] student3;

	cout << "\n\n===========================================\n";

}



