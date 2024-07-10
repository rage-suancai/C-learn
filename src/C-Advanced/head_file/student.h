struct stu {

    int id;
    int age;
    char name[20];

} typedef Student;

void print(Student *student);

void modifyAge(Student *student, int newAge);

void modifyId(Student *student, int newId);
