#include <stdio.h>

void if_control();
void switch_control();
void for_control();
void while_control();
void arrays();
void multidimensional_arrays();
void string();

int main() {

    //if_control();

    //switch_control();

    //for_control();

    //while_control();

    //arrays();

    //multidimensional_arrays();

    string();

}

void if_control() {

    /*int i = 0;
    if (i > 20) {
        printf("Fuck World!");
    }
        printf("Fuck World?");*/

    /*int i = 0;
    if (i > 20) {
        printf("Fuck World!");
    } else {
        printf("LBWNB");
    }*/

    /*int score = 98;
    if (score >= 90) {
        printf("优秀");
    } else if(score >= 70) {
        printf("良好");
    } else if (score >= 60) {
        printf("及格");
    } else {
        printf("不及格");
    }*/

    int score = 59;
    if (score < 60) {
        if (score > 30) {
            printf("学习C++");
        } else {
            printf("学习Java");
        }
    }

}

void switch_control() {

    /*char c = 'A';
    switch (c) {
        case 'A':
            printf("去尖子班! 准备冲刺985大学!");
            break;
        case 'B':
            printf("去平行班! 准备冲刺一本!");
            break;
        case 'C':
            printf("去职高深造");
            break;
    }*/

    /*char c = 'A';
    switch (c) {
        case 'A':
            printf("去尖子班!");
            break;
        case 'B':
            printf("去平行班!");
            break;
        case 'C':
            printf("去差生班!");
            break;
        default:
            printf("去读职高 分流");
    }*/

    char c = 'A';
    switch (c) {
        case 'A':
            if (c == 'A') {
                printf("去尖子班!");
            }
            break;
        case 'B':
            printf("去平行班!");
            break;
    }

}

void for_control() {

    /*for (int i = 0; i < 5; ++i) {
        printf("%d, ", i);
    }*/

    /*for (int i = 0; ; ++i) {
        printf("%d, ", i);
    }*/

    /*for (;;) {
        printf("Fuck World\n");
    }*/
    
    /*for (int i = 0; i < 10; ++i) {
        if (i == 5) break;
        printf("%d", i);
    }*/

    /*for (int i = 0; i < 10; ++i) {
        if (i == 5) continue;
        printf("%d", i);
    }*/

    /*for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            if (i == j) continue;
            printf("%d, %d\n", i , j);
        }
    }*/

    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            if (i == j) break;
            printf("%d, %d\n", i , j);
        }
    }

}

void while_control() {

    /*while (1) {
        printf("Fuck World\n");
    }*/
    
    /*int i = 100;
    while (i > 0) {
        printf("%d, ", i);
        i /= 2;
    }*/

    int i = 100;
    while (i > 0) {
        if (i < 30) break;
        printf("%d, ", i);
        i /= 2;
    }

    /*do {
        printf("Fuck World!");
    } while (0);*/

}

void arrays() {

    //int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    /*char str1[] = {'A','B','C'};
    char str2[] = "ABC";*/

    /*int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < 12; ++i) {
        int days = arr[i];
        printf("2022年 %d 月的天数是: %d 天\n", (i+1), days);
    }*/

    /*int arr[] = {666, 777, 888};
    arr[1] = 999;
    printf("%d", arr[1]);*/

    /*int arr[10];
    for (int i = 0; i < 10; ++i) {
        printf("%d, ", arr[i]);
    }*/

    int arr[] = {111, 222, 333};
    printf("%d", arr[3]);

}

void multidimensional_arrays() {

    //int arr[2][2] = {{20, 10}, {18, 9}};

    /*int arr[3][12] = {{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                      {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                      {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};*/

    /*int arr[3][12] = {{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                      {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                      {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    printf("%d", arr[0][1]);*/

    int arr[2][2][2] = {{{1, 2}, {1, 2}}, {{1, 2}, {1, 2}}};
    printf("%d", arr[0][1][0]);
    
}

void string() {

    /*char str[] = {'F', 'u', 'c', 'k', '\0'};
    printf("%s", str);*/

    /*char str[] = "你这瓜保熟吗?";
    printf("%s", str);*/

    /*const char str[] = "蜜汁小汉堡";
    printf(str);*/

    /*char str[10];
    scanf("%s", str);
    printf("输入的内容为: %s", str);*/
    
    /*int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a + b = %d", a+b);*/

    /*char str[10];
    gets(str);
    puts(str);*/

    int c = getchar();
    putchar(c);

}
