# ATIVIDADES-P2 ALGORITMO
Nomes dos integrantes: ISABEL SILVA DE ARAUJO

Atividade 1: Máquina Virtual Baseada em Pilha — Etapa 1

Objetivo: Implementar um interpretador interativo (REPL – Read-Eval-Print Loop) em C, para uma máquina virtual que utiliza estrutura de pilha. Esse tipo de arquitetura é comum em interpretadores e linguagens como Python e Java.

Instruções de compilação e uso:
  Para compilar o programa, utilizamos o comando gcc main.c -o vm no terminal. Esse comando gera um executável chamado vm. Após a compilação, o programa pode ser executado com ./vm. Ao rodar, o sistema entra em modo interativo, onde o usuário pode digitar comandos como       push, pop, print, let, push_var, entre outros, interagindo com a máquina virtual por meio do terminal. 


Atividade 2: Máquina Virtual Baseada em Pilha — Etapa 2

Instruções para compilar e executar:
  Para compilar o programa, utilizamos o comando gcc main.c -o vm no terminal. Após a compilação, o programa pode ser executado com ./vm. O sistema entra em modo interativo, permitindo digitar os comandos da máquina virtual diretamente no terminal.

Descrição da nova funcionalidade (variáveis):
  Nesta etapa, foi adicionada ao programa a funcionalidade de variáveis, utilizando uma lista encadeada para armazenar nomes e valores. Agora, é possível criar variáveis com o comando let, empilhar o valor de uma variável com push_var e atualizar o valor de uma variável com   set_var, usando o valor que está no topo da pilha. Isso permite realizar operações entre variáveis e guardar resultados, tornando a máquina virtual mais completa e interativa.


Orientação: https://profsergiocosta.notion.site/Laborat-rio-Um-REPL-para-uma-m-quina-baseada-em-pilha-31614c015b68430c864077eb25d214b2  
