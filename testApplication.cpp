
#include "linkedList.h"

using namespace std;

int main()
{
    string test = "Casten";
    //linkedList myList;
    linkedList myList(test);
    test = "Bevermann";
    myList.append(test);
    test = "Marc";
    myList.append(test);
    test = "Töpker";
    myList.append(test);
    test = "Christoph";
    myList.append(test);
    test = "Geitner";
    myList.append(test);
    test = "Jens";
    myList.append(test);
    test = "Reimer";








    cout << myList << endl;

    return 0;
}
