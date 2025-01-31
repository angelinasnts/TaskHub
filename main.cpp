#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Hold_Browser.H>

using namespace std;

Fl_Window *window = new Fl_Window(10,10,300,300,"TaskHub");
Fl_Button *add_task_button = new Fl_Button(10,10,75,25,"Add Task");
Fl_Button *delete_task_button = new Fl_Button(100,10,100,25,"Delete Task");
Fl_Input *input = new Fl_Input(90,50,230,25,"Enter Task: ");
Fl_Hold_Browser *listbox = new Fl_Hold_Browser(10,80,280,200, "Tasks");

void add_task(Fl_Widget*, void*) {
    if (input->value() != "") {
        listbox->add(input->value());
        input->value("");
    }
}

void delete_task(Fl_Widget*, void*) {
    listbox->remove(listbox->value());
}

int main() {
    Fl::scheme("gtk+"); // Adicione o ponto e vírgula aqui
    add_task_button->callback(add_task);
    delete_task_button->callback(delete_task);
    window->show();
    return Fl::run();
}