///////////////////////////////////////////////////////////////////////////////
//
// File: linkedList.h
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

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <stdio.h>
#include "listElement.h"

template <class T> class linkedList
{
private:

    // Laenge der Liste
    int length;

    // Beginnendes Element
    listElement<T>* start;

    // Akutelles bzw. zuletzt eingefuegtes Element
    listElement<T>* active;

    // Setzt ein Element als Start-Element
    //
    // Parameter 1: Adresse des zu setzenden Elementes
    void setStartElement( listElement<T>* );

    // Setzt ein Element als Aktives-Element
    //
    // Parameter 1: Adresse des zu setzenden Elementes
    void setActiveElement ( listElement<T>* );

public:

    // Custom-Constructor
    linkedList(  );

    // Custom-Constructor für Datentype T
    linkedList( T );

    // Custom-Kopierkonstruktor
    linkedList( linkedList& );

    // Destruktor
    ~linkedList();

    // Sortiert die Liste nach ASCII-Nummer, beginnend beim ersten Zeichen
    void sortList(  );

    // Fuegt der Liste ein Element an
    //
    // Parameter 1: Inhalt, der angehaengt werden soll
    void append( T );

    // Fuegt an gegebener Stelle der Liste ein Element des Datentyps T ein
    //
    // Parameter 1: Steller, an der ein Element eingefuegt werden soll
    // Parameter 2: Inhalt, der eingefuegt werden soll
    void insertElement( int, T );

    // Entfertn ein Element aus der Liste
    //
    // Parameter 1: Stelle des Elementes, das entfernt werden soll
    void deleteElement( int );

    // Entfernt ein Element aus der Liste
    //
    // Parameter 1: Inhalt des Elementes, das entfernt werden soll
    void removeElement( T );

    // Konvertiert Wert zu einem String
    //
    // Parameter 1: Adresse des Wertes, der konvertiert werden soll
    string to_string(T const& value);

    // Gibt Adresse des ersten Elementes zurueck
    listElement<T>* getStartElement (  );

    // Gibt Adresse des aktiven Elementes zurueck
    listElement<T>* getActiveElement (  );

    // Gibt aktuelle Laenge der Liste zurueck
    int getLength();
};

// Ueberladungsfunktion des <<-Operators
template <class T>
std::ostream& operator<<(std::ostream& os,  linkedList<T>& liste);

#endif // linkedList_H

/////////////////// End of File <linkedList.h> ////////////////////////////////

