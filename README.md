# TaskHub

## Descrição

TaskHub é um aplicativo simples para gerenciamento de tarefas usando a biblioteca FLTK para criar uma interface gráfica. Ele permite adicionar e remover tarefas de uma lista.

## Requisitos

Antes de compilar e rodar o programa, é necessário instalar a biblioteca **FLTK** no seu sistema.

### Windows

1. Baixe o FLTK no site oficial: [FLTK Downloads](https://www.fltk.org/software.php)
2. Extraia o arquivo e compile o FLTK (se necessário)
3. Adicione o caminho do FLTK ao `PATH` do Windows
4. Se preferir, instale via `vcpkg`:
   ```sh
   vcpkg install fltk
   
### Linux (Ubuntu/Debian)
sudo apt update
sudo apt install libfltk1.3-dev

### macOS (Homebrew)
brew install fltk

## Compilação e Execução
### Windows
Se o FLTK foi instalado manualmente, compile com:
g++ taskhub.cpp -o taskhub -I<fltk_include_path> -L<fltk_lib_path> -lfltk

Caso tenha usado o vcpkg:
g++ taskhub.cpp -o taskhub -I"C:/vcpkg/installed/x64-windows/include" -L"C:/vcpkg/installed/x64-windows/lib" -lfltk

### Linux/macOS
g++ taskhub.cpp -o taskhub `fltk-config --cxxflags --ldflags`
para executar:
./taskhub



