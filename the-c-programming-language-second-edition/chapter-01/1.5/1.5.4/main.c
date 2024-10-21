// word counting
#include <stdio.h>

// count lines, words, chars in input

int main() {
    int c, nc, nl, nw;
    
    nc = nl = nw = 0;

    while ((c = getchar()) != EOF) {
        ++nc;

        if (c == '\n') 
            ++nl; 

        if (c == ' ' || c == '\n' || c == '\t')
            ++nw;
    }

    printf("%d %d %d\n", nc, nl, nw);
}