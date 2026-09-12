# Tarefa Avaliativa - Cadastro de Alunos

Desafio avaliativo proposto na faculdade: implementar em C um sistema de cadastro de alunos com regras de aprovação por média ponderada.

## Requisitos do desafio

- Cadastrar até 100 alunos, cada um com nome, e-mail (opcional), matrícula, notas A1, A2 e A3.
- Excluir um aluno já cadastrado pela matrícula.
- Listar alunos com nome, e-mail e matrícula.
- Listar alunos com matrícula, nome, notas e média final.
- Calcular a média final com pesos: A1 (20%), A2 (30%) e A3 (50%).
- Listar aprovados (média ≥ 7) e reprovados (média < 7) separadamente.

## Tecnologias

- C (padrão ANSI C, compatível com `stdio.h`/`stdlib.h`)

## Como rodar

```bash
gcc cadastro.c -o cadastro
./cadastro
```

> O programa usa `system("cls")` para limpar a tela, comando específico do Windows. Em Linux/macOS, substitua por `system("clear")` antes de compilar.

## Estrutura

```
cadastro.c              # Solução final entregue
tentativas-falhas/      # Versões intermediárias e tentativas anteriores
```
