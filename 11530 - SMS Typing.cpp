#include <cstdio>

int value(char ch){
    if(ch=='a'|| ch=='d'|| ch=='g'||
       ch=='j'|| ch=='m'|| ch=='p'||
       ch=='t'|| ch=='w'|| ch==' '){
           return 1;
    }else if(ch=='b'|| ch=='e'|| ch=='h'||
       ch=='k'|| ch=='n'|| ch=='q'||
       ch=='u'|| ch=='x'){
           return 2;
    }else if(ch=='c'|| ch=='f'|| ch=='i'||
       ch=='l'|| ch=='o'|| ch=='r'||
       ch=='v'|| ch=='y'){
           return 3;
    }else if(ch=='s'|| ch=='z'){
           return 4;
    }else{
        return 0;
    }
}

int main(){
    int cas,casno=0;
    char c;
    scanf("%d",&cas);
    getchar();
    while(cas--){
        int sum=0;
        while((c=getchar())!='\n'){
            sum = sum+ value(c);
        }
        printf("Case #%d: %d\n",++casno,sum);
    }
    return 0;
}
