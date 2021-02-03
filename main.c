#include <stdio.h>

char upper(char c){
    if('a' <= c && c <= 'z'){
        c = c - ('a' - 'A');
    }
	
    return c;
}

void strUpper(char *str){
    int i = 0;
	
    while(str[i] != '\0'){
        str[i] = upper(str[i]);
        i++;
    }
}

void start() {
    puts("HELLO PRESIDENT!");
}

int input(char buf[]) {
    int result = scanf("%134[^\n]%*[^\n]", buf);

    scanf("%*c");

    return result;
}

int main(void) {
    char tweet[141];

    start();

    while (1) {
        char buf[135];

        if(input(buf) != 1) continue;
        
        snprintf(tweet, 141, "%s%s", buf, " VOTE!");

        strUpper(tweet);
        puts(tweet);
    }
    
    return 0;
}