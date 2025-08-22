# Tópico 03: Estruturas de Repetição (Laços) em C

Esta pasta contém as soluções para os problemas da seção **"Iniciante"** do Beecrowd que envolvem **estruturas de repetição**, correspondendo ao terceiro tópico da disciplina de **Introdução à Técnica de Programação (ITP)**.

## 💡 Conceitos Abordados

Neste tópico, o foco foi em **executar blocos de código repetidamente**, permitindo que programas processem séries de dados, realizem contagens ou executem tarefas até que uma determinada condição seja atendida.

### 1. Laço `for`
Ideal para repetições onde o **número de iterações é conhecido** previamente. A estrutura é composta por três partes:
- **Inicialização**: Executada uma única vez no início para declarar e/ou inicializar a variável de controle.
- **Condição**: Verificada antes de cada iteração; o laço continua enquanto for verdadeira.
- **Incremento/Decremento**: Executado ao final de cada iteração para atualizar a variável de controle.

### 2. Laço `while`
Utilizado quando o número de repetições é **indeterminado** e depende de uma condição que pode mudar durante a execução do laço.
- O bloco de código é executado **enquanto a condição for verdadeira**.
- A condição é testada **antes** de cada iteração. Se for falsa na primeira verificação, o laço pode nunca ser executado.

### 3. Laço `do-while`
Semelhante ao `while`, mas com uma diferença fundamental: a condição é verificada **após** a execução do bloco de código.
- Isso garante que o bloco de código seja executado **pelo menos uma vez**, independentemente da condição.

### 4. Controle de Laços
Comandos que alteram o fluxo de execução de um laço:
- **`break`**: Interrompe imediatamente a execução do laço mais interno.
- **`continue`**: Pula para a próxima iteração do laço, ignorando o restante do código no bloco atual.
---

## 🧩 Modelos básicos

### Laço `for`
```c
// Executa o bloco de 0 a 9 (10 vezes)
for (int i = 0; i < 10; i++) {
    // Código a ser repetido
}
```
### Laço `while`
```c
// Executa enquanto a condição for verdadeira
while (condicao) {
    // Código a ser repetido
    // É essencial atualizar a variável da condição aqui dentro
}
```
### Laço `do-while`
```c
// Executa o bloco pelo menos uma vez
do {
    // Código a ser repetido
} while (condicao);
```

---

## 🧠 Dicas rápidas
- **Cuidado com loops infinitos**: Garanta que a condição de parada do seu `while` ou `do-while` será alcançada em algum momento.
- **Escolha o laço certo**: Use `for` para contagens definidas, `while` para condições genéricas e `do-while` quando precisar garantir a primeira execução.
- **Contadores e acumuladores**: São variáveis frequentemente usadas com laços. Lembre-se de inicializá-las corretamente antes do início do laço.
- **O `for` é flexível**: você pode inicializar múltiplas variáveis, ter condições complexas e múltiplos incrementos, tudo separado por vírgulas.

---

## 🚀 Compilar e Executar
```bash
gcc nome_do_arquivo.c -o programa
./programa
```
---

## 🏆 Fonte das questões
Todos os problemas foram retirados do [beecrowd](https://www.beecrowd.com.br/).
