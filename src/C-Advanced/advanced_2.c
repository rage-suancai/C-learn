#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "head_file/test.h"
#include "head_file/student.h"

int compare(const void *a, const void *b);

/*struct Student {

    int id;
    int age;
    char *name;

};*/

/*struct Object {

    // int a;
    // short b;
    // char c;

    char a;
    int b;
    short c;

};*/

/*struct Student {

    int id;
    int age;
    char *name;

};
void transfer(struct Student *student) {

    //student.age = 20;
    student->age = 20;

}*/

/*union Object {
    
    int a;
    char b;
    float c;

};*/

//enum status {low=1, middle=2, high=3};

/*typedef int lbwnb;

typedef const char *String;

typedef struct test {
    int age;
    char name[10];
} Student;*/

int main() {

    /*struct Student s = {1, 18, "小爱"};
    printf("id = %d, age = %d, name = %s", s.id, s.age, s.name);*/

    /*struct Student s = {1, 18};
    s.name = "小爱";
    s.age = 17;
    printf("id = %d, age = %d, name = %s", s.id, s.age, s.name);*/

    //printf("int类型的大小是: %lu", sizeof(int));

    /*int arr[10];
    printf("int类型的大小是: %lu", sizeof(arr));*/

    //printf("%lu", sizeof(struct Object));

    /*struct Student arr[3] = {{1, 18, "小明"},
                             {2, 17, "小红"},
                             {3, 18, "小刚"}};*/

    /*struct Student arr[3] = {{1, 18, "小明"},
                             {2, 17, "小红"},
                             {3, 18, "小"}};
    printf("%s", arr[1].name);*/

    /*struct Student student = {1, 18, "小刚"};
    struct Student *p = &student;
    //printf("%s", (*p).name);
    printf("%s", p->name);*/

    /*struct Student student = {1, 18, "小刚"};
    transfer(student);
    printf("%d", student.age);*/

    /*truct Student student = {1, 18, "小刚"};
    transfer(&student);
    printf("%d", student.age);*/

    /*union Object object;
    object.a = 128;
    printf("%d", object.b);*/

    /*enum status a = low;
    printf("%d", a);*/

    /*enum status a = high;
    if (a == low) {
        printf("低档位");
    } else if (a == high) {
        printf("高档位");
    } else {
        printf("中档位");
    }*/

    /*enum status a = high;
    switch (a) {
        case low:
        case high:
        case middle:
        default: ;
    }*/
    
    /*lbwnb i = 666;
    printf("%d", i);*/

    /*String str = "Hello World";
    printf(str);*/

    //Student student = {18, "小明"};

    //int c = sum(1, 2);
    
    /*Student student = {1, 18, "小明"};
    modifyAge(&student, 19);
    print(&student);*/

    /*char *c = "Fuck World";
    printf("%lu", strlen(c));

    char a[20] = "Fuck", *b = "World";
    strcat(a, b);
    printf("%s", a);

    char str[10], *c = "Fuck";
    strcpy(str, c);
    printf("%s", str);

    char *a = "AAA", *b = "AAA";
    int value = strcmp(a, b);
    printf("%d", value);

    int a = 2;
    double d = sqrt(a);
    printf("%lf", d);

    for (int i = 0; i < 1000; ++i) {
        int a = i%10, b = i/10%10, c = i/10/10;
        if (pow(a,3) + pow(b,3) + pow(c,3) == i) {
            printf("%d 是水仙花数 \n", i);
        }
    }

    double x = 3.14;
    printf("不小于x的最小整数: %f\n", ceil(x));
    printf("不大于x的最大整数：%f\n", floor(x));

    double x = -3.14;
    printf("x的绝对值是: %f", fabs(x));

    int arr[] = {5, 2, 4, 0, 7, 3, 8, 1, 9, 6};
    qsort(arr, 10, sizeof(int), compare);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }

    int *p = (int *) malloc(sizeof(int));
    *p = 128;
    printf("%d", *p);

    int *p = (int *) malloc(sizeof(int));
    *p = 128;
    printf("%d", *p);
    free(p);
    p = NULL;*/

}

void print(Student *student) {
    printf("ID: %d, 姓名: %s, 年龄: %d岁\n", student->id, student->name, student->age);
}
void modifyAge(Student *student, int newAge) {
    student->age = newAge;
}
void modifyId(Student *student, int newId) {
    student->id = newId;
}

int compare(const void *a, const void *b) {

    int *x = (int *) a, *y  = (int *) b;
    return *x - *y;

}
