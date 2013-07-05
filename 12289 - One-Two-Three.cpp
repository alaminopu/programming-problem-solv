#include <cstdio>
#include <cstring>


int main(){
    int cases,len;
    char num[10];
    scanf("%d",&cases);
    while(cases--){
        scanf("%s",num);
        len = strlen(num);
        if(len==3){
            if((num[0]=='o' && num[1]=='n') || (num[0]=='o' && num[2]=='e')||(num[2]=='e' && num[1]=='n')) printf("1\n");
            else if((num[0]=='t' && num[1]=='w') || (num[0]=='t' && num[2]=='o')||(num[2]=='o' && num[1]=='w')) printf("2\n");
            else if((num[0]=='t' && num[1]=='e') || (num[0]=='t' && num[2]=='n')||(num[2]=='n' && num[1]=='e')) printf("10\n");
            else if((num[0]=='s' && num[1]=='i') || (num[0]=='s' && num[2]=='x')||(num[2]=='x' && num[1]=='i')) printf("6\n");
        }else if(len==4){
            if((num[0]=='f' && num[1]=='o') || (num[0]=='f' && num[2]=='u')||(num[2]=='u' && num[1]=='o')) printf("4\n");
            else if((num[0]=='f' && num[1]=='i') || (num[0]=='f' && num[2]=='v')||(num[2]=='v' && num[1]=='i')) printf("5\n");
            else if((num[0]=='n' && num[1]=='i') || (num[0]=='n' && num[2]=='n')||(num[2]=='n' && num[1]=='i')) printf("9\n");

        }else if(len==5){
            if((num[0]=='t' && num[1]=='h') || (num[0]=='t' && num[2]=='r')||(num[2]=='r' && num[1]=='h')) printf("3\n");
            else if((num[0]=='s' && num[1]=='e') || (num[0]=='s' && num[2]=='v')||(num[2]=='v' && num[1]=='e')) printf("7\n");
            else if((num[0]=='e' && num[1]=='i') || (num[0]=='e' && num[2]=='g')||(num[2]=='g' && num[1]=='i')) printf("8\n");
        }
    }
    return 0;
}
