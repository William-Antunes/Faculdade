#include <bits/stdc++.h>

using namespace std;

int mdc(int num1, int num2){
    if(num2 <= 0)
        return num1;
    return mdc(num2, num1%num2);

}


int main(){
    cout << mdc(60, 15);

}