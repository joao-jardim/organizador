#ifndef MENU_HPP
#define MENU_HPP 

#include <string>
#include <vector> 

class Menu {
    public:
        Menu(); 
        ~Menu();

        void showMainMenu(); 
        void showListasMenu();
        void showSairMenu();
        void criarLista();
        void removerLista();
};
#endif