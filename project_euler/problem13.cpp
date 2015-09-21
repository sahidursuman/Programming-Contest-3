#include <iostream>
using namespace std;

typedef long long int lli;

lli recur(int *collats, lli n){
    if(n == 1){
        collats[n] = 1;
        return 2;
    }else if(n < 1000000){
        if(collats[n] != 0)
            return collats[n]+1;
        if(n % 2 == 0){
            collats[n] = recur(collats, n / 2);
        }else{
            collats[n] = recur(collats, n * 3 + 1);
        }
    }else{
        if(n % 2 == 0){
            return recur(collats, n / 2) + 1;
        }else{
            return recur(collats, n * 3 + 1) + 1;
        }
    }

    return collats[n] + 1;
}

int main(void){
    int collats[1000000] = {0};
    long int max = 0;
    
    for(long int i = 1;i < 1000000;i++){
        lli tmp = recur(collats, i);
        if(tmp > collats[max])
            max = i;
        cout << i << " ";
    }
    cout << endl;

    cout << max << endl;
}
