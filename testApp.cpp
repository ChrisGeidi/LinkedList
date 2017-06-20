///////////////////////////////////////////////////////////////////////////////
//
// File: testApp.cpp
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
#include "linkedList.cpp"
#include <iostream>
#include <string>



using namespace std;

int main()
{
    ///* from here standard code to show functionality */

    // vars
    ///*string list*/
    linkedList<string>* myList_string = new linkedList<string>;
    string  Test1_string = "Jens";
    string  Test2_string = "Chris";
    string  Test3_string = "Carsten";
    string  Test4_string = "Marc";


    cout <<"//////////////////////////////////////////////////////////////////////////"<<endl;
    cout<< "\t\t\t Liste mit Strings"<< endl;
    cout <<"//////////////////////////////////////////////////////////////////////////"<<endl<<endl;
    // append elements to list
    cout << "append 3 Elements to list and print" << endl;
    myList_string->append(Test1_string);
    myList_string->append(Test2_string);
    myList_string->append(Test3_string);
    cout << myList_string << endl;

    // insert to fixed pos in list
    cout << "insert '"<<Test4_string<<"' to pos 3 in list" << endl;
    myList_string->insertElement(2,Test4_string);
    cout << myList_string << endl;

    // delete element from fixed pos
    cout << "delete element from pos 3" << endl;
    myList_string->deleteElement(2);
    cout << myList_string << endl;

    // delete element with given content
    cout << "delete element where content like '"<<Test2_string<<"'" << endl;
    myList_string->removeElement(Test2_string);
    cout << myList_string << endl;

    // sort elements in list
    cout << "sort elements in list" << endl;
    myList_string->sortList();
    cout << myList_string << endl;
    delete myList_string;
    cout << endl<<endl;




    // vars
    ///*integer list*/
    linkedList<int>* myList_integer = new linkedList<int>;
    int     Test1_integer = 500;
    int     Test2_integer = 152;
    int     Test3_integer = 348;
    int     Test4_integer = 111;

    cout <<"//////////////////////////////////////////////////////////////////////////"<<endl;
    cout<< "\t\t\t Liste mit Integer Werten"<< endl;
    cout <<"//////////////////////////////////////////////////////////////////////////"<<endl<<endl;
       // append elements to list
    cout << "append 3 Elements to list and print" << endl;
    myList_integer->append(Test1_integer);
    myList_integer->append(Test2_integer);
    myList_integer->append(Test3_integer);
    cout << myList_integer << endl;

    // insert to fixed pos in list
    cout << "insert '"<<Test4_integer<<"' to pos 3 in list" << endl;
    myList_integer->insertElement(2,Test4_integer);
    cout << myList_integer << endl;

    // delete element from fixed pos
    cout << "delete element from pos 3" << endl;
    myList_integer->deleteElement(2);
    cout << myList_integer << endl;

    // delete element with given content
    cout << "delete element where content like '"<<Test2_integer<<"'" << endl;
    myList_integer->removeElement(Test2_integer);
    cout << myList_integer << endl;

    // sort elements in list
    cout << "sort elements in list" << endl;
    myList_integer->sortList();
    cout << myList_integer << endl;
    delete myList_integer;
    cout << endl<<endl;


    // vars
    ///*double list*/
    linkedList<double>* myList_double = new linkedList<double>;
    double     Test1_double = 768.55;
    double     Test2_double = 152.62;
    double     Test3_double = 348.24;
    double     Test4_double = 111.36;

    cout <<"//////////////////////////////////////////////////////////////////////////"<<endl;
    cout<< "\t\t\t Liste mit Double Werten"<< endl;
    cout <<"//////////////////////////////////////////////////////////////////////////"<<endl<<endl;
    // append elements to list
    cout << "append 3 Elements to list and print" << endl;
    myList_double->append(Test1_double);
    myList_double->append(Test2_double);
    myList_double->append(Test3_double);
    cout << myList_double << endl;

    // insert to fixed pos in list
    cout << "insert '"<<Test4_double<<"' to pos 3 in list" << endl;
    myList_double->insertElement(2,Test4_double);
    cout << myList_double << endl;

    // delete element from fixed pos
    cout << "delete element from pos 3" << endl;
    myList_double->deleteElement(2);
    cout << myList_double << endl;

    // delete element with given content
    cout << "delete element where content like '"<<Test2_double<<"'" << endl;
    myList_double->removeElement(Test2_double);
    cout << myList_double << endl;

    // sort elements in list
    cout << "sort elements in list" << endl;
    myList_double->sortList();
    cout << myList_double << endl;
    delete myList_double;
    cout << endl;

    //cout << endl << endl << "----------------- TEST OF COPY-CONSTRUKTOR --------------------" << endl << endl;
    //
    //linkedList<double>* myNewList(myList);
    //
    //delete myList;
    //
    // append elements to list
    //cout << "Last output should be same as next output" << endl;
    //cout << myList << endl;


return 0;

}
//////////////////// End of File <testApp.cpp> ////////////////////////////////
