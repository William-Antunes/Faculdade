algoritmo "Exercicio 1"

var 
salario, novo_salario : inteiro
aumento, imposto : real
  

inicio
escreva("Digite o salário do funcionário: ")
leia(salario)

aumento <- salario * 0.05
imposto <- salario * 0.07
novo_salario <- salario + aumento - imposto

escreva("O novo salário do funcionário é: ", novo_salario)

fimalgoritmo