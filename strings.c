#include <stdio.h>
#include <string.h>

void string_changer(char **s){
    *s = "My World";
}

int main(void){
    char *s = "Hello World";
    char m[50] = "This is all!";

    string_changer(&s);

    printf("New String: %s\n", s);
    strcat(m, s);
    printf("%s", m);
}