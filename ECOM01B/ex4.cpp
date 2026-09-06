#include <bits/stdc++.h>

using namespace std;

int lucas(int num){
    if(num == 1)
        return 1;
    if(num == 2)
        return 3;

    

    return lucas(num-1) + lucas(num-2);
}

int main(){
    cout << lucas(10);
    return 0;
}