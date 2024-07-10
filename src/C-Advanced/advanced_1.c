#include <stdio.h>

void function_creation_use(void);
void function_global_local();
int function_returns(int arr[], int);
int recursion(int);
void pointer();
void arrays_pointer();
void multilevel_pointers();
void pa_ap();
int pf_fp(int (*p)(int, int), int a, int b);
int pf_fp_Impl();

//int a = 10;

int main() {

    //function_creation_use();

    /*a += 10;
    function_global_local();
    printf("%d", a);*/

    /*int a = 10, b = 20;
    int result = function_returns(a,b);
    printf("a+b=%d", function_returns(a,b));
    printf("a = %d, b = %d", a, b);
    */
    /*int arr[] = {1, 4, -9, 2, -4, 7};
    int min = function_returns(arr, 6);
    printf("%d", arr[0]);*/
    /*int a = 10;
    function_returns(a);
    printf("第一个小于0的数是: %d", min);*/

    //printf("%d", recursion(3));

    //pointer();

    //arrays_pointer();

    //multilevel_pointers();

    /*int a = 10;
    int *p = pf_fp(&a);
    printf("%d", *p);
    printf("%d", *pf_fp(&a));*/
    /*int *p = pf_fp(20);
    pf_fp(30);
    printf("%d", *p);*/
    /*int (*p)(int, int) = pf_fp;
    printf("%p", p);*/
    /*int (*p)(int, int) = pf_fp;
    int result = (*p)(1, 2);
    printf("%d", result);*/
    int (*p)(int, int) = pf_fp_Impl;
    printf("%d", pf_fp(p, 10, 20));

} 

void function_creation_use(void) {

    printf("我是测试函数");

}

void function_global_local() {

    /*for (int i = 0; i < 10; ++i) {
        printf("%d", i);
    }
    i += 10;*/

    /*for (int i = 0; i < 10; ++i) {

    }
    for (int i = 0; i < 20; ++i) {

    }*/

    //a += 10;

}

int function_returns(int arr[], int len) {

    // printf("%d", a+b);

    /*int tmp = a;
    a = b;
    b = tmp;*/

    //arr[0] = 999;

    /*a += 10;
    printf("%d\n", a);*/

    /*static int a = 20;
    a += 20;
    printf("%d ", a);*/

    //return a+b;

    for (int i = 0; i < len; ++i) {
        if (arr[i] < 0) return arr[i];
    }
    return 0;

}

int recursion(int n) {

    /*printf("Fuck World\n");
    recursion();*/

    if (n == 1) return 1;
    return recursion(n-1)*n;

}

void pointer() {

    /*int a = 10;
    int *p = &a;
    printf("a在内存中的地址为: %p", p);*/

    /*int a = 666;
    int *p = &a;
    printf("内存(%p)上存储的值为: %d", p, *p);*/

    /*int a = 666;
    int *p = &a;
    *p = 999;
    printf("a的值为: %d", a);*/

    /*int a;
    scanf("%d", &a);
    printf("%d", a);*/

    //int *a = NULL;

    /*int a = 9, b = 10;
    const int *p = &a;
    *p = 20;
    p = &b;*/

    /*int a = 9, b = 10;
    int *const p = &a;
    *p = 20;
    p = &b;*/

    /*int a = 9, b = 10;
    const int *const p = &a;
    *p = 20;
    p = &b;*/

}

void arrays_pointer() {

    /*char str[] = "Fuck World";
    char *p = str;
    printf("%c", *p);*/

    /*char str[] = "Fuck World";
    char *p = str;
    printf("%c", p[1]);*/

    /*char str[] = "Fuck World";
    printf("%c", str[0]);*/

    /*char str[] = "Fuck World";
    char *p = str;*/

    /*char str[] = "Fuck World";
    char *p = str;
    printf("第一个元素值为: %c, 第二个元素值为: %c", *p, *(p+1));*/

    /*char str[] = "Fuck World";
    char *p = str;
    ++p;
    printf("%c", *p);*/

    int arr[][3] = {{1,2,3}, {4,5,6}};
    int *p = arr[0];
    printf("%d = %d", *(p+4), arr[1][1]);

}

void multilevel_pointers() {

    /*int a = 20;
    int *p = &a;
    int **pp = &p;
    int ***ppp = &pp;*/

    int a = 20;
    int *p = &a;
    int **pp = &p;
    printf("p = %p, a = %d", *pp, **pp);
    
}

void pa_ap() {

    /*int a, b, c;
    int *arr[3] = {&a, &b, &c};*/

    /*int a, b, c;
    int *arr[3] = {&a, &b, &c};
    *arr[0] = 999;
    printf("%d", a);*/

    /*int *p[3];
    int **pp = p;*/

    int arr[][3] = {{111, 222, 333}, {444, 555, 666}};
    int (*p)[3] = arr;
    //printf("%d, %d, %d", *(*p+0), *(*p+1), *(*p+2));
    //printf("%d", *(*p+1));
    //printf("%d", *(*(p+1)+2));
    printf("%d", p[1][2]);

}

int pf_fp(int (*p)(int, int), int a, int b) {

    //return a;

    /*int i = a;
    return &i;*/

    //return a+b;

    return p(a, b);

}
int pf_fp_Impl(int a, int b) {

    return a+b;

}
