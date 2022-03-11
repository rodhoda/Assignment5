//
// Created by rodho on 3/10/2022.
//

#include "NodeProg5.h"
#include <string>
using namespace std;


class NodeChild: public Node {
private:
    int childVal;
    string name;
public:
    NodeChild();
    NodeChild(int, string);
};


