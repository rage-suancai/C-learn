#include <stdio.h>

/*#define PI 3.1415926
#define M a+b
#define lbwnb long
#define MUL(x) x*x
// #define BB(i) printf("我是宏替换的: %d", i)
#define BB(str) printf("我是宏替换的: "#str" <")
#define TEST(n) x ##n
// #undef TEST*/

/*#ifdef PI
    #define M 666
#else
    #define M 777
#endif

#define PI 3.1415
#ifdef PI
    #define M 666
#else
    #define M 777
#endif

#ifndef PI
    #define M 666
#else
    #define M 777
#endif*/

/*#define M 666
#if M == 666
    #define K 999
#elif M == 777
    #define K 888
#else
    #define K 000
#endif*/

#define M 666
#if M == 666
    #ifdef L
        #include "test.h"
    #endif
#elif M == 777
    #define K = 888
#else
    #define K = 000
#endif

int main() {

    /*printf("π的值为: %f", PI);

    int a = 10, b = 20;
    printf("%d", M*a);

    lbwnb a = 10L;
    printf("%d", a);

    printf("%d", MUL(9));

    BB(888);

    BB("你看这不就替换了吗");
    
    int TEST(1) = 10;
    x1 = 20;*/

    /*printf("%d", M);*/

}
