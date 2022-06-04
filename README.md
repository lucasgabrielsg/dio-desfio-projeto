# Desafio de Projeto - Santander Bootcamp Fullstack Developer, DIO

**O Desefio de Projeto tem por objetivo reforçar os meus conhecimentos adquiridos durante o curso de Introdução ao Git e ao Github, presente no Santander Bootcamp Fullstack Developer, oferido pela Digital Innovation One (DIO)**

Para isso, irei utilizar um algoritmo desenvolvido por mim durante a faculdade, em C sobre Programação Paralela

**Descrição do algoritmo:** O algoritmo encontra o vértice de maior grau (vértice que possui a maior quantidade de arestas incidentes) em uma matriz NxN. Para isso, são usados conceitos de Programação Paralela, utilizando pthreads

## Comandos git utilizados:

Inicializa git, cria o repositório: 
**git init**

Adicionar arquivo/repositório: 
**git add * / git add .** 

Mostra status do repositório: 
**git status**

Cria um commit: 
**git commit -m "Desafio de Projeto Git/Github DIO - Primeiro Repositório"**


Adicionar a origem em que os arquivos são enviados: 
**git remote add origin https://github.com/lucasgabrielsg/dio-desfio-projeto.git**

Lista os repositorios cadastrados: 
**git remote -v**


Envia (empurra) o repositório para o github: 
**git push origin master**


## Outros comandos aprendidos, mas não utilizados: 

Gera chave SSH para o github: 
**ssh-keygen -t ed25519 -C gabriellucassg@gmail.com**

Mostra o conteúdo da chave SSH: 
**cat id_ed25519.pub**

Inicializa o SSH agent – pega e administra as chaves: 
**eval $(ssh-agent -s)**

Entrega a chave para o agent: 
**ssh-add caminho_chave_privada_ssh**

Clona o repositório do github: **git clone caminho_chave_ssh**

Configura o git, define autor: 
**git config --global user.email "gabriellucassg@gmail.com"
git config --global user.name Lucas**

Lista as configurações do git:
**git config --list**

Remove configuração do git, reescreve: 
**git config --global --unset user.email / git config --global --unset user.name**

Baixa (puxar) repositório do github: 
**git pull origin master**

