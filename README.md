# Estrutura-de-dados
Eu estudando estrutura de dados


Compilar a nova biblioteca sem linkar (apenas cria o arquivo objeto).
```
gcc -c nova_bib.c -o nova_bib.o
```
Criar o repositório da biblioteca com o aplicativo ar. Para cada arquivo adicionado ao repositório, o ar inclui informações sobre permissões, data e identificação do dono e do grupo. No nosso exemplo, o repositório criado é chamado de libnova_bib.a e só tem um arquivo (se existissem outros arquivos, os nomes seriam colocados após nova_bib.o).
```
ar rc libnova_bib.a nova_bib.o
```
onde a opção r adiciona/substitui arquivos no repositório e a opção c cria o repositório (se já existe um arquivo com o mesmo nome, ele é deletado).

Para executar o arquivo teste_lib.c é preciso gerar o executável com a nova biblioteca.
```
gcc teste_lib.c -o teste_lib -L. -lnova_bib
```
onde a opção L. inclui o diretório corrente na lista de busca pela biblioteca e a opção -lnova_bib – diz para linkar a biblioteca libnova_bib.a ao programa. Note que nem o prefixo “lib” e nem a extensão “.a” são informados no comando, pois fazem parte do padrão do nome da biblioteca. Caso o nome da biblioteca não seguisse o padrão, o comando usado seria
```
gcc teste_lib.c -o teste_lib -L.  biblioteca
```
