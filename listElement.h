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

#include <string>
#include <iostream>

class listElement
{
    std::string content;
    listElement* ptrNextElement;

public:
    listElement();
    listElement(std::string);
    void operator= (listElement);
    void swapContent (listElement*);
    friend std::ostream& operator<< (std::ostream& os,  listElement& element);
    void setContent(std::string);
    std::string getContent();
    void setNextElement(listElement*);
    listElement* getNextElement();
    //listElement* getAddressOfNumber(unsigned int);
};

#endif // LISTELEMENT_H

//////////////////// End of File <listElement.h> //////////////////////////////
