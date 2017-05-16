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

listElement::listElement() : listElement("")
{
}

listElement::listElement(string strContent)
{
    setContent(strContent);
    setNextElement(0);
}

string listElement::getContent()
{
    return content;
}

void listElement::setContent(string newContent)
{
    content = newContent;
}

void listElement::setNextElement(listElement* pNextElement)
{
    ptrNextElement = pNextElement;
}

void listElement::swapContent(listElement element)
{
    string tempContent=getContent();

    setContent(element.getContent());
    element.setContent(tempContent);

}
ostream& operator<< (ostream& os, listElement& element)
{
    os << element.getContent();

    return os;
}
void listElement::operator= (listElement element)
{
    content = element.getContent();
}

//////////////////// End of File <listElement.cpp> ////////////////////////////
