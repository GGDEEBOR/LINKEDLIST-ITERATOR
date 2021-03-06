#include <iostream>
#include "PatronIterator.h" 
#include "LinkedList.h"
#include "Node.h"
using namespace std;

int main(){
    LinkedList<int> a;
    a.push_front(45);
    a.push_front(90);
    a.push_back(1223);
    a.push_back(34);
    a.push_front(6);
    a.push_back(43);
    a.push_front(78);
    cout << endl;
    cout << "Lista inicial de 'a' antes del movimiento: " << endl;
    cout << a << endl;

    cout << endl;
    LinkedList<int> b = move(a);
    cout << "Lista inicial de 'b': " << endl;
    cout << b << endl; //78  6  90  45  1223  34  43
    cout << endl;
    cout << "Lista de 'a': " << endl;
    cout << a << endl;


    for (PatronIterator<int> it = b.begin(); it != b.end(); it++){
        cout << "iterador:  " << *it << endl;
    }
    

    return 0;
}