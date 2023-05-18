# LISTA SEQUENCIAL
Este projeto implementa uma lista sequencial alocada dinâmicamente usando c++ como parte da 2° unidade da matéria EDB1 (Estrutura de dados básicas 1) do curso BTI (Bacharelado em tecnologia da informação).

## Como compilar o projeto

Execute o comando a seguir para gerar o arquivo Makefile que irá compilar o projeto.
~~~bash
cmake CMakeLists.txt
~~~

Execute o comando a seguir para compilar o projeto e gerar o arquivo executável "program".
~~~bash
make
~~~

Por fim, execute o comando a seguir para executar o projeto.
~~~bash
./program
~~~

## Arquivos do projeto

### Pasta src/
Esta pasta possui os arquivos de implemetação da lista sequencial e o arquivo Main.cpp que contém a função main do programa.
```c++
src/
├── Lista.cpp
└── Main.cpp
```

### Pasta include/
Essa pasta só contém o arquivo Lista.hpp que define os atributos e funções da classe Lista
```c++
include/
└── Lista.hpp
```

## Funções

### Lista(int arraySize)
Construtor da função que cria um array de tamanho "arraySize" alocado dinâmicamente.

### push_front(int valor)
Insere o valor passado como parâmetro no início do vetor

### push_back(int valor)
Insere o valor passado como parâmetro na próxima posição após o último elemento.

### at(int index)
Mostra na tela o elemento localizado no índice passado como parâmetro.

### toString()
Mostra todos os elementos do vetor

### insert(int index, int valor)
Insere o valor passado como parâmetro no vetor, na posição do índice passado como parâmetro, após isso move 1 casa para à direita todos os elementos a direita desse índice.

### pop_front()
Remove o elemento da primeira posição do vetor, após isso move todos os elementos 1 casa para a esquerda.

### pop_back()
Remove o último elemento do vetor.

### removeAt(int index)
Remove o elemento que se encontra no índice passado como parâmetro.

### sizeOf()
Retorna um inteiro que representa o número de elementos contidos no vetor.

### clear()
Remove todos os elementos do vetor.

### sort()
Ordena os elementos do vetor de forma crescente usando o algorítmo de ordenação Bubble sort.

### reverse()
Inverte o array, o elemento da primeira posição vai para a última, o da segunda vai para a penúltima ...
