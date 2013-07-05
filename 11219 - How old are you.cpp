#include <cstdio>

int main(){
    int bday,bmonth,byear, cday,cmonth,cyear;
    int aday, amonth, ayear;
    int cas,casno=0;
    scanf("%d",&cas);
    while(cas--){
        scanf("%d/%d/%d",&cday,&cmonth,&cyear);
        scanf("%d/%d/%d",&bday,&bmonth,&byear);

        if(cday>=bday){
            aday=cday-bday;
        }else{
            cday = cday+30;
            bmonth= bmonth+1;
            aday = cday-bday;
        }

        if(cmonth>=bmonth){
            amonth = cmonth - bmonth;
        }else{
            cmonth = cmonth + 12;
            byear = byear+1;
            amonth = cmonth -bmonth;
        }

        ayear = cyear-byear;

        if(ayear<0 || amonth<0 || aday<0){
            printf("Case #%d: Invalid birth date\n",++casno);
        }else if(ayear>130){
            printf("Case #%d: Check birth date\n",++casno);
        }else{
            printf("Case #%d: %d\n",++casno,ayear);
        }

    }

    return 0;
}
