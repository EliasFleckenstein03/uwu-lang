#ifndef _API_REF_H_
#define _API_REF_H_

#include "vm.h"

extern UwUVMType uwuref_type;
UwUVMValue       uwuref_create(UwUVMFunction *value);
UwUVMFunction   *uwuref_get(UwUVMValue vm_value);

#endif
