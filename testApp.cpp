
#include "linkedList.cpp"
#include <iostream>
#include <string>
#include <typeinfo>


using namespace std;

int main()
{
    // vars
    int     i = 0;

    string  Test1 = "Jens";
    string  Test2 = "Christoph";
    string  Test3 = "Carsten";
    //int     Test1 = 168;
    //int     Test2 = 152;
    //int     Test3 = 348;
    //double  Test1 = 8.45;

    listElement<string>* element;

    // objects
    linkedList<string>* myList = new linkedList<string>;
    myList->append(Test1);
    myList->append(Test2);
    myList->append(Test3);


    // print listts
    cout << "Ausgabe der Liste:" << endl<<endl;
    cout <<"\t"<< "Nr.: \t\t" << "Adresse: \t\t"<< "Inhalt: \t\t" << endl;
    element = myList->getStartElement();
    while (element != 0)
    {
        i++;
       cout <<"\t"<< i<< "\t\t" <<element <<"\t\t"<< element->getContent() << endl;
        element = element->getNextElement();
    }
    cout << endl;

    delete myList;
}

