algoritmo "valor do produto"

var
    metodo_pagamento: inteiro
    valor_produto: real
    valor_final: real
    valor_mensal: real

inicio

    escreval("Dê o valor do produto")
    leia(valor_produto)
    escreval("Escolha o metodo de pagamento")
    escreval("1: A vista em dinheiro ou cheque")
    escreval("2: A vista no cartão de credito")
    escreval("3: Em duas vezes, preço normal de etiqueta sem juros")
    escreval("4: Em duas vezes, preço normal de etiqueta mais juros de 10%.")
    leia(metodo_pagamento)

    se(metodo_pagamento = 1)entao 
        valor_final <- valor_produto * 0.9
        escreval("O valor pago será: ", valor_final)
    fimse
    se(metodo_pagamento = 2)entao 
        valor_final <- valor_produto * 0.85
        escreval("O valor pago será: ", valor_final)
    fimse
    se(metodo_pagamento = 3)entao 
        valor_final <- valor_produto 
        valor_mensal <- valor_final / 2
        escreval("O valor pago será: ", valor_final)
        escreval("O valor pago mensal será: ", valor_mensal)
    fimse
    se(metodo_pagamento = 4)entao 
        valor_final <- valor_produto * 1.1
        valor_mensal <- valor_final / 2
        escreval("O valor pago será: ", valor_final)
        escreval("O valor pago mensal será: ", valor_mensal)
    fimse

fimalgoritmo