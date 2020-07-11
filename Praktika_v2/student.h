#include "Header.h"

class Student {
public:
    Student();
    Student(const Student *fio);
    Student(const char *LastName, const char *firstName = "-", const char *patronymic = "-", const char *university = "-", const char *faculti = "-", const char *department = "-", const char *educationalform = "-", const int kyrs = 0);
    ~Student();
    
    void input();
    void output();

protected:
    void init();
    char* mLastName;
    char* mFirstName;
    char* mPatronymic;
    char* mUniversity;
    char* mFaculti;
    char* mDepartment;
    char* mEducationalform;
    int   mKyrs;

private:
    void enterDate(char*);
    void printDate(const char*, WORD);
};

