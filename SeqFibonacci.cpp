// Sequencia Fibonnaci - Siemens Interview
// Angie Daniela Vásquez Calderón
#include <stdio.h>

// Declaração inicial Função que passa um parâmetro por valor, no caso é um número inteiro n
// n corresponde ao termo que o usuário quer que seja mostrado da sequencia.
// No caso do exercício, em que se deseja mostrar o vigésimo termo, n=20

long int seqfibonacci(int n);


int main()
{
// Lembrando que: Sequencia fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55..
// Declaração de variáveis 
    int n;                                                                     // Inteiro que indica o termo da posição a ser calculado
    printf ("Escolha a posicao: ");                                            // O termo é inserido pelo usuário
    scanf("%d", &n);                                                           // Leitura do termo n pelo programa    
    printf("Posicao %d da sequencia de fibonnaci: %d", n, seqfibonacci(n));    // É mostrada a posição da sequencia usando a funcao seqfibonacci 
}

// Função seqfibonnaci com o processo usado para o cálculo 

long int seqfibonacci(int n)
{
    // Declaração inicial de variáveis
	
    int cont;
    long int x = 0, z = 1;
	
    // São usadas as variáveis x e z, para representar os dois primeiros números da sequencia 
    // e facilitar o cálculo do termo indicado
    
    // Cálculo usado no caso que a posição indicada pelo usuário caso essa posição seja par
    if(n % 2 == 0)
    {
        for(cont = 2; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
        return z;
    }
    else
    {
        // Cálculo usado no caso que a posição indicada pelo usuário caso essa posição seja ímpar
        for(cont = 1; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
        return x;
    }
}