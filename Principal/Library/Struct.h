//
//  Struct.h
//  EstructuraDeDatos
//
//  Created by José Ignacio Gutiérrez Guzmán on 8/8/18.
//  Copyright © 2018 José Ignacio Gutiérrez Guzmán. All rights reserved.
//

#ifndef Struct_h
#define Struct_h

#include <string>

#endif /* Struct_h */

#define MSG_PUT_NODE "Put here new element: "
#define MSG_NO_MEMORY "There is not memory available. "
#define TAG_ID "Id: "
#define TAG_NAME "Nombre: "
#define TAG_LASTNAME "Apellido: "

struct nodo {

    std::string ide;
    
    std::string nombre;
    
    std::string apellido;
    
    nodo *siguiente;
    
};

struct nodo *primero, *ultimo;

class Lista {
    
    protected:
    
    
    
    public:
    
    void isEmty(){
        
        
    }
    
    void printList (){
        
        struct nodo *aux;
        
        aux = primero;
        
        while (aux != NULL) {
            
            std::cout << TAG_ID << aux->ide << ", " << TAG_NAME << aux->nombre << ", " << TAG_LASTNAME << aux->apellido << "\n ";
            
            aux = aux->siguiente;
        }
        
    }
    
    void insertAtBegin (){
        
        nodo* nuevo = createNode();
        
        if (nuevo != NULL){
            
            std::cout << MSG_PUT_NODE << "\n\n";
            
            nuevo = updateNode(nuevo);
        }
        
        if (primero == NULL){
            
            primero = ultimo = nuevo;
            
        }else{
            
            ultimo->siguiente = nuevo;
            
            ultimo = nuevo;
        }
        
    }
    
    void insertAtEnd (){
        
        nodo* nuevo = createNode();
        
        if (nuevo != NULL){
            
            std::cout << MSG_PUT_NODE << "\n\n";
            
            nuevo = updateNode(nuevo);
            
            nuevo->siguiente = NULL;
        }
        
        if (primero == NULL){
            
            primero = ultimo = nuevo;
            
        }else{
            
            ultimo->siguiente = nuevo;
            
            ultimo = nuevo;
        }
        
    }
    
    void insertAtIndex(){
        
        
    }
    
    void deleteAtBegin (){
        
        
    }
    
    void deleteAtEnd (){
        
        
    }
    
    void deleteAtIndex (){
        
        
    }
    
    void updateFirst (){
        
        
    }
    
    void updateAll (){
        
        
    }
    
    void linealSearch (){
        
        
    }
    
    void searchAll (){
        
        
    }
    
    void binarySearch (){
        
        
    }
    
    void reverse (){
        
        
    }
    
    void quickSort (){
        
        
    }
    
    void sublist(){
        
        
    }
    
    void lenght (){
        
        
    }
    
    void cloneList (){
        
        
    }
    
    void isEqual (){
        
        
    }
    
    void get (){
        
        
    }
    
    void indexOf (){
        
        
    }
    
    /*
    nodo *BuscarUltimo (){
        
        nodo *ultimo;
            
            
        return ultimo;
    }
    */
    
    private :
    
    nodo *updateNode (nodo *temporal){
        
        std::cout << TAG_ID << " \n";
        
        std::cin >> temporal->ide;
        
        std::cout << TAG_NAME <<" \n";
        
        std::cin >> temporal->nombre;
        
        std::cout <<  TAG_LASTNAME << " \n";
        
        std::cin >> temporal->apellido;
        
        return temporal;
    }
    
    nodo *createNode (){

        nodo* temporal = new nodo();

        if (temporal == NULL){
            
            std::cout <<  MSG_NO_MEMORY << " \n";
            
        }
        
        return temporal;
    }
    
};
