#include "Menu.hpp" 
#include <iostream> 

//Construtor e Destrutor
Menu::Menu() {} 
Menu::~Menu() {} 

//Mostra o menu principal
void Menu::showMainMenu() {
    bool running = true;

    while (running) {
        int option; 
        std::cout << "=== Bem vindo ao seu Organizador! ===" << std::endl;
        std::cout << "1. Minhas listas" << std::endl;
        std::cout << "2. Sair" << std::endl;

        std::cout << "\nEscolha uma opção: \n";
        std::cin >> option;


        switch (option) {
            case 1:
                showListasMenu();
                break;
            case 2:
                showSairMenu();
                running = false;
                break;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    }
}

//Mostra o menu de listas
void Menu::showListasMenu() {
    bool rodando = true;

    while (rodando) {
        int option;
        std::cout << "\n ========== Minhas Listas ==========\n" << std::endl;
        std::cout << "LISTAGEM DE LISTAS AINDA EM IMPLEMENTAÇÃO" << std::endl;
        std::cout << "1. Criar uma nova lista" << std::endl;
        std::cout << "2. Remover uma lista" << std::endl;
        std::cout << "3. Voltar ao menu principal" << std::endl;

        std::cout << "\nEscolha uma opção: \n";
        std::cin >> option;

        switch (option) {
            case 1:
                criarLista();
                break;
            case 2:
                removerLista();
                break;
            case 3:
                rodando = false; // Volta ao menu principal
                break;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    }
}

void Menu::showSairMenu() {
    std::cout << "Obrigado por usar o Organizador!" << std::endl;
    std::cout << "Até logo!" << std::endl;
    std::cout << "Versão 1.0" << std::endl;
}

void Menu::criarLista() { 
    std::cout << "Função de criação de lista ainda não implementada." << std::endl;
    std::cout << "Pressione enter para voltar" << std::endl;
    std::cin.ignore(); // Limpa o buffer do cin
    std::cin.get(); // Espera o usuário pressionar Enter
}

void Menu::removerLista() { 
    std::cout << "Função de remoção de lista ainda não implementada." << std::endl;
    std::cout << "Pressione enter para voltar" << std::endl;
    std::cin.ignore(); // Limpa o buffer do cin
    std::cin.get(); // Espera o usuário pressionar Enter
}