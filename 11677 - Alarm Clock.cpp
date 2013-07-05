#include <cstdio>
#include <cstdlib>

int main(){
    int h1,m1,h2,m2,rh,rm,res;
    int N, K, i;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)!=EOF){
        if(h1==0 && m1==0 && h2==0 && m2==0) break;

        if(h2>=h1){
            rh = h2-h1;
            if(m2>=m1){
                rm=m2-m1;
            }else{
                rh = rh-1;
                rm = (m2+60)-m1;
            }
        }else{
            rh = (h2+24)-h1;
            if(m2>=m1){
                rm=m2-m1;
            }else{
                rh = rh-1;
                rm = (m2+60)-m1;
            }

        }
        res = (rh*60)+rm;
        if(res<0) res = 1440+res;

        printf("%d\n",res);

    }
    return 0;
}
