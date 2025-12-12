#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


//11.1


//11.2
void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char CH;
    printf("Введите символ CH: ");
    CH = getchar();

    for (int i = 0; i < 30; i++) {
        printf("%c ", CH - i);
    }
    printf("\n");
}



//11.3
void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char s[100];
    printf("Введите строку s: ");
    fgets(s, 100, stdin);

    int count = 0;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == ' ') count++;
        i++;
    }

    printf("Количество пробелов: %d\n", count);
}




//11.4
void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char s[100];
    printf("Введите строку s: ");
    fgets(s, 100, stdin);

    printf("До: %s", s);

    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == ' ') s[i] = '#';
        i++;
    }

    printf("После: %s", s);
}





//11.5
void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char s[100];
    printf("Введите строку s: ");
    fgets(s, 100, stdin);

    printf("До: %s", s);

    int i = 0;
    while (s[i] != '\0') {
        if (isdigit(s[i])) s[i] = '$';
        i++;
    }

    printf("После: %s", s);
}


//11.5.2
int isdigit_my(char c) {
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char s[100];
    printf("Введите строку s: ");
    fgets(s, 100, stdin);

    printf("До: %s", s);

    int i = 0;
    while (s[i] != '\0') {
        if (isdigit_my(s[i])) s[i] = '$';
        i++;
    }

    printf("После: %s", s);
}




//11.6.1
#include <ctype.h>

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char s[100];
    printf("Введите строку s (без русских символов): ");
    fgets(s, 100, stdin);

    printf("До: %s", s);

    int i = 0;
    while (s[i] != '\0') {
        s[i] = toupper(s[i]);
        i++;
    }

    printf("После: %s", s);
}



//11.6.2
char toupperAll(char c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    else if (c >= 'а' && c <= 'я')
        return c - 32;
    else if (c == 'ё')
        return 'Ё';
    else
        return c;
}

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char s[100];
    printf("Введите строку s (с русскими символами): ");
    fgets(s, 100, stdin);

    printf("До: %s", s);

    int i = 0;
    while (s[i] != '\0') {
        s[i] = toupperAll(s[i]);
        i++;
    }

    printf("После: %s", s);
}




//11.7  в лабе 8.2!!