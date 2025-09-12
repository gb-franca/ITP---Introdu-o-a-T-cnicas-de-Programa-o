# Tópico 04: Arranjos - Vetores (Arrays Unidimensionais) em C

Esta pasta contém as soluções para os problemas da seção "Iniciante" do Beecrowd que envolvem **vetores (arrays)**, correspondendo ao quarto tópico da disciplina de **Introdução à Técnica de Programação (ITP)**.

💡 Conceitos Abordados
---

Neste tópico, o foco foi em **armazenar e manipular coleções de dados de um mesmo tipo** em uma sequência contígua de memória. Os vetores são estruturas de dados fundamentais que permitem organizar informações de forma linear e acessá-las de maneira eficiente.

### 1. Declaração e Inicialização

Estrutura básica para criar um vetor. Um vetor em C possui um **tamanho fixo** definido em sua criação.
* **Declaração**: Define o tipo dos elementos, o nome do vetor e sua capacidade.
* **Inicialização**: Atribui valores iniciais aos elementos no momento da declaração. Se menos valores forem fornecidos, o restante é preenchido com zero.

### 2. Acesso aos Elementos (Indexação)

Para ler ou modificar um valor, utiliza-se um **índice** que representa a posição do elemento.
* **Índice Baseado em Zero**: A contagem das posições começa em `0`. O primeiro elemento está no índice `0`, o segundo no `1`, e o último no índice `tamanho - 1`.
* **Acesso Direto**: O acesso a qualquer elemento é feito em tempo constante usando a notação de colchetes `[]`.

### 3. Percorrendo Vetores com Laços

A forma mais comum de interagir com todos os elementos de um vetor é usando estruturas de repetição, especialmente o laço `for`.
* O contador do laço `for` (geralmente `i`) é usado como o índice para acessar cada posição do vetor sequencialmente.

🧩 Modelos básicos
---

#### Declaração e Inicialização
```c
// Declara um vetor de 5 inteiros (contém lixo de memória)
int vetor[5];

// Declara e inicializa um vetor com 4 elementos
// O compilador define o tamanho automaticamente
double notas[] = {7.5, 8.0, 9.2, 6.8};

// Inicializa um vetor de 10 posições com todos os elementos zerados
int zerado[10] = {0};
```
### Acesso e Modificação
```c
// Atribui o valor 99 à terceira posição (índice 2)
vetor[2] = 99;

// Acessa o primeiro elemento do vetor 'notas' e o armazena em uma variável
double primeira_nota = notas[0]; // primeira_nota será 7.5
```
### Percorrendo com for
```c
// Imprime todos os elementos do vetor 'notas'
for (int i = 0; i < 4; i++) {
    // A variável 'i' é usada como índice para acessar cada posição
    printf("Nota %d: %.1f\n", i + 1, notas[i]);
}
```
### 🧠 Dicas rápidas
---
* **Cuidado com Índices Fora do Limite (Out-of-Bounds):** Tentar acessar uma posição que não existe (ex: `` `vetor[5]` `` em um vetor de 5 posições) é o erro mais comum. Isso causa comportamento indefinido e pode travar seu programa. Lembre-se que o último índice válido é sempre `` `tamanho - 1` ``.
* **Indexação Começa em Zero:** Nunca se esqueça que o primeiro elemento está em `` `vetor[0]` ``.
* **Tamanho Fixo:** Diferente de outras linguagens, o tamanho de um vetor em C não pode ser alterado após sua declaração.
* **Strings são Vetores de `` `char` ``:** Em C, uma string é simplesmente um vetor de caracteres que termina com um caractere especial nulo (`` `'\0'` ``).
* **Passagem para Funções:** Ao passar um vetor para uma função, você está na verdade passando o endereço de memória do seu primeiro elemento. Alterações feitas dentro da função afetam o vetor original.
  
🚀 Compilar e Executar
```bash
gcc nome_do_arquivo.c -o programa
./programa
```

### 🏆 Fonte das questões
---
Todos os problemas foram retirados do **beecrowd**.



