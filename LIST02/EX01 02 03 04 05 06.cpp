1. Indique verdadeiro ou falso
a) ( F ) O operador & permite-nos obter o endere�o de uma vari�vel. Permite
tamb�m obter o endere�o de um ponteiro.
b) ( F ) Se x � um inteiro e ptr um ponteiro para inteiros e ambos cont�m no
seu interior o n�mero 100, ent�o x+1 e ptr+1 apresentar�o o n�mero
101.
c) ( F ) O operador * nos permite obter o endere�o de uma vari�vel.
d) ( V ) Os ponteiros s�o vari�veis que apontam para endere�os na mem�ria


=============================================================================
2. Qual o resultado?
cout << a << b << *ptr;


RESULTADO: 5 << 7 << 5;

=============================================================================
3. Se fizermos ptr = &b, qual o resultado?
cout << a << b << *ptr;

RESULTADO: 5 7 7
a cont�m o valor 5.
b cont�m o valor 7.
*ptr acessa o valor apontado por ptr, que � o valor armazenado na vari�vel b, ou seja, 7.
=============================================================================
4. Se agora tivermos *ptr = 20, qual o resultado?

RESULTADO: 5 20 20
a cont�m o valor 5.
b agora cont�m o valor 20.
*ptr tamb�m � 20, pois agora est� apontando para o valor armazenado na vari�vel b, que � 20.

=============================================================================
5. Qual caractere que se coloca na declara��o de uma vari�vel para indicar
que ela � um ponteiro? Onde se coloca este caractere?

RESULTADO: Em C++, o asterisco (*) � usado para indicar que uma vari�vel � um ponteiro. O asterisco � colocado antes do nome da vari�vel

=============================================================================
6. O que cont�m uma vari�vel do tipo ponteiro?

RESULTADO: Uma vari�vel do tipo ponteiro cont�m um endere�o de mem�ria. Esse endere�o de mem�ria
aponta para a localiza��o na mem�ria onde um valor espec�fico est� armazenado.
