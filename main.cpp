/*
* Пример программы, работающей со своей командной строкой
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv) {
    if(argc <= 1) {
        printf("syntax : \n\t%s --help or\n\t./p --add [a] [b]\n", argv[0]);
        return 0;
    }

    if(!strcmp(argv[1], "--help") || !strcmp(argv[1], "-h")) {
        printf("You requested help message.\n");
    }else 
    if(!strcmp(argv[1], "-l") || !strcmp(argv[1], "--list")) {
        printf("You requested list message.\n");
    } else
    if(!strcmp(argv[1], "-v") || !strcmp(argv[1], "--version")) {
        printf("0.1.1.\n");
    } else {
        printf("Unknown parameter: '%s'. Type %s --help for help.\n", argv[1], argv[0]);
    }
    
    return 0;
}
