#include "student.h"

//==========================================================================

void Student::enterDate(char *str) {
    SetConsoleCP(1251);
    cin >> str;
    SetConsoleCP(866);

}

void Student::printDate(const char *str, WORD color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    cout << str;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

//==========================================================================

Student::Student() {
    printDate("\n   Student constructor", 10);

    init();
    
    strcpy(mLastName, "-");
    strcpy(mFirstName, "-");
    strcpy(mPatronymic, "-");
    strcpy(mUniversity, "-");
    strcpy(mFaculti, "-");
    strcpy(mDepartment, "-");
    strcpy(mEducationalform, "-");
    mKyrs = 0;
    
}

Student::Student(const Student *student) {
    printDate("\n   Student constructor", 9);
    
    init();
    
    strcpy(mLastName, student->mLastName);
    strcpy(mFirstName, student->mFirstName);
    strcpy(mPatronymic, student->mPatronymic);
    strcpy(mUniversity, student->mUniversity);
    strcpy(mFaculti, student->mFaculti);
    strcpy(mDepartment, student->mDepartment);
    strcpy(mEducationalform, student->mEducationalform);
    mKyrs = student->mKyrs;
    
}

Student::Student(const char *lastName, const char *firstName, const char *patronymic, const char *university, const char *faculti, const char *department, const char *educationalform, const int kyrs) {
    printDate("\n   Student constructor", 14);
    
    init();
    
    strcpy(mLastName, lastName);
    strcpy(mFirstName, firstName);
    strcpy(mPatronymic, patronymic);
    strcpy(mUniversity, university);
    strcpy(mFaculti, faculti);
    strcpy(mDepartment, department);
    strcpy(mEducationalform, educationalform);
    mKyrs = kyrs;

}

Student::~Student() {
    printDate("\n   Student destructor", 12);

    delete mLastName;
    delete mFirstName;
    delete mPatronymic;
    delete mUniversity;
    delete mFaculti;
    delete mDepartment;
    delete mEducationalform;

}

//==========================================================================

void Student::input() {
    cout << "  Фамилия:        ";
    enterDate(mLastName);
  
    cout << "  Имя:            ";
    enterDate(mFirstName);

    cout << "  Отчество:       ";
    enterDate(mPatronymic);

    cout << "  Институт:       ";
    enterDate(mUniversity);

    cout << "  Факультет:      ";
    enterDate(mFaculti);

    cout << "  Кафедра:        ";
    enterDate(mDepartment);

    cout << "  Форма обучения: ";
    enterDate(mEducationalform);

    cout << "  Курс:           ";
    cin>>(mKyrs);
}

void Student::output() {
    cout << "\n  Фамилия:  " << mLastName 
         << "\n  Имя:      " << mFirstName 
         << "\n  Отчество: " << mPatronymic
         << "\n  Институт: " << mUniversity
         << "\n  Факультет: " << mFaculti
         << "\n  Кафедра: " << mDepartment
         << "\n  Форма обучения: " << mEducationalform
         << "\n  Курс: " << mKyrs
         << endl;
}

void Student::init() {
    mLastName = new char[255];
    mFirstName = new char[255];
    mPatronymic = new char[255];
    mUniversity = new char[255];
    mFaculti = new char[255];
    mDepartment = new char[255];
    mEducationalform = new char[255];
}
