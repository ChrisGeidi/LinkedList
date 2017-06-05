///////////////////////////////////////////////////////////////////////////////
//
// File: listElement.h
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

// TODO (C.Geitner#1#): Umwandlung des gesamten Projektes in template-Klassen

#ifndef LISTELEMENT_H
#define LISTELEMENT_H

#include <iostream>

template <class T>
class listElement;

template <class T>
std::ostream& operator<<(std::ostream& os,  listElement<T>& liste);

template <class T> class listElement
{
    T content;
    listElement* ptrNextElement;

public:
    listElement(  );
    listElement( T );
    void setContent( T );
    void setNextElement( listElement* );

    T getContent(  );
    listElement* getNextElement(  );

    void operator= ( listElement* );
    friend std::ostream& operator<< <>( std::ostream& os, listElement<T>& element);

    void swapContent( listElement<T>* );
};

#endif // LISTELEMENT_H

//////////////////// End of File <listElement.h> //////////////////////////////
