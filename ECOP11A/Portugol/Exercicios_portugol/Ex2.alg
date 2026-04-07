algoritmo "Exercicio 2"

var
numero : real
numero_quadrado : real
numero_cubo : real
metade : real
sucessor : real


inicio
    escreva("Digite um número: ")
    leia(numero)
    numero_quadrado <- numero * numero
    numero_cubo <- numero * numero * numero
    metade <- numero / 2
    sucessor <- numero + 1
    escreval("O numero digitado é : ", numero)
    escreval("O quadrado do número é : ", numero_quadrado)
    escreval("O cubo do número é : ", numero_cubo)
    escreval("A metade do número é : ", metade)
    escreval("O sucessor do número é : ", sucessor)

fimalgoritmo