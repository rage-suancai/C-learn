#include <stdio.h>
#include <string.h>

void narcissistic_number();
void multiplication_table();
void fibonacci_sequence_1();
void bubble_sort();
void fibonacci_sequence_2();
void robbery();
void palindrome_violence();
void palindrome_KMP();

int main() {


    //multiplication_table();

    //fibonacci_sequence_1();

    //bubble_sort();

    //fibonacci_sequence_2();

    //robbery();

    //palindrome_violence();

    palindrome_KMP();

}

void narcissistic_number() {

    for (int i = 0; i < 1000; ++i) {
        int a = i%10, b = i/10%10, c = i/10/10;
        if (a*a*a + b*b*b + c*c*c == i) {
            printf("%d是水仙花数: \n", i);
        }
    }

}

void multiplication_table() {

    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            if (i < j) break;
            printf("%d x %d = %2d  ", j, i, i*j);
        }
        printf("\n");
    }

}

void fibonacci_sequence_1() {

    int target = 30, result;

    int a = 1, b = 1, c;
    for (int i = 2; i < target; ++i) {
        c = a+b;
        a = b;
        b = c;
    }
    result = c;

    printf("%d", result);

}

void bubble_sort() {

    int arr[10] = {3, 5, 7, 2, 9, 0, 6, 1, 8, 4};

    for (int i = 0; i < 9; ++i) {
        _Bool flag = 0;
        for (int j = 1; j < 10-i; ++j) {
            if (arr[j] < arr[j-1]) {
                int tmp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = tmp;
                flag = 1;
            }
        }
        if (flag = 0) break;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
    
}

void fibonacci_sequence_2() {

    int target = 9;
    int dp[target];

    dp[1] = dp[0] = 1;
    for (int i = 2; i < target; ++i) dp[i] = dp[i-1] + dp[i-2];

    printf("%d", dp[target - 1]);

}

void robbery() {

    int arr[] = {2, 7, 9, 3, 1}, size = 5, result;

    int dp[size];
    dp[0] = arr[0];
    dp[1] = arr[1] > arr[0] ? arr[1] : arr[0];

    for (int i = 2; i < size; ++i) {
        dp[i] = dp[i-1] > dp[i-2] + arr[i] ? dp[i-1] : dp[i-2] + arr[i];
    }
    result = dp[size-1];

    printf("%d", result);

}

void palindrome_violence() {

    char str1[64], str2[64];
    gets(str1);
    gets(str2);
    unsigned long len1 = strlen(str1), len2 = strlen(str2);

    _Bool flag = 0;
    for (int i = 0; i < len1; ++i) {
        flag = 0;
        for (int j = 0; j < len2; ++j) {
            if (str1[i+j] != str2[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) break;
    }
    puts(flag ? "不包含" : "包含");

}

void palindrome_KMP() {

    char str1[] = "abababcabb";
    char str2[] = "cabb";

    int len1 = strlen(str1), len2 = strlen(str2);
    int next[len2];
    next[0] = 0;

    for (int i = 1; i < len2; ++i) {
        int j = i - 1;
        while(1) {
            if (next[j] == 0 || str2[i-1] == str2[next[j] - 1]) {
                next[i] = next[j] + 1;
                break;
            }
            j = next[j] - 1;
        }
    }

    int i = 0, j = 0;
    while (i < len1) {
        if (str1[i] == str2[j]) {
            i++;
            j++;
        } else {
            if (j == 0) {
                i++;
            } else {
                j = next[j-1];
            }
        }
        if (j == len2) break;
    
    }

    printf(j == len2 ? "匹配成功" : "匹配失败");

}
