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
    public:
    void operator= (listElement);
    void swapContent (listElement);
    friend ostream& operator<< (ostream& os, const listElement& element);
    void setContent(std::string);
    std::string getContent();

};
#endif // LISTELEMENT_H
