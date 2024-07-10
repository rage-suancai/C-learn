#include <stdio.h>

void file_input_and_output();
void random_access();

int main() {

    //file_input_and_output();

    random_access();

}

void file_input_and_output() {

    // FILE *file = fopen("hello.txt", "r");

    /*FILE *file = fopen("hello.txt", "r");
    int c;
    while ((c = getc(file)) != EOF) {
        putchar(c);
    }*/

    /*FILE *file = fopen("hello.txt", "r");
    if (file != NULL) {
        int c;
        while ((c = getc(file)) != EOF) {
            putchar(c);
        }
        fclose(file);
    } else {
        puts("文件打开失败!");
    }*/
    
    // FILE *file = fopen("hello.txt", "a");

    /*FILE *file = fopen("hello.txt", "a");
    if (file != NULL) {
        for (int i = 0; i < 10; ++i) {
            putc('A' + i, file);
        }
        fclose(file);
    } else {
        puts("文件打开失败!");
    }*/
    
    /*FILE *file = fopen("hello.txt", "a+");
    if (file != NULL) {
        while (1) {
            int c = getchar();
            if (c == 'q') break;
            putc(c, file);
        }
        fclose(file);
    }*/

    /*FILE * file = fopen("hello.txt", "a+");
    if (file != NULL) {
        fprintf(file, "树脂%d", 666);
        fclose(file);
    }

    FILE * file = fopen("hello.txt", "w");
    if (file != NULL) {
        fputs("小黑子苏珊", file);
        fclose(file);
    }*/

}

void random_access() {

    /*FILE * file = fopen("hello.txt", "r");
    if (file != NULL) {
        fseek(file, 2L, SEEK_SET);
        printf("%ld", ftell(file));
        fclose(file);
    }

    FILE * file = fopen("hello.txt", "r");
    if (file != NULL) {
        fpos_t pos;
        fgetpos(file, &pos);
        fseek(file, -2L, SEEK_END);
        fsetpos(file, &pos);
        printf("%ld", ftell(file));

        fclose(file);
    }*/

    FILE * file = fopen("hello.txt", "r");
    FILE * target = fopen("hello_copy.txt", "w");
    if (file != NULL) {
        char buf[1024];
        size_t s;
        while ((s = fread(buf, sizeof(char), 1024, file)) > 0) {
            fwrite(buf, sizeof(char), s, target);
        }
        fclose(file);
    }

}
