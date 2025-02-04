# TaskHub

## Descrição

TaskHub é um aplicativo simples para gerenciamento de tarefas desenvolvido em C++. Ele permite adicionar tarefas, marcá-las como concluídas e visualizar a lista de tarefas pendentes e concluídas. O programa é executado no terminal e não requer bibliotecas externas além das bibliotecas padrão do C++.

## Requisitos

O programa foi desenvolvido em C++ e utiliza apenas bibliotecas padrão, portanto, não há dependências externas necessárias. Você só precisa de um compilador C++ compatível, como **g++** ou **clang++**.


## Compilação e Execução
### Compilação
Para compilar o programa, utilize o seguinte comando no terminal:
```sh
g++ main.cpp -o taskhub
```

### Execução
Após a compilação, execute o programa com o seguinte comando:
```sh
./taskhub
```
## Como Usar
### Adicionar uma Tarefa:
-No menu, digite **a** e pressione **Enter**.
-Insira a descrição da tarefa e pressione **Enter**.

### Concluir uma Tarefa:
-No menu, digite **c** e pressione **Enter**.
-Insira o ID da tarefa que deseja marcar como concluída e pressione **Enter**.

### Sair do Programa:
-No menu, digite **s** e pressione **Enter** para sair do programa.

## Exemplo de Uso
```sh
Gerenciador de Tarefas - v0.2.0

1 | Comprar leite | Pendente
2 | Fazer exercícios | Concluida

[a] Adicionar uma nova tarefa
[c] Concluir uma tarefa
[s] Sair
Escolha: a
Digite a descrição da nova tarefa: Estudar C++
```