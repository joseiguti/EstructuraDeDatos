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

#define ERROR_BLANK_LIST "Sorry, there are not elements inside the list "
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
    
    bool isEmty(){
        
        if (!lenght())
        
            return true;
        
        else
            
            return false;
    }
    
    void printList (){
        
        /*
        
        // Fila
        
        nodo * nuevo_1 = createNode();
        
        nuevo_1->nombre = "Jose";
        
        primero = nuevo_1;

        // ----
        
        nodo * nuevo_2 = createNode();
        
        nuevo_1->siguiente = nuevo_2;
        
        nuevo_2->nombre = "Maria";
        
        // ---
        
        nodo * nuevo_3 = createNode();
        
        nuevo_2->siguiente = nuevo_3;
        
        nuevo_3->nombre = "Renato";
        
        // ---
        
        // Pila
        
        nodo * nuevo_4 = createNode();
        
        nuevo_4->nombre = "Blanca";
        
        nuevo_4->siguiente = primero;
        
        primero = nuevo_4;
        
        // ---
        
        nodo * nuevo_5 = createNode();
        
        nuevo_5->nombre = "Ignacio";
        
        nuevo_5->siguiente = primero;
        
        primero = nuevo_5;

        // ---
        
        nodo * nuevo_6 = createNode();
        
        nuevo_6->nombre = "Teofilo";
        
        nuevo_6->siguiente = primero;
        
        primero = nuevo_6;
        
        struct nodo * recorre = primero;
        
        while (recorre != NULL){
        
            std::cout << recorre->nombre << "\n";
            
            recorre = recorre->siguiente;
        }
        */
        int indice = 0;
        
        struct nodo *aux  = primero;
        
        while (aux != NULL) {
            
            std::cout << "Indice: " << indice << ". " << TAG_ID << aux->ide << ", " << TAG_NAME << aux->nombre << ", " << TAG_LASTNAME << aux->apellido << "\n";
            
            aux = aux->siguiente;
            
            indice++;
        }

    }
    
    void insertAtBegin (){
        
        nodo * nuevo = createNode();
        
        if (nuevo != NULL){
            
            std::cout << MSG_PUT_NODE << "\n\n";
            
            nuevo = updateNode(nuevo);
        }
        
        if (primero == NULL){
            
            primero = nuevo;
            
        }else{
            
            nuevo->siguiente = primero;
            
            primero = nuevo;
           
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
            
            primero = nuevo;
            
        }else{
            
            ultimo->siguiente = nuevo;
            
            ultimo = nuevo;
        }
        
    }
    
    void insertAtIndex(){
        
        
    }
    
    void deleteAtBegin (){

        if (primero == NULL){
            
            std::cout << ERROR_BLANK_LIST << "\n";
            
        }else{
            
            nodo* inidice0 = get(0);
            
            nodo* inidice1 = get(1);
            
            if (inidice1 != NULL){
            
                primero = inidice1;
                
                std::cout << "Caso1 \n";
            
            }else{
                
                primero = NULL;
                
                std::cout << "Caso2 \n";
            }
            
            free(inidice0);
            
            
        }
        
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
    
    /**
     * Retorna la cantidad de elementos que tiene la lista
     */
    int lenght (){
       
        int cantidad = 0;
        
        struct nodo *aux;
        
        aux = primero;
        
        while (aux != NULL) {
            
            aux = aux->siguiente;
            
            cantidad++;
        }
        
        free (aux);
        
        return cantidad;
    }
    
    void cloneList (){
        
        
    }
    
    void isEqual (){
        
        
    }
    
    nodo *get (int index){
        
        return indexOf(index);
    }
    
    /*
    nodo *BuscarUltimo (){
        
        nodo *ultimo;
            
            
        return ultimo;
    }
    */
    
    private :
    
    /**
     * Retorna el nodo que nosotros le digamos
     */
    nodo *indexOf ( int index ){
        
        int indexi = 1;
        
        nodo *elemento = NULL;
        
        struct nodo *aux;
        
        aux = primero;
        
        while (aux != NULL) {
            
            if (indexi == index){
                
                elemento = aux->siguiente;
            
                break;
            }
            
            aux = aux->siguiente;
            
            indexi++;
        }
        
        return elemento;
    }
    
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
