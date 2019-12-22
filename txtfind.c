//
// Created by yanabanana on 20/12/2019.
//
#include <string.h>
#include <stdio.h>
#include "txtfind.h"
#define WORDS_IN_LINE 256
#define WORD 30
#define MAX_LINE 250


int Getline(char s[]){
    int i=0;
    char c;
    scanf("%c",&c);
    while(c!='\n'&&i<WORDS_IN_LINE&&c!='\0'){
        *(s+i)=c;
        i++;
        scanf("%c",&c);
    }
    s[i]='\0';
    return i;
}

int Getword(char w[]){
    int i=0;
    char c;
    scanf("%c",&c);
    while(c!='\n'&&i<WORD&&c!='\0'&& c!='\t'&&c!=' '){
        w[i]=c;
        i++;
        scanf("%c",&c);
    }
    w[i]='\0';
    return i;
}
int substring(char* str1, char* str2){
    char* pos;
    pos=strstr(str1,str2);
    if(pos==NULL){
        return 0;
    }
    else{
        return 1;
    }
}
int similar(char* s, char* t, int n){
    int lenT=strlen(t);
    int lenS=strlen(s);
    if (lenT!=(lenS-n)){
        return 0;
    }
    if (n==0){
        if (strcmp(s,t)==0) {
            return 1;
        }
      else{
          return 0;
      }
    }

    if (strcmp(s,t)==0){
        return 1;
    }
    else {


        int counter = 0, countS = 0, countT = 0;

        while (countS <= lenS && countT <= lenT) {
            if (*(s + countS) == *(t + countT)) {
                countS++;
                countT++;
            } else {
                countS++;
                counter++;
            }

        }
        if (countT - 1 == lenT && lenS - countS + counter < n) {
            return 1;
        } else {
            return 0;
        }

    }


}
void print_lines(char* str){
    char text[WORDS_IN_LINE];
    for(int i=2;i<MAX_LINE; i++){
        Getline(text);
        if(substring(text,str)){
            printf("%s \n",text);
        }
    }

}
void print_similar_words(char* str){
    char simText[WORDS_IN_LINE];
    for(int i=2; i<MAX_LINE;i++){
        Getword(simText);
        if(similar(simText,str, 1)){
            printf("%s\n",simText);
        }
        if(similar(simText,str, 0)){
            printf("%s\n",simText);
        }
    }
}
