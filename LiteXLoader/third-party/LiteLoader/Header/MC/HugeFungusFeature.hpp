// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HugeFungusFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUGEFUNGUSFEATURE
public:
    class HugeFungusFeature& operator=(class HugeFungusFeature const&) = delete;
    HugeFungusFeature(class HugeFungusFeature const&) = delete;
    HugeFungusFeature() = delete;
#endif

public:
    /*0*/ virtual ~HugeFungusFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /*
    inline  ~HugeFungusFeature(){
         (HugeFungusFeature::*rv)();
        *((void**)&rv) = dlsym("??1HugeFungusFeature@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI HugeFungusFeature(bool);

protected:

private:

};