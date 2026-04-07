algoritmo "Numeros trocados"

var
   A : inteiro
   B : inteiro   
   C : inteiro 

inicio

   escreva("Digite um valor:")
   leia(A)
   escreva("Digite um outro valor")
   leia(B)

   C <- A 
   A <- B
   B <- C
 escreval("Os valores de A e B trocados são: ", A, "e", B)
 
fimalgoritmo