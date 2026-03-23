algoritmo "Calculo da area"


var
    raio, area, perimetro: real


inicio

    escreva("Deu o valor do raio: ")
    leia(raio)
    area <- pi * (raio * raio)
    perimetro <- 2 * pi * raio
    escreva("A area do circulo é ",area, " e o perimetro é ",perimetro)

    
fimalgoritmo