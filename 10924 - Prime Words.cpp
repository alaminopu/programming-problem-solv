#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>

bool primecheck(int N){
    int sq;
    sq = sqrt(N);
    for(int i=2; i<=sq; i++)
        if(N%i==0)
            return false;
    return true;
}

int value(char c){
    c = tolower(c);
    //printf("%c ",c);
    switch(c){
        case 'a':
            return 1;
        case 'b':
            return 2;
        case 'c':
            return 3;
        case 'd':
            return 4;
        case 'e':
            return 5;
        case 'f':
            return 6;
        case 'g':
            return 7;
        case 'h':
            return 8;
        case 'i':
            return 9;
        case 'j':
            return 10;
        case 'k':
            return 11;
        case 'l':
            return 12;
        case 'm':
            return 13;
        case 'n':
            return 14;
        case 'o':
            return 15;
        case 'p':
            return 16;
        case 'q':
            return 17;
        case 'r':
            return 18;
        case 's':
            return 19;
        case 't':
            return 20;
        case 'u':
            return 21;
        case 'v':
            return 22;
        case 'w':
            return 23;
        case 'x':
            return 24;
        case 'y':
            return 25;
        case 'z':
            return 26;
        default:
            return 0;
    }
}

int main(){
    char word[25];
    int i,num,len;
    while(scanf("%s",word)!=EOF){
        len = strlen(word);
        num=0;
        for(i=0; i<len; i++){
            num = num+ value(word[i]);
            if(isupper(word[i])){
                num = num + 26;
            }
        }
        //printf("num : %d",num);
        if(primecheck(num)){
            printf("It is a prime word.\n");
        }else{
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
