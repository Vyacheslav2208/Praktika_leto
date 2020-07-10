#include "Header.h"

#include "student.h"

int main() {

	setting();

	student();

	_getch();
	

	_getch();

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

	cout << "\n\n Введите данные классов Студент-1 и Студент-2:\n\n";

	student->input();

	cout << "\n===========================================\n";

	cout << "\n Класс Студент-1:\n";
	student->output();

	cout << "\n===========================================\n";

	Student* fio2 = new Student(student);

	cout << "\n\n Класс Студент-2:\n";
	fio2->output();

	delete student;
	delete fio2;

	cout << "\n\n===========================================\n";

	student = new Student("Пупкин", "Андрей", "Ильич", "ПТУ", "Вычислительная техника", "Информатика и вычислительная техника", "Очная", 2);

	cout << "\n\n Класс ФИО-3:\n";
	student->output();

	delete student;

	cout << "\n\n===========================================\n";

	Student* fio3 = new Student[5];

	cout << "\n\n Введите данные массива классов Студент-4:\n";

	for (int i = 0; i < 5; i++) {
		cout << "\n Класс - " << i + 1 << endl;
		fio3[i].input();
	}

	cout << "\n\n===========================================\n";
	cout << "\n Массив классов Студент-4:\n";

	for (int i = 0; i < 5; i++) {
		cout << "\n Класс - " << i + 1;
		fio3[i].output();
	}

	delete[] fio3;

	cout << "\n\n===========================================\n";

}



