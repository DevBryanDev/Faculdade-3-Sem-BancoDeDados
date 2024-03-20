1. Indique verdadeiro ou falso
a) ( F ) O operador & permite-nos obter o endereço de uma variável. Permite
também obter o endereço de um ponteiro.
b) ( F ) Se x é um inteiro e ptr um ponteiro para inteiros e ambos contêm no
seu interior o número 100, então x+1 e ptr+1 apresentarão o número
101.
c) ( F ) O operador * nos permite obter o endereço de uma variável.
d) ( V ) Os ponteiros são variáveis que apontam para endereços na memória


=============================================================================
2. Qual o resultado?
cout << a << b << *ptr;


RESULTADO: 5 << 7 << 5;

=============================================================================
3. Se fizermos ptr = &b, qual o resultado?
cout << a << b << *ptr;

RESULTADO: 5 7 7
a contém o valor 5.
b contém o valor 7.
*ptr acessa o valor apontado por ptr, que é o valor armazenado na variável b, ou seja, 7.
=============================================================================
4. Se agora tivermos *ptr = 20, qual o resultado?

RESULTADO: 5 20 20
a contém o valor 5.
b agora contém o valor 20.
*ptr também é 20, pois agora está apontando para o valor armazenado na variável b, que é 20.

=============================================================================
5. Qual caractere que se coloca na declaração de uma variável para indicar
que ela é um ponteiro? Onde se coloca este caractere?

RESULTADO: Em C++, o asterisco (*) é usado para indicar que uma variável é um ponteiro. O asterisco é colocado antes do nome da variável

=============================================================================
6. O que contém uma variável do tipo ponteiro?

RESULTADO: Uma variável do tipo ponteiro contém um endereço de memória. Esse endereço de memória
aponta para a localização na memória onde um valor específico está armazenado.
