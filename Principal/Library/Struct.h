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

struct nodo {
    
    int dato;
    
    nodo *siguiente;
    
};

struct nodo *primero, *ultimo;

class Lista {
    
    public:
    
        void Adicionar (){

            struct nodo *nuevo;
            
            nuevo = (struct nodo *) malloc(sizeof(struct nodo));
            
            if (nuevo == NULL)
                
                std::cout << "No hay memoria disponible \n";
            
            else{
                
                std::cout << "Escriba nuevo elemento: \n";
                
                std::cin >> nuevo->dato;
                
                nuevo->siguiente = NULL;
            }
            
            if (primero == NULL){
                
                primero = ultimo = nuevo;
                
            }else{
                
                ultimo->siguiente = nuevo;
                
                ultimo = nuevo;
            }
        
        }
    
        void Listar (){
        
            struct nodo *aux;
            
            aux = primero;
            
            while (aux != NULL) {
                
                std::cout << aux->dato << ", ";
                
                aux = aux->siguiente;
            }
        
        }
    
        nodo *BuscarUltimo (){
        
            nodo *ultimo;
            
            
            
            
            return ultimo;
        }
};
