
///////////////////////////////////////////////////////////////////////////////
//
// File: listElement.cpp
//
// Ingenieurorientierte Programmierung
// Dr. Alexander Kling
//
// Carsten Bevermann
// Christoph Geitner
// Jens Reimer
// Marc T�pker
//
///////////////////////////////////////////////////////////////////////////////

#include "listElement.h"

using namespace std;

template <class T>
listElement<T>::listElement()
{
    //std::cout << "std-Constructor" << std::endl;
    ;
}

template <class T>
listElement<T>::listElement(T content)
{
    //std::cout << "Custom-Constructor" << std::endl;
    setContent(content);
    setNextElement(0);
}

template <class T>
void listElement<T>::setContent(T newContent)
{
    //std::cout << "setContent" << std::endl;
    content = newContent;
}

template <class T>
void listElement<T>::setNextElement(listElement* pNextElement)
{
    //std::cout << "setNextElement" << std::endl;
    ptrNextElement = pNextElement;
}



template <class T>
T listElement<T>::getContent()
{
    //std::cout << "getContent" << std::endl;
    return content;
}

template <class T>
listElement<T>* listElement<T>::getNextElement()
{
    //std::cout << "getNextElement" << std::endl;
    return ptrNextElement;
}

template <class T>
void listElement<T>::swapContent( listElement<T>* element )
{
    T tempContent = getContent();
    setContent(element->getContent());
    element->setContent(tempContent);
}




/*
// TODO (Marc T�pker#1#): �berladen der Operatoren klappt nicht?!
template <class T>
void listElement<T>::operator=( listElement<T>* element )
{
    //std::cout << "operator = " << std::endl;
    content = element->getContent();
}

template <class T>
ostream& operator<< (ostream& os, listElement<T>& element)
{
    //std::cout << "operator << " << std::endl;
    return os << element->getContent();
}
*/

//////////////////// End of File <listElement.cpp> ////////////////////////////
