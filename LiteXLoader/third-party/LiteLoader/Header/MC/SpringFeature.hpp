// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SpringFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPRINGFEATURE
public:
    class SpringFeature& operator=(class SpringFeature const&) = delete;
    SpringFeature(class SpringFeature const&) = delete;
    SpringFeature() = delete;
#endif

public:
    /*0*/ virtual ~SpringFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    MCAPI SpringFeature(class Block const&);

protected:

private:
    MCAPI bool isValidSpringBorderBlock(class BlockLegacy const&, class BlockSource&) const;

};