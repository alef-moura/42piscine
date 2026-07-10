# 42 São Paulo - Piscina

Este repositório contém as listas de exercícios que desenvolvi durante a **Piscina da 42 São Paulo**. 
A Piscina é um processo seletivo e imersivo intenso de 26 dias focado em aprendizado prático, lógica de programação, colaboração e muita resiliência, utilizando as linguagens **Shell (Bash)** e **C**.

## Tecnologias e Ferramentas

* **Linguagens:** Shell (Bash), C
* **Compilador:** `gcc` (com as flags `-Wall -Wextra -Werror`)
* **Estilo de Código:** Norminette (padrão estrito de formatação da 42)
* **Ambiente:** Linux / Unix

---

## Estrutura do Repositório

O repositório está organizado por módulos de listas de exercícios:

### [Shell 00]

Introdução ao ambiente Unix, comandos de terminal, gerenciamento de permissões, criação de links (hard e simbólicos), manipulação de arquivos e uso básico do Git.

### [C 00]

Primeiros passos na linguagem C.
* Manipulação de tipos de dados básicos.
* Criação de funções elementares para exibição de caracteres e números (`ft_putchar`, `ft_print_alphabet`, `ft_print_comb`).
* Lógica de loops e condicionais estruturadas.

### [C 01]

Introdução e aprofundamento em **Ponteiros** e alocação de memória na Stack.
* Compreensão de ponteiros (`ft_ft`, `ft_ultimate_ft`).
* Passagem de parâmetros por referência para manipulação direta de variáveis.
* Operações matemáticas básicas, swap de valores e inversão de arrays.

### [C 02]

Manipulação de strings (`char *`) e manipulação de memória.
* Criação de réplicas de funções da biblioteca padrão (`ft_strcpy`, `ft_strncpy`, `ft_str_is_alpha`, `ft_strlcpy`).
* Validação de conteúdos de strings (alfanuméricos, maiúsculas, minúsculas, caracteres imprimíveis).
* Transformação de cases (maiusculizar e minusculizar textos).

### [C 03]

Concatenação e comparação avançada de strings.
* Recriação de funções clássicas como `ft_strcmp`, `ft_strncmp`, `ft_strcat`, `ft_strncat` e `ft_strstr`.
* Compreensão profunda do comportamento e tratamento de buffers de texto e ponteiros em arrays bidimensionais conceituais.

---

## Norminette

Todos os códigos em C contidos neste repositório foram escritos respeitando as regras estritas da **Norminette da 42**, o que inclui:
* No máximo 25 linhas por função.
* No máximo 4 variáveis declaradas por função.
* Proibição do uso de loops como `for`, apenas `while` é permitido.
* Estruturação rígida de identação e espaçamento.

