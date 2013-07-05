#include <cstdio>

struct birth{
    char name[20];
    int day;
    int month;
    int year;
    int maxx;
}person[110];

int main(){
    int cas, maxi, mxin,mini,mnin;
    scanf("%d",&cas);
    for(int i=0; i<cas; i++){
        scanf("%s %d %d %d",person[i].name,&person[i].day,&person[i].month,&person[i].year);
        person[i].maxx = person[i].year*1000 + person[i].month*100 + person[i].day;
    }

    //finding maxi
    maxi=-1;
    mini = 99999999;
    for(int i=0; i<cas; i++){
        if(person[i].maxx>maxi){
            mxin=i;
            maxi=person[i].maxx;
        }

        if(person[i].maxx<mini){
            mnin=i;
            mini = person[i].maxx;
        }
    }

    printf("%s\n",person[mxin].name);
    printf("%s\n",person[mnin].name);

    return 0;
}
