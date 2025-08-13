# 📂 Condicionais – ITP (Introdução às Técnicas de Programação)

Pasta com resoluções de questões do **beecrowd** sobre **estruturas condicionais** em C.  
Objetivo: praticar **tomada de decisão** no código e entender como diferentes condições alteram o fluxo do programa.

---

## 🎯 Conceitos Essenciais

- **If / Else** → Escolhe entre dois caminhos possíveis.
- **If / Else If / Else** → Permite testar múltiplas condições em sequência.
- **Switch / Case** → Alternativa para vários `if` quando se compara **um único valor**.
- **Operadores Relacionais** → Comparam valores (`>`, `<`, `==`, `!=`, `>=`, `<=`).
- **Operadores Lógicos** → Combinam condições (tabela abaixo).

---

## 🔍 Operadores Lógicos em C

| Operador | Nome          | Exemplo               | Resultado Verdadeiro se...                          |
|----------|--------------|-----------------------|------------------------------------------------------|
|  &&      | E lógico      |  (a > 0 && b > 0)     | **Ambas** as condições forem verdadeiras             |
|  ||      | OU lógico     |  (a > 0 || b > 0)     | **Pelo menos uma** condição for verdadeira           |
|  !       | NÃO lógico    |  !(a > 0)             | A condição for **falsa**                             |

---

## 🧩 Modelos básicos

### If / Else

if (condicao) {
    // Código se a condição for verdadeira
} else {
    // Código se a condição for falsa
}

### If / Else If / Else

if (condicao1) {
    // Caso 1
} else if (condicao2) {
    // Caso 2
} else {
    // Caso padrão
}

### Switch / Case

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

---

## 🏆 Fonte das questões
Todos os problemas foram retirados do [beecrowd](https://www.beecrowd.com.br/).
