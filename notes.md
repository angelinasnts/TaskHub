# Gerenciador de Tarefas em C++

Este é um simples gerenciador de tarefas implementado em C++. O programa permite ao usuário adicionar novas tarefas, marcar tarefas como concluídas e visualizar a lista de tarefas.

## Estrutura do Código

### Classe `Tarefa`

A classe `Tarefa` representa um item da lista de tarefas. Ela possui os seguintes atributos e métodos:

- **Atributos:**
  - `id`: Um identificador único para a tarefa.
  - `descricao`: Uma string que descreve a tarefa.
  - `concluida`: Um booleano que indica se a tarefa foi concluída.

- **Métodos:**
  - `Tarefa()`: Construtor padrão que inicializa os atributos.
  - `~Tarefa()`: Destrutor padrão.
  - `criar(string nova_descricao)`: Método para criar uma nova tarefa, gerando um ID aleatório e definindo a descrição.
  - `obter_id()`: Retorna o ID da tarefa.
  - `obter_descricao()`: Retorna a descrição da tarefa.
  - `esta_concluida()`: Retorna `true` se a tarefa estiver concluída, caso contrário, retorna `false`.
  - `definir_concluida(bool valor)`: Define o status de conclusão da tarefa.

### Função `main`

A função `main` é o ponto de entrada do programa. Ela gerencia a interação com o usuário e a manipulação da lista de tarefas.

- **Variáveis:**
  - `opcao`: Armazena a escolha do usuário no menu.
  - `id_digitado`: Armazena o ID da tarefa a ser marcada como concluída.
  - `descricao_digitada`: Armazena a descrição da nova tarefa.
  - `versao`: Armazena a versão do programa.
  - `lista_tarefas`: Uma lista de objetos `Tarefa`.
  - `it`: Um iterador para percorrer a lista de tarefas.

- **Fluxo do Programa:**
  1. Inicializa a semente do gerador de números aleatórios.
  2. Limpa a lista de tarefas.
  3. Entra em um loop infinito que exibe o menu e processa as escolhas do usuário:
     - **Adicionar Tarefa:** O usuário digita a descrição da tarefa, e uma nova tarefa é criada e adicionada à lista.
     - **Concluir Tarefa:** O usuário digita o ID da tarefa, e o programa marca a tarefa correspondente como concluída.
     - **Sair:** O programa exibe uma mensagem de despedida e encerra.