#include <bits/stdc++.h>

int quociente(int nume, int deno){
  
  if(nume <= deno)
    return 0;
  return 1 + quociente(nume-deno, deno);
}



int main (){
 
 printf("%d", quociente(15,2));

}