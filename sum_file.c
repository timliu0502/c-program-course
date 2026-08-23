#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Please load a file.\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("open file %s failed!\n", argv[1]);
        return 2;
    }

    char buf[1000];
    int count = 0;
    int sum = 0;

    if (fgets(buf, sizeof(buf), fp) != NULL) {
        printf("%s", buf);
    }

    char delims[] = ",";
    char *token = strtok(buf, delims);

    while (token != NULL) {
        printf("%s\n", token);
        int num = atoi(token);
        sum = sum + num;
        count = count + 1;
        token = strtok(NULL, delims);
    }

    fclose(fp);

    printf("Count: %d , Sum: %d\n", count, sum);

    return 0;
}

