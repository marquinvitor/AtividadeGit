#include <stdio.h> // Essa biblioteca é necessária para usar a função printf


// O código em C começa a ser executado a partir da função main
int main() {

    // Quando você quiser dizer que a informação é um texto, você deve colocar entre aspas duplas
    // Por exemplo: "Siriguela"

    // Uma função para imprimir mensagens na tela é a puts, ela pula linha automaticamente
    puts("Seja Bem vindo"); //TODO: Coloque para imprimir "Seja Bem vindo" na tela usando o puts

    // A função printf imprime uma mensagem na tela, mas ela não pula linha automaticamente
    // Para pular linha, é necessário usar o caractere especial \n
    // Por exemplo: printf("Oi mundo!\n");
    puts("Oi mundo!"); //TODO: Imprima "Oi mundo!" na tela quebrando a linha
    puts("tchau tchau");
    return 0; // O return 0 informa que o código foi executado com sucesso.
}