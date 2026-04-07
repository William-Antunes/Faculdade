algoritmo "Bhaskara"

var

    a, b, c, delta, x1, x2  : real

inicio
    
    escreval("Dê o valor de a: ")
    leia(a)
    escreval("Dê o valor de b: ")
    leia(b)
    escreval("Dê o valor de c: ")
    leia(c)

    se(a = 0)entao
        escreval("Não é uma equação do segundo grau")
    senao

    delta <- (b * b) - 4 * a * c

        se(delta < 0)entao
            escreval("Não existe raiz real")  
        senao
            delta <- raizq(delta)
            x1 <- (-b + delta) / (2 * a)
            x2 <- (-b - delta) / (2 * a)
            escreval("As raízes são: ", x1, " e ", x2)
        fimse
    fimse
fimalgoritmo