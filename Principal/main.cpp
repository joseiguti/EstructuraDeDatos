//
//  main.cpp
//  EstructuraDeDatos
//
//  Created by José Ignacio Gutiérrez Guzmán on 8/6/18.
//  Copyright © 2018 José Ignacio Gutiérrez Guzmán. All rights reserved.
//

#include <iostream>
#include <stdio.h>

#include "Library/Struct.h"
#include "Library/Menu.h"

int main(int argc, const char * argv[]) {
    
    int opcion = 0;
    
    Menu menu;
    
    Lista lista;

    do {
        
        opcion = menu.verMenu();
        
        switch (opcion) {
            case 1:
                
                break;
            case 2:
                lista.Adicionar();
                
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                lista.Listar();
                
            break;
            default:
                std::cout << "Opción no valida ";
            break;
        }
        
    }while(opcion != 6);
    
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    return 0;
}
