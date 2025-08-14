# Tópico 02: Estruturas Condicionais em C

Esta pasta contém as soluções para os problemas da seção **"Iniciante"** do Beecrowd que envolvem **estruturas condicionais**, correspondendo ao segundo tópico da disciplina de **Introdução à Técnica de Programação (ITP)**.

## 💡 Conceitos Abordados

Neste tópico, o foco foi em **tomada de decisão** dentro de programas escritos em C, permitindo que diferentes blocos de código sejam executados dependendo de condições específicas.

### 1. If / Else e If / Else If / Else
Estruturas utilizadas para executar diferentes ações de acordo com condições lógicas:
- **`if`**: Executa um bloco de código se a condição for verdadeira.
- **`else`**: Executa um bloco de código se a condição do `if` for falsa.
- **`else if`**: Permite testar múltiplas condições em sequência.

### 2. Switch / Case
Estrutura usada quando é necessário comparar **uma única variável** ou expressão com múltiplos valores possíveis:
- **`case`**: Define um valor específico para executar um bloco de código.
- **`break`**: Interrompe a execução do `switch` para evitar que outros casos sejam executados.
- **`default`**: Executa se nenhum caso definido corresponder.

### 3. Operadores Relacionais
Usados para comparar valores, retornando verdadeiro (**1**) ou falso (**0**):
- `>` : maior que  
- `<` : menor que  
- `==` : igual a  
- `!=` : diferente de  
- `>=` : maior ou igual a  
- `<=` : menor ou igual a  

### 4. Operadores Lógicos
Permitem combinar ou modificar condições:
- **`&&` (E lógico)**: Verdadeiro se todas as condições forem verdadeiras.  
- **`||` (OU lógico)**: Verdadeiro se pelo menos uma condição for verdadeira.  
- **`!` (NÃO lógico)**: Inverte o valor lógico da condição.
---

## 🧩 Modelos básicos

### If / Else
```c
if (condicao) {
    // Código se a condição for verdadeira
} else {
    // Código se a condição for falsa
}
```
### If / Else If / Else
```c
if (condicao1) {
    // Caso 1
} else if (condicao2) {
    // Caso 2
} else {
    // Caso padrão
}
```
### Switch / Case
```c
switch (variavel) {
    case 1:
        // Código para caso 1
        break;
    case 2:
        // Código para caso 2
        break;
    default:
        // Código para qualquer outro valor
}
```
---

## 🧠 Dicas rápidas
- Use **parênteses** para deixar as condições mais claras e evitar confusão de precedência.
- Teste primeiro as **condições mais específicas** e depois as mais gerais.
- Sempre pense nos **casos de borda** (valores mínimos, máximos e intermediários).
- No `switch`, não esqueça do `break` para evitar execução indesejada.

---

## 🚀 Compilar e Executar
```bash
gcc nome_do_arquivo.c -o programa
./programa
```
---

## 🏆 Fonte das questões
Todos os problemas foram retirados do [beecrowd](https://www.beecrowd.com.br/).
