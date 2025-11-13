# 💻 Portfólio de Algoritmos e Programação em C

![Linguagem C](https://img.shields.io/badge/Linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white) ![Status](https://img.shields.io/badge/Status-Concluído-brightgreen?style=for-the-badge)

## 📝 Sobre o Repositório

Este repositório reúne uma coleção de exercícios práticos desenvolvidos durante a disciplina de **Algoritmos e Estruturas de Dados**. Os códigos variam desde a lógica de programação inicial até o uso de conceitos avançados como alocação dinâmica, manipulação de arquivos e Tipos Abstratos de Dados (TADs).

## 📂 Estrutura dos Exercícios

Os arquivos estão organizados em três módulos principais de aprendizado:

### 1. Introdução e Lógica de Programação
Exercícios focados em condicionais, laços de repetição e operações matemáticas básicas.

| Arquivo | Descrição |
| :--- | :--- |
| `pt1.c` | Lê três números e retorna o **maior** entre eles. |
| `pt2.c` | Cálculo de **imposto de renda** com faixas salariais (isento, 10%, 20%). |
| `pt3.c` | Exibe todos os números **pares** de 0 a 1000 usando laço `for`. |
| `pt4.c` | Lê `n` números e calcula a **média aritmética** acumulada. |
| `pt5.c` | Calcula o **fatorial** de um número inteiro positivo. |
| `pt8.c` | Classifica um número como **positivo, negativo ou zero**. |

### 2. Vetores, Ponteiros e Busca
Introdução ao gerenciamento de memória e algoritmos simples.

| Arquivo | Descrição |
| :--- | :--- |
| `pt6.c` | Preenchimento e **troca de valores** entre dois vetores inteiros. |
| `pt7.c` | Uso de **ponteiros** para criar uma função `swap` (troca de variáveis). |
| `busca.c` | [cite_start]Implementação de **Busca Sequencial** para localizar um aluno por matrícula[cite: 2]. |

### 3. Structs e Tipos Abstratos de Dados (TAD)
Exercícios avançados envolvendo a criação de tipos personalizados e alocação dinâmica de memória.

| Arquivo | Descrição |
| :--- | :--- |
| `pt9.c` | **Controle de Estoque:** Struct básico para cadastro de produtos, cálculo de lucro e verificação de estoque mínimo. |
| `quest1.c` | **Calculadora de Frações:** TAD que realiza soma, subtração, multiplicação, divisão e simplificação de frações. |
| `quest2.c` | **Matrizes Dinâmicas:** Sistema robusto usando `malloc`/`free` para criar, somar, multiplicar e transpor matrizes de qualquer tamanho. |
| `quest3.c` | **Agenda Telefônica:** Aplicação interativa (menu) para adicionar, remover e buscar contatos. |
| `quest4.c` | **Geometria:** Struct simples para representar um retângulo e funções para calcular área e perímetro. |

## 🚀 Como Compilar e Executar

Para rodar qualquer um dos códigos, você precisará de um compilador C (como GCC ou MinGW).

**Passo a passo no terminal:**

1. **Compilar:**
   Substitua `nome_do_arquivo.c` pelo exercício que deseja testar.
   ```bash
   gcc quest3.c -o agenda



🧠 **Conceitos Praticados**


Entrada/Saída: printf, scanf, fgets.

Estruturas de Controle: if/else, switch, for, while.

Modularização: Criação de funções auxiliares e passagem de parâmetros.

Ponteiros: Referenciação (&) e desreferenciação (*).

Alocação Dinâmica: malloc, free (Gerenciamento de Heap).

Structs: Encapsulamento de dados heterogêneos.
