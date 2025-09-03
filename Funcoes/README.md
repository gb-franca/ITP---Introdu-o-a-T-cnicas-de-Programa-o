# Tópico 04: Funções em C

Esta pasta contém as soluções para os problemas da seção **"Iniciante"** do Beecrowd que envolvem a criação e o uso de **funções**, correspondendo ao quarto tópico da disciplina de **Introdução à Técnica de Programação (ITP)**.

## 💡 Conceitos Abordados

Neste tópico, o foco foi em **modularizar o código**, quebrando problemas complexos em partes menores, reutilizáveis e organizadas. As funções são os blocos de construção fundamentais que permitem escrever um código mais limpo, legível e de fácil manutenção.

### 1. Declaração (Protótipo)
É a "assinatura" da função. Informa ao compilador o nome da função, o tipo de valor que ela retorna e os tipos dos parâmetros que ela espera receber. Geralmente, é colocada no início do arquivo.

### 2. Definição
É a implementação real da função, onde o bloco de código que executa a tarefa é escrito. Consiste no cabeçalho (semelhante ao protótipo) e no corpo da função (o código entre chaves `{}`).

### 3. Chamada (Invocação)
É o ato de executar uma função. A partir da `main` ou de outra função, usamos o nome da função seguido de parênteses com os argumentos (valores) a serem passados.

### 4. Parâmetros e Argumentos
- **Parâmetros**: São as variáveis listadas na definição da função, que recebem os valores quando a função é chamada.
- **Argumentos**: São os valores reais passados para a função durante a chamada.

### 5. Retorno de Valores
Uma função pode enviar um valor de volta para quem a chamou usando a palavra-chave `return`. Se uma função não retorna nenhum valor, seu tipo de retorno é `void`.

---

## 🧩 Modelos básicos

### Função com Retorno
```c
// 1. Protótipo da função
int somar(int a, int b);

int main() {
    // 3. Chamada da função com os argumentos 5 e 10
    int resultado = somar(5, 10);
    printf("O resultado é: %d\n", resultado); // Saída: O resultado é: 15
    return 0;
}

// 2. Definição da função
int somar(int a, int b) {
    // 5. Retorno do valor calculado
    return a + b;
}
```

### Função void (sem retorno)

```c
#include <stdio.h>

// Protótipo
void saudacao(void);

int main() {
    // Chamada
    saudacao();
    return 0;
}

// Definição
void saudacao(void) {
    printf("Olá, mundo!\n");
}
```
## 🧠 Dicas rápidas
- **Responsabilidade Única**: Uma boa função faz uma, e apenas uma, tarefa bem-feita. Evite funções que tentam fazer de tudo um pouco.
- **Nomes Descritivos**: Dê nomes que descrevam claramente o que a função faz (ex: `calcularMedia`, `imprimirRelatorio`).
- **Escopo de Variáveis**: Variáveis declaradas dentro de uma função (`locais`) só existem nela. Evite o uso excessivo de variáveis globais.
- **Passagem por Valor**: Por padrão, o C passa **cópias** dos argumentos para as funções. Alterar um parâmetro dentro da função não altera a variável original. Para modificar a variável original, é preciso usar **ponteiros**.
- **Declare Antes de Usar**: Sempre coloque o protótipo da função antes de sua primeira chamada, ou defina a função inteira antes da `main`.

---

## 🚀 Compilar e Executar
```bash
# Para compilar um arquivo que usa a biblioteca de matemática (math.h), adicione -lm
gcc nome_do_arquivo.c -o programa -lm
./programa
```


