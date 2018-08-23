//
//  Struct.h
//  EstructuraDeDatos
//
//  Created by José Ignacio Gutiérrez Guzmán on 8/8/18.
//  Copyright © 2018 José Ignacio Gutiérrez Guzmán. All rights reserved.
//

#ifndef Struct_h
#define Struct_h


#endif /* Struct_h */

struct node {
    
    int number;
    
    node *next;
    
};

struct node *first, *last;

class List {
    
    public:
    
        void Add (){

            // We create a new variable of type pointer called new_element that represents a new element of list.
            struct node *new_element;
            
            // We reserve enough memory for the new element.
            new_element = (struct node *) malloc(sizeof(struct node));
            
            // We ask if there is enough memory for the new element
            if (new_element == NULL)
                
                std::cout << "There is not memory available \n";
            
            else{
                // We have found enough memory
                
                std::cout << "Put here the new list node value \n";
                
                std::cin >> new_element->number;
                
                new_element->next = NULL;
            }
            
            
            if (first == NULL){
                
                first = new_element;
                
                first = new_element;
                
            }else{
                
                last->next = new_element;
                
                last = new_element;
                
            }
        
        }
    
};
