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
// Marc Töpker
//
///////////////////////////////////////////////////////////////////////////////

#include "listElement.h"

using namespace std;

template <class T>
listElement<T>::listElement()
{
    //std::cout << "std-Constructor" << std::endl;
}

template <class T>
listElement<T>::listElement(T content)
{
    //std::cout << "Custom-Constructor" << std::endl;
    setContent(content);
    setNextElement(0);
}

template <class T>
listElement<T>::listElement(listElement& source)
{
    std:cout << "Copy-Constructor" << std::endl;
    setContent(source->getContent());
    setNextElement(source->getNextElement());
}

template <class T>
void listElement<T>::setContent(T newContent)
{
    content = newContent;
}

template <class T>
void listElement<T>::setNextElement(listElement* pNextElement)
{
    ptrNextElement = pNextElement;
}



template <class T>
T listElement<T>::getContent()
{
    return content;
}

template <class T>
listElement<T>* listElement<T>::getNextElement()
{
    return ptrNextElement;
}

template <class T>
void listElement<T>::swapContent( listElement<T>* element )
{
    T tempContent = getContent();
    setContent(element->getContent());
    element->setContent(tempContent);
}

template <class T>
void listElement<T>::operator=( listElement<T>* element )
{
    content = element->getContent();
}

template <class T>
ostream& operator<< (ostream& os, listElement<T>& element)
{
    return os << element->getContent();
}


//////////////////// End of File <listElement.cpp> ////////////////////////////
