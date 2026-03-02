// criando um programa em c para ver se uma palavra é um palíndromo ou não (ana, arara, ovo, radar, etc)

#include <stdio.h> // biblioteca para entrada e saída de dados
#include <string.h> // biblioteca para manipulação de strings que é uma sequência de caracteres (texto)    
#include <ctype.h> // biblioteca para manipulação de caracteres

int main ()
{ // não se esqueça da chave 
    char palavra[100]; //  // limite de 99 letras + o caractere nulo 
    int i, j, palindromo = 1; // índices que apontam a letra que estamos usando i (início)/ i++ e j (final)/ j--, palindromo é a variável e 1 é verdadeiro

    printf("Digite uma palavra: ");
    scanf("%s", palavra); // lê a palavra digitada pelo usuário e %s é usado para ler uma string
    
    int tamanho = strlen(palavra); // função strlen() para obter o tamanho da palavra, exemplo: "arara" tem 5 letras

    for (i=0; i < tamanho; i++) { //i=0 pq sempre começa do início da palavra e i++ para ir pra próxima letra
        palavra [i] = tolower(palavra[i]); // tolower aceita tanto minusculas quanto maiúsculas, pra facilitar o entendimento 
    }

    for (i=0, j= tamanho -1; i < j; i++, j--) { // o primeiro loop, o de cima, é para converter a palavra para minúscula, o segundo loop é para comparar as letras da palavra, o primeiro percorre a palavra inteira uma vez  e esse a palavra vindo das pontas ao meio, pra ver se é palíndromo

        if (palavra[i] != palavra[j]) { // o ! serve pra avisar se as letras são diferentes, caso não seja um palíndromo
            palindromo = 0; // se n for políndromo, vira falso

            break; // para o loop, não precisa continuar comparando, até pq é falso
        } // Essa chave fecha o if
    } // Já essa fecha o for

    //agr a gente vê se é palíndromo ou não ;)

    if (palindromo){
        printf("%s É um palindromo, parabéns!. \n", palavra); // o %s imprime a string (palavra) e o \n vai pra outra linha
    }
    else{
        printf("%s Não é um palindromo, meus pêsames. \n", palavra);
    } // <--- FECHEI O ELSE AQUI

    return 0; // cabou!
}
    



