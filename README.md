# 🖥️ TechCheck - Assistente Autônomo de AutoDiagnóstico de Computadores em C

O **TechCheck** é um sistema em linha de comando (CLI) desenvolvido de forma autônoma em **Linguagem C**. Seu objetivo é guiar o usuário ou técnico de TI através de um fluxo interativo de perguntas para diagnosticar possíveis falhas de hardware e software em um computador.

---

## 🎯 Motivação e Aprendizado

Este projeto foi construído para praticar e consolidar conceitos essenciais de programação procedural e lógica de decisão em C:

- **Entrada e Saída Interativa:** Captura e validação de escolhas do usuário via terminal (`printf` e `scanf`).
- **Árvore de Decisão Interativa:** Uso de estruturas condicionais aninhadas (`if` / `else if`) para ramificar diagnósticos com base em respostas anteriores.
- **Resolução de Problemas:** Transformação de um processo real de manutenção de computadores em um algoritmo estruturado.
   
---

## 🌳 Fluxo do Diagnóstico

```text
                  [ Computador liga? ]
                     /            \
                (Sim)              (Não)
                 /                    \
     [ Dá vídeo na tela? ]     [ A causa pode ser ]
        /            \          [ alimentação/tomada ]
    (Sim)            (Não)
     /                  \
[ Problema no SO ]   [ Problema na placa ]
[   ou HD/SSD    ]   [ de vídeo/mãe      ]

---

🛠️ Tecnologias Utilizadas
Linguagem: C (C99 / C11)
Biblioteca Padrão: <stdio.h>
Compilador Recomendado: GCC / Clang / MSVC

🚀 Como Executar
1. Clonar o repositório
bash

git clone https://github.com/SEU_USUARIO/SEU_REPOSITORIO.git
cd SEU_REPOSITORIO

2. Compilar o código
bash
gcc main.c -o techcheck

3. Rodar a aplicação
Linux/macOS: ./techcheck
Windows: techcheck.exe

---

🔮 Futuras Melhorias (Roadmap)
 Adicionar mais perguntas de diagnóstico (ex: barulhos no cooler, bip da placa-mãe).
 Implementar loop de repetição (while) para permitir múltiplos testes.
 Exportar o resultado final do diagnóstico para um arquivo de texto (.txt).

---

👤 Autor
Desenvolvido por Taís Pereira

GitHub: @Taaiis
LinkedIn: https://www.linkedin.com/in/taispereira-dev/
