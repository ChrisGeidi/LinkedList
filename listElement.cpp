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
// Marc T�pker
//
///////////////////////////////////////////////////////////////////////////////

#include "listElement.h"
using namespace std;

string listElement::getContent()
{
    return content;
}

void listElement::setContent(string newContent)
{
    content=newContent;
}

void listElement::swapContent(listElement element)
{
    string tempContent=getContent();
    setContent(element.getContent());
    element.setContent(tempContent);

}
ostream& operator<< (ostream& os,  listElement& element)
{
    os<< element.getContent();

    return os;
}
void listElement::operator=(listElement element)
{
    content=element.getContent();
}
