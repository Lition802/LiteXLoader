// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TripodCameraDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERADESCRIPTION
public:
    class TripodCameraDescription& operator=(class TripodCameraDescription const&) = delete;
    TripodCameraDescription(class TripodCameraDescription const&) = delete;
    TripodCameraDescription() = delete;
#endif

public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~TripodCameraDescription();
    /*2*/ virtual void serializeData(class Json::Value&) const;
    /*
    inline  ~TripodCameraDescription(){
         (TripodCameraDescription::*rv)();
        *((void**)&rv) = dlsym("??1TripodCameraDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};