#include "BasicTool.h"

ostream& operator<<(ostream& output,  BasicTool& D)
{
    output << D.Print();
    return output;
    // TODO: insert return statement here
}
