// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DistanceConstraint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISTANCECONSTRAINT
public:
    class DistanceConstraint& operator=(class DistanceConstraint const&) = delete;
    DistanceConstraint(class DistanceConstraint const&) = delete;
    DistanceConstraint() = delete;
#endif

public:
    MCAPI DistanceConstraint(float, float, float);
    MCAPI float setup(class Vec3 const&, class Vec3 const&, float, float);
    MCAPI void solve(class Vec3&, class Vec3&);

protected:

private:

};