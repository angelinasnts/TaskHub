#include <iostream>
#include <string>
#include <list>
#include <ctime>

using namespace std;

// Classe que representa um item da lista de tarefas
class Tarefa {
private:
    int id;
    string descricao;
    bool concluida;

public:
    // Construtor padrão
    Tarefa() : id(0), descricao(""), concluida(false) {}
    ~Tarefa() = default;

    // Método para criar uma nova tarefa
    bool criar(string nova_descricao) {
        id = rand() % 100 + 1; // Gera um ID aleatório entre 1 e 100
        descricao = nova_descricao;
        return true;
    }

    // Métodos getters
    int obter_id() { return id; }
    string obter_descricao() { return descricao; }
    bool esta_concluida() { return concluida; }

    // Método setter para marcar a tarefa como concluída
    void definir_concluida(bool valor) { concluida = valor; }
};

int main() {
    char opcao;
    int id_digitado;
    string descricao_digitada;
    string versao = "v0.2.0";
    list<Tarefa> lista_tarefas;
    list<Tarefa>::iterator it;

    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios

    lista_tarefas.clear(); // Limpa a lista de tarefas

    while (1) {
        system("cls"); // Limpa a tela (no Windows)
        cout << "Gerenciador de Tarefas - " << versao << endl << endl;

        // Exibe a lista de tarefas
        for (it = lista_tarefas.begin(); it != lista_tarefas.end(); it++) {
            string status = it->esta_concluida() ? "Concluida" : "Pendente";
            cout << it->obter_id() << " | " << it->obter_descricao() << " | " << status << endl;
        }

        if (lista_tarefas.empty()) {
            cout << "Adicione sua primeira tarefa!" << endl;
        }

        cout << endl;
        cout << "[a] Adicionar uma nova tarefa" << endl;
        cout << "[c] Concluir uma tarefa" << endl;
        cout << "[s] Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 's') {
            cout << "Tenha um otimo dia!" << endl;
            break;
        } else if (opcao == 'a') {
            cout << "Digite a descrição da nova tarefa: ";
            cin.clear();
            cin.ignore();
            getline(cin, descricao_digitada);

            Tarefa nova_tarefa;
            nova_tarefa.criar(descricao_digitada);
            lista_tarefas.push_back(nova_tarefa);

        } else if (opcao == 'c') {
            cout << "Digite o ID da tarefa a ser concluida: ";
            cin >> id_digitado;

            for (it = lista_tarefas.begin(); it != lista_tarefas.end(); it++) {
                if (id_digitado == it->obter_id()) {
                    it->definir_concluida(true);
                    break;
                }
            }
        }
    }

    return 0;
}