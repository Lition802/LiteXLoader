// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActivateToolNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVATETOOLNODE
public:
    class ActivateToolNode& operator=(class ActivateToolNode const&) = delete;
    ActivateToolNode(class ActivateToolNode const&) = delete;
#endif

public:
    /*0*/ virtual ~ActivateToolNode();
    /*1*/ virtual int /*enum enum BehaviorStatus*/ tick(class Actor&);
    /*2*/ virtual void initializeFromDefinition(class Actor&);
    MCAPI ActivateToolNode();

protected:

private:

};