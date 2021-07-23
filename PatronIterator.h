#ifndef _PATRONITERATOR_H_
#define _PATRONITERATOR_H_
#include <iostream>
#include "Node.h"

template<typename T>
class PatronIterator{
    public:
        PatronIterator() : current{ nullptr }{
            cout << "Constructor por defecto" << endl;
        }

        T& operator*() const {
            return current-> getNext() -> getElem() ;
          }
    
        // incremento antes 
        PatronIterator & operator++ ( ){
            current = current->getNext();
            return *this;
        }

        // incremento despues
        PatronIterator operator++ (T){
            PatronIterator old = *this;
            ++( *this );
            return old;
        }

        bool operator== ( const PatronIterator & p ) const{ 
            return current == p.current;
        }

        bool operator!= ( const PatronIterator & o ) const{ 
            return !( *this == o ); 
        }

        PatronIterator( Node<T> *p ) : current{ p } { 
            
            cout << "constructor normal " << endl;
            cout << current << endl;
            
        }

    private:
        Node<T> *current;

        
};


#endif