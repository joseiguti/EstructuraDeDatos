//
//  Menu.h
//  EstructuraDeDatos
//
//  Created by José Ignacio Gutiérrez Guzmán on 9/3/18.
//  Copyright © 2018 José Ignacio Gutiérrez Guzmán. All rights reserved.
//

#ifndef Menu_h
#define Menu_h

#include <curses.h>

#endif /* Menu_h */

class Menu {
    
public:

    void run (){
        
        waitOption();
        
    }
    
protected:
    
    int showMenu () {
        
        std::cout << "Main menu.\n";
        
        std::cout << "1- Show all elements.\n";
        
        std::cout << "2- Insert at begin.\n";
        
        std::cout << "3- Insert at end.\n";
        
        std::cout << "4- Delete at begin.\n";
        
        std::cout << "5- Delete at end.\n";
        
        std::cout << "10- Exit.\n";
        
        std::cout << "Please select any option...\n";

        return 0;
    }
    
    void waitOption (){

        Lista list;
        
        int option = 0;
        
        do {
            
            showMenu();

            std::cin >> option;
            
            switch (option) {
                case 1:
                    list.printList();
                    break;
                case 2:
                    list.insertAtBegin();
                    break;
                case 3:
                    list.insertAtEnd();
                    break;
                case 4:
                    std::cout << "Longitud de la lista: " << list.lenght() << "\n";
                    list.deleteAtBegin();
                    break;
                case 5:
                    list.deleteAtEnd();
                    break;
                default:
                    std::cout << "No valid option!";
                    break;
            }
            
        }while(option != 10);
        
    }
};
