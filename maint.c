#include <stdio.h>
#include "txtfind.h"


int main(){
    char in;
    char s[WORD];
    Getword(s);
    scanf("%c\n",&in);
    if(in=='a'){
        print_lines(s);
    }
    if(in=='b'){
        print_similar_words(s);
    }
    return 0;
}
