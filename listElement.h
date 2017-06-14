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

#ifndef LISTELEMENT_H
#define LISTELEMENT_H

#include <iostream>

template <class T> class listElement
{
    // Speichert den Inhalt des Listenelementes
    T content;

    // Speichert die Adresse des naechsten Elementes in der Liste
    listElement* ptrNextElement;

public:

    // Custom-Constructor
    listElement(  );

    // Custom-Constructor
    //
    // Parameter 1: Inhalt des zu erstellenden Elementes
    listElement( T );

    // Kopier-Konstruktor
    //
    // Paramter 1: Adresse des Quellelementes
    listElement( listElement& );

    // Setzt Inhalt des Elementes
    void setContent( T );

    // Setzt die Adresse des naechsten Elementes in der Liste
    void setNextElement( listElement* );

    // Gibt den Inhalt des Elementes zurueck
    T getContent(  );

    // Gibt die Adresse des naechsten Elementes zurueck
    listElement* getNextElement(  );

    // Tauscht den Inhalt zweier Elemente
    //
    // Parameter 1: Adresse des zu tauschenden Elementes
    void swapContent( listElement<T>* );

    // Ueberladungsfunktion des =-Operators
    void operator= ( listElement* );
};

template <class T>
std::ostream& operator<<(std::ostream& os,  listElement<T>& liste);

#endif // LISTELEMENT_H

//////////////////// End of File <listElement.h> //////////////////////////////
