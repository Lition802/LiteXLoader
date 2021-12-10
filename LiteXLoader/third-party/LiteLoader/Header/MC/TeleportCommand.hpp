// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TeleportCommand {

#define AFTER_EXTRA
// Add Member There
public:
enum FacingResult;
enum TeleportAnalysis;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTCOMMAND
public:
    class TeleportCommand& operator=(class TeleportCommand const&) = delete;
    TeleportCommand(class TeleportCommand const&) = delete;
    TeleportCommand() = delete;
#endif

public:
    /*0*/ virtual ~TeleportCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI static void applyTarget(class Actor&, class TeleportTarget);
    MCAPI static class TeleportTarget computeTarget(class Actor&, class Vec3, class Vec3*, class AutomaticID<class Dimension, int>, class RelativeFloat, class RelativeFloat, int);
    MCAPI static void setup(class CommandRegistry&);

protected:

private:
    MCAPI enum TeleportCommand::FacingResult getFacingDirection(class CommandOrigin const&, class CommandOutput&, class Vec3&, class Actor*) const;
    MCAPI static enum TeleportCommand::TeleportAnalysis actorToLocationTeleportAnalysis(class CommandOrigin const&, class CommandArea const&, class CommandArea&, class Actor const&, class Vec3);
    MCAPI static std::unique_ptr<class CommandArea> getCommandAreaForTargets(class CommandOrigin const&, class CommandSelectorResults<class Actor> const&, class Vec3, bool);
    MCAPI static class AABB getSafetyAABB(class Actor const&, class Vec3);

};