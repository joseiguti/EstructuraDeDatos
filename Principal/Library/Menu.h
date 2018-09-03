//
//  Menu.h
//  EstructuraDeDatos
//
//  Created by José Ignacio Gutiérrez Guzmán on 9/3/18.
//  Copyright © 2018 José Ignacio Gutiérrez Guzmán. All rights reserved.
//

#ifndef Menu_h
#define Menu_h


#endif /* Menu_h */

class Menu {
    
public:
    
    int verMenu () {
        
        int opcion = 0;
        
        std::cout << "Menú principal.\n";
        
        std::cout << "1- Agregar al inicio.\n";
        
        std::cout << "2- Agregar al final.\n";
        
        std::cout << "3- Eliminar posición/indice.\n";
        
        std::cout << "4- Buscar elemento.\n";
        
        std::cout << "5- Listar elementos.\n";
        
        std::cout << "6- Salir.\n";
        
        std::cin >> opcion;
        
        return opcion;
    }
};
