
#include "linkedList.cpp"
#include <iostream>
#include <string>
#include <typeinfo>


using namespace std;

int main()
{
    // vars
    ///*string list*/
    linkedList<string>* myList = new linkedList<string>;    //für string lists
    string  Test1 = "Jens";
    string  Test2 = "Christoph";
    string  Test3 = "Carsten";
    string  Test4 = "Marc";

    ///*integer list*/
    //linkedList<int>* myList = new linkedList<int>;          // für int lists
    //int     Test1 = 168;
    //int     Test2 = 152;
    //int     Test3 = 348;
    //int     Test4 = 111;

    ///*double list*/
    //linkedList<double>* myList = new linkedList<double>;          // für double lists
    //double     Test1 = 168;
    //double     Test2 = 152;
    //double     Test3 = 348;
    //double     Test4 = 111;



    ///* from here standard code to show functionality */

    // append elements to list
    cout << "append 3 Elements to list and print" << endl;
    myList->append(Test1);
    myList->append(Test2);
    myList->append(Test3);
    myList->printList();
    cout << endl;

    // insert to fixed pos in list
    cout << "insert '"<<Test4<<"' to pos 3 in list" << endl;
    myList->insertElement(2,Test4);
    myList->printList();
    cout << endl;

    // delete element from fixed pos
    cout << "delete element from pos 3" << endl;
    myList->deleteElement(2);
    myList->printList();
    cout << endl;

    // delete element with given content
    cout << "delete element where content like '"<<Test2<<"'" << endl;
    myList->deleteElement(Test2);
    myList->printList();
    cout << endl;

    // sort elements in list
    // TODO (Marc Töpker#1#): Muss für Templateklasse noch angepasst werden, funktioniert nur mit strings ...
    cout << "sort elements in list" << endl;
    myList->sortList();
    myList->printList();
    cout << endl;

    delete myList;

    return 0;
}

