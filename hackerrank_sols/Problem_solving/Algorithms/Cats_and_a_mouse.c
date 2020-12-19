//Kumar Ankit
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the catAndMouse function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
char* catAndMouse(int x, int y, int z) {
    int d1,d2;
    d1=abs(z-x);
    d2=abs(z-y);
    if(d1>d2){
        static char s1[]="Cat B";
        return s1;
    }
    else if(d1<d2){
        static char s2[]="Cat A";
        return s2;
    }
    else{
        static char s3[]="Mouse C";
        return s3;
    }

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* q_endptr;
    char* q_str = readline();
    int q = strtol(q_str, &q_endptr, 10);

    if (q_endptr == q_str || *q_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int q_itr = 0; q_itr < q; q_itr++) {
        char** xyz = split_string(readline());

        char* x_endptr;
        char* x_str = xyz[0];
        int x = strtol(x_str, &x_endptr, 10);

        if (x_endptr == x_str || *x_endptr != '\0') { exit(EXIT_FAILURE); }

        char* y_endptr;
        char* y_str = xyz[1];
        int y = strtol(y_str, &y_endptr, 10);

        if (y_endptr == y_str || *y_endptr != '\0') { exit(EXIT_FAILURE); }

        char* z_endptr;
        char* z_str = xyz[2];
        int z = strtol(z_str, &z_endptr, 10);

        if (z_endptr == z_str || *z_endptr != '\0') { exit(EXIT_FAILURE); }

        char* result = catAndMouse(x, y, z);

        fprintf(fptr, "%s\n", result);
    }

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
