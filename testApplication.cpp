
#include "linkedList.h"

using namespace std;

int main()
{
    string test = "Casten";
    linkedList myList(test);

    test = "Bevermann";

    myList.append(test);

    cout << myList << endl;

    return 0;
}
