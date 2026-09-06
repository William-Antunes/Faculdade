#include <bits/stdc++.h>

using namespace std;

int exp(int num, int expo){
    if(expo == 0)
        return 1;
    else if(expo == 1)
        return num;

    return num * exp(num, expo-1);

}


int main(){

    cout << exp(2,5);
}