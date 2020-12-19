//Kumar Ankit
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     int c=0;
     if(n%2==0){
       if(p<=n/2){
         if(p==1){
             c=0;
         }
         else{
             if(p%2==0){
                 c=p/2;
             }
             else{
                 c=(p-1)/2;
             }
         }
       }
       else{
           if(p==n){
               c=0;
           }
           else{
               if(p%2==0){
                   c=(n-p)/2;
               }
               else{
                   c=(n-p+1)/2;
               }
           }
       }
     }
     else{
         if(p<=n/2){
           if(p==1){
               c=0;
           }
           else{
               if(p%2==0){
                   c=p/2;
               }
               else{
                   c=(p-1)/2;
               }
           }
         }
         else{
             if(p==n||p==n-1){
                 c=0;
             }
             else{
                 if(p%2==0){
                     c=(n-p-1)/2;
                 }
                 else{
                     c=(n-p)/2;
                 }
             }
         }
     }
     return c;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char* p_endptr;
    char* p_str = readline();
    int p = strtol(p_str, &p_endptr, 10);

    if (p_endptr == p_str || *p_endptr != '\0') { exit(EXIT_FAILURE); }

    int result = pageCount(n, p);

    fprintf(fptr, "%d\n", result);

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
