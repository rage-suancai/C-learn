#include <stdio.h>

_Bool basic_usage();
void variable_usage();
void unsigned_number();
void type_conversion();
void basic_operators();
void operator_precedence();
void self_increasion_self_decreasion();
void bitwise_operators();
void logical_operators();

int main() {

    //basic_usage();

    //variable_usage();

    //unsigned_number();

    //type_conversion();

    //basic_operators();

    //operator_precedence();

    //self_increasion_self_decreasion();

    //bitwise_operators();

    logical_operators();

}

_Bool basic_usage() {

    printf("Hello World!");
    return 0;

}

void variable_usage() {

    /*int a = 10;
    int b = 20;
    int c = a+b;
    //printf(c);
    printf("c的结果是: %d", c);*/

    /*double a = 0.5;
    float b = 2.5f;
    printf("a+b的结果是: %f", a+b);*/

    /*double a = 0.5;
    float b = 2.5f;
    printf("a=%f, b=%f", a,b);*/

    /*char c = 'A';
    printf("变量c的值为: %c 对应的ASCII码为: %d", c,c);*/

    /*char c = 66;
    printf("变量c的值为: %c 对应的ASCII码为: %d", c,c);*/

    /*int a = 10;
    char c = 'a';
    printf("变量c的ASCII码为: %d", c);*/

    /*short s = 10;
    s = 20;
    printf("%d", s);*/

    /*int a, b, c, d;
    printf("%d,%d,%d,%d", a,b,c,d);*/

    char c = 127;
    c = c + 1;
    printf("%d", c);

    /*const c = 10;
    //c = 22;
    printf("%d", c);*/

}

void unsigned_number() {

    /*unsigned char c = -65;
    printf("%u", c);*/

    int i = -1;
    printf("%u", i);

}

void type_conversion() {

    /*short s = 10;
    int i = s;*/

    /*int a = 511;
    char b = a;
    printf("%d", b);*/

    /*double a = 3.14;
    int b = a;
    printf("%d", b);*/

    /*float a = 2;
    int b = 3;
    double c = b / a;
    printf("%f", c);*/

    /*int a = (int) 2.5;
    printf("%d", a);*/

    /*double a = 3.14;
    int b = (int) (a + 2.8);
    printf("%d", b);*/

    int a = 10, b = 4;
    double c = a / b;
    double d = (double) a / b;
    printf("不进行类型转换: %f, 进行类型转换: %f", c, d);

}

void basic_operators() {

    //int a = 10;

    /*int a, b;
    a = b = 20;
    printf("%d", a);*/

    /*int a = 10, b = 5;
    printf("%d", a+b);*/

    //int a = +10, b = +5;

    /*int a = 10, b = 5;
    printf("%d", a - b);*/

    /*int a = -10;
    printf("%d", -a);*/

    /*int a = 20, b = 10;
    printf("%d, %d", a*b, a/b);*/

    int a = 20, b = 10;
    printf("%d", a%b);

}

void operator_precedence() {

    /*int a = 20, b = 10;
    printf("%d", a+a*b);*/

    /*int a = 20, b = 10;
    printf("%d", (a+a)*b);*/

    //printf("%d", (1-(3+4)) * (-2/1));

    /*int c;
    int a = (3+(c=2)) * 6;
    printf("%d", a);*/

    int b, c;
    int a = (b=5, c=b+8);
    printf("%d", a);

}

void self_increasion_self_decreasion() {

    /*int a = 10;
    a = a+1;
    printf("%d", a);*/

    /*int a = 10;
    ++a;
    printf("%d", a);*/

    /*int a = 10;
    int b = ++a;
    printf("%d", b);*/

    /*int a = 10;
    int b = a++;
    printf("a = %d, b = %d", a, b);*/

    /*int a = 10;
    a = a+5;
    printf("%d", a);*/

    /*int a = 10;
    a += 5;
    printf("%d", a);*/

    /*int a = 10;
    int b = a += 5;
    printf("a = %d", b);*/

    int a = 10;
    int b = 5 * --a;
    printf("b = %d", b);

}

void bitwise_operators() {

    /*int a = 10;
    a *= 2;
    printf("%d", a);*/

    /*int a = 10;
    a = a << 1;
    printf("%d", a);*/
    
    /*int a = 6;
    a = a << 2;
    printf("%d", a);*/

    /*int a = 6;
    a = a >> 1;
    printf("a = %d", a);*/

    /*int a = 6, b = 4;
    int c = a & b;
    printf("c = %d", c);*/

    /*int a = 6, b = 4;
    int c = a & b;
    printf("c = %d", c);*/

    /*int a = 6, b = 4;
    int c = a | b;
    printf("%d", c);*/

    int a = 6, b = 4;
    int c = a ^ b;
    a = ~a;
    printf("%d, %d", c, a);

}

void logical_operators() {

    /*int a = 10;
    _Bool c = a < 0;
    printf("c = %d", c);*/

    /*char c = 'D';
    printf("c是否为大写字母: %d", c >= 'A');*/
    
    /*char c = 'D';
    printf("c是否为大写字母: %d", c >= 'A' && c <= 'Z');*/

    /*char c = 'D';
    printf("c是否为字母A: %d", c == 'A');*/
    
    /*char c = 'D';
    printf("c是否不为字母A: %d", c != 'A');*/

    /*int i = 20;
    printf("i是否不小于20：%d", !(i < 20));*/

    int i = 0;
    char c = i > 10 ? 'A' : 'B';
    printf("%d", c);

}
