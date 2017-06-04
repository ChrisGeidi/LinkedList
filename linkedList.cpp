///////////////////////////////////////////////////////////////////////////////
//
// File: linkedList.cpp
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

#include "listElement.cpp"
#include "linkedList.h"
#include <iostream>
#include <string>

using namespace std;
// TODO (C.Geitner#1#): emptyString empty machen
template <class T>
linkedList<T>::linkedList()
{
    setStartElement(0);
    setActiveElement(0);
}

template <class T>
linkedList<T>::linkedList( T content )
{
    listElement<T>* ptrNewElement = new listElement<T>(content);
    setStartElement(ptrNewElement);
    setActiveElement(ptrNewElement);
}

template <class T>
linkedList<T>::~linkedList()
{
    // Erstes listElement holen
    int i=0;
    listElement<T>* actualElement = getStartElement();
    listElement<T>* nextElement;
    // ELemente e
    while(actualElement != 0)
    {
        nextElement = actualElement->getNextElement();
        delete actualElement;
        actualElement = nextElement;
        i++;
    }
    cout << i << " elements deleted!" << endl;
}

template <class T>
void linkedList<T>::append(T content)
{
    listElement<T>* newElement = new listElement<T>(content);
    if( getStartElement() == 0 )
    {
        setStartElement(newElement);
    }
    else
    {
        getActiveElement()->setNextElement(newElement);
    }
    setActiveElement(newElement);
}



template <class T>
void linkedList<T>::setActiveElement( listElement<T>* pListElement )
{
    active = pListElement;
}

template <class T>
void linkedList<T>::setStartElement( listElement<T>* pListElement )
{
    start = pListElement;
}

template <class T>
listElement<T>* linkedList<T>::getActiveElement()
{
    return active;
}

template <class T>
listElement<T>* linkedList<T>::getStartElement()
{
    return start;
}

/////////////////// End of File <linkedList.cpp> //////////////////////////////

