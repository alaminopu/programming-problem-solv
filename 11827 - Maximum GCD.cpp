#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int GCD(int x, int y){
    while(y>0) {
		x=x%y;
		x=x^y; //XOR
		y=y^x;
		x=x^y;
	}
	return x;
}


int main(){
    int cas;
    char line[1000];
    scanf("%d",&cas);
    getchar();
    while(cas--){
        gets(line);
        stringstream ss( line );
        int num; vector<int> v;
        while(ss>>num){
            v.push_back(num);
        }
        int sz = v.size();
        int i, j, op, max=0, gcd;
        for(i=0; i<sz-1; i++){
            op = v[i];
            for(j=i+1; j<sz; j++){
                gcd = GCD(op,v[j]);
                if(gcd>max){
                    max = gcd;
                }
            }
        }

        printf("%d\n",max);

    }
    return 0;
}
