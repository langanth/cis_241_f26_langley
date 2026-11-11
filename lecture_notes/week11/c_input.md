# C - Input

## Reading from stdin
- `scanf(formatstr, memaddr1, memaddr2, ...)`
	- `formatstr` is the same type of format string used for `printf()`
	- Every %d, %f, %s, etc. used in `formatstr` needs a memory address
	- If EOF signal (Ctrl-D) is sent, scan f returns 0 or -1 (depends on implementation)
		- value is in EOF macro in stdio.h
		- check to see if return result equals EOF
- `fgets(char *s, int size, FILE *stream)`
- for stdin, `File *stream` **should be** `stdin`
	- we'll get to other File I/O later
- need to allocate memory yourself
- will only read and store at most n-1 characters
- null character added after last character read (\0)
- will not read beyond newline or EOF
- return `s` if successful, `NULL` if unsuccessful
- `getline(char **lineptr, size_t *n, FILE *stream)`
- Not in C standard - part of POSIX > 2008
- reallocates memory if not enough room to store whole line
- if `*lineptr` is `NULL` and `n=0` -> will allocate memory
- `*lineptr` and `*n` will be updated after
- returns num chars read, or -1 if it errors
## Examples
```C
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int tot;
    int a, b, c;


    // scanf - example of accepting input and outputting
    /*
    scanf("%d %d %d", &a, &b, &c);
    tot = a + b + c;
    printf("you entered: %d %d %d, total = %d\n", a, b, c, tot);
    */



    // scanf - loop
    /*
    int num;
    int sum = 0;
    int ret = EOF + 1;

    while (ret != EOF) {
        printf("current sum = %d\n", sum);
        ret = scanf("%d", &num);
        sum += num;
    }
    */

    // fgets
    /*
    int maxn = 10;
    char *p = (char *) malloc(sizeof(char)*maxn);

    p = fgets(p, maxn, stdin);
    if (p != NULL) {
        printf("you entered %s\n", p);
    }
    free(p);
    */

    


    // getline
    char *s;
    int nread;
    size_t maxn = 10;

    s = (char *) malloc(sizeof(char)*maxn);
    nread = getline(&s, &maxn, stdin);
    printf("you entered %d characters\n", nread);
    printf("you entered %s\n", s);

    free(s);
    return 0;
}
```