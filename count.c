#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please load a file.\n");
        return 1;
    }

    char *filename = argv[1];
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("open file %s failed \n", filename);
        return 2;
    }

    char buf[1000];
    if (fgets(buf, sizeof(buf), fp) != NULL) {
        printf("%s\n", buf);
    }

    int c = 0;
    char delims[] = " ,";
    char *token = strtok(buf, delims);
    while (token != NULL) {
        c = c + 1;
        token = strtok(NULL, delims);
    }

    printf("Count : %d\n", c);

    fclose(fp);
    return 0;
}

