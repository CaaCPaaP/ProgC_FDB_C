# 📊 Programação C — Análise de Algoritmos | Faculdade Dom Bosco

Repositório com exercícios e trabalhos desenvolvidos na disciplina de **Programação C** do curso de Analise e Desenvolvimento de sistemas da **Faculdade Dom Bosco (FDB)**, com foco em **análise de complexidade de algoritmos** e **medição de desempenho**.

---

## 🗂️ Arquivos

| Arquivo | Descrição |
|---|---|
| `Trabalho01_Melhor_Caso.c` | Bubble Sort no **melhor caso** — vetor já ordenado em ordem crescente |
| `Trabalho01_Caso_Medio.c` | Bubble Sort no **caso médio** — vetor parcialmente ordenado |
| `Trabalho01_Pior_Caso.c` | Bubble Sort no **pior caso** — vetor em ordem decrescente |
| `Teste_Clock.c` | Teste isolado da função `clock()` para medição de tempo |
| `calc_estudo_prod.c` | Cálculos auxiliares de estudo para análise de produtividade do algoritmo |

---

## 📚 Contexto do Trabalho 01

O trabalho consiste na implementação do algoritmo **Bubble Sort** e na análise do seu desempenho nos três cenários clássicos de complexidade:

| Cenário | Descrição | Complexidade |
|---|---|---|
| Melhor caso | Vetor já ordenado em ordem crescente | O(n) |
| Caso médio | Vetor aleatório | O(n²) |
| Pior caso | Vetor em ordem decrescente | O(n²) |

A medição de tempo é feita com a função `clock()` da biblioteca `<time.h>`, calculando o tempo total consumido pela CPU durante a execução do algoritmo.

---

## 🛠️ Como compilar e executar

Você precisa do **GCC** instalado.

```bash
# Compilar
gcc nome_do_arquivo.c -o saida

# Executar (Linux/macOS)
./saida

# Executar (Windows)
saida.exe
```

**Exemplo — rodar o pior caso:**
```bash
gcc Trabalho01_Pior_Caso.c -o pior_caso
./pior_caso
```

---

## 🧑‍💻 Autores

**Cauã Pedroso** & **Lucas Fernandes**
Disciplina: Programação C · Faculdade Dom Bosco · 2024

[![LinkedIn](https://img.shields.io/badge/LinkedIn-cauã--pedroso--ti-blue?logo=linkedin)](https://www.linkedin.com/in/cauã-pedroso-ti/)
[![GitHub](https://img.shields.io/badge/GitHub-CaaCPaaP-black?logo=github)](https://github.com/CaaCPaaP)

---

> 📌 Repositório acadêmico — Faculdade Dom Bosco · Disciplina: Programação C · 2024
