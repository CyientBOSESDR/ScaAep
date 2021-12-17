#include <iostream>
#include "ossie/ossieSupport.h"

#include "ScaAep.h"
int main(int argc, char* argv[])
{
    ScaAep_i* ScaAep_servant;
    Component::start_component(ScaAep_servant, argc, argv);
    return 0;
}

