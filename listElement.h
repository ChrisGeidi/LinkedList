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

#include <string>
#include <iostream>

class listElement
{
    std::string content;
    unsigned int number;
    listElement* ptrNextElement;

public:
    listElement();
    listElement(std::string);
    void operator= (listElement);
    void swapContent (listElement);
    friend std::ostream& operator<< (std::ostream& os,  listElement& element);
    void setContent(std::string);
    std::string getContent();
    void setNextElement(listElement*);
    listElement* getAddressOfNumber(unsigned int);
};

#endif // LISTELEMENT_H

//////////////////// End of File <listElement.h> //////////////////////////////
