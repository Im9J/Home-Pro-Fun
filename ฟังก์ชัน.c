#include<stdio.h>

void Hello(char text[]){
    printf("Hello %s",text);
}

int main(){
    char text[1000];
    scanf("%[^\n]",text);
    Hello(text);
}
