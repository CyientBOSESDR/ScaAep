#ifndef SCAAEP_I_IMPL_H
#define SCAAEP_I_IMPL_H

#include "ScaAep_base.h"

class ScaAep_i : public ScaAep_base
{
    ENABLE_LOGGING
    public:
        ScaAep_i(const char *uuid, const char *label);
        ~ScaAep_i();
        void start() throw (CF::Resource::StartError, CORBA::SystemException);
        int sca_trace();
        void constructor();

        int serviceFunction();

    protected:
};

#endif // SCAAEP_I_IMPL_H
