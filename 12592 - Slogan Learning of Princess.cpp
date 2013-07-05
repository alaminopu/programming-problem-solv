#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

struct slogan{
    string firstline;
    string secondline;
};

int main(){
    int N,Q,i;
    string searchit[102];

    //freopen("input.txt","r",stdin);
    scanf("%d",&N);
    getchar();
    slogan names[N];
    i=0;
    while(i<N){
            getline(cin,names[i].firstline);
            getline(cin,names[i].secondline);
            i++;
    }
    scanf("%d",&Q);
    getchar();
    int k=0;
    while(k<Q){
            getline(cin, searchit[k]);
            for(int i=0; i<N; i++){
                if(searchit[k]==names[i].firstline){
                    cout<<names[i].secondline<<endl;
                    break;
                }
            }
            k++;
    }

    return 0;
}
