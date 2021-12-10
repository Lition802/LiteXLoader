// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EyeOfEnder : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EYEOFENDER
public:
    class EyeOfEnder& operator=(class EyeOfEnder const&) = delete;
    EyeOfEnder(class EyeOfEnder const&) = delete;
    EyeOfEnder() = delete;
#endif

public:
    /*0*/ virtual void reloadHardcoded(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual ~EyeOfEnder();
    /*2*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual float getInterpolatedHeadRot(float) const;
    /*5*/ virtual float getInterpolatedBodyYaw(float) const;
    /*6*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*7*/ virtual void __unk_vfn_1();
    /*8*/ virtual void lerpMotion(class Vec3 const&);
    /*9*/ virtual void normalTick();
    /*10*/ virtual float getRidingHeight();
    /*11*/ virtual void __unk_vfn_2();
    /*12*/ virtual void __unk_vfn_3();
    /*13*/ virtual float getCameraOffset() const;
    /*14*/ virtual float getShadowRadius() const;
    /*15*/ virtual void __unk_vfn_4();
    /*16*/ virtual void __unk_vfn_5();
    /*17*/ virtual void playerTouch(class Player&);
    /*18*/ virtual bool isPickable();
    /*19*/ virtual void __unk_vfn_6();
    /*20*/ virtual bool isSleeping() const;
    /*21*/ virtual void setSleeping(bool);
    /*22*/ virtual void __unk_vfn_7();
    /*23*/ virtual bool isBlocking() const;
    /*24*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*25*/ virtual void __unk_vfn_8();
    /*26*/ virtual bool isSurfaceMob() const;
    /*27*/ virtual void __unk_vfn_9();
    /*28*/ virtual void __unk_vfn_10();
    /*29*/ virtual void __unk_vfn_11();
    /*30*/ virtual class Actor* findAttackTarget();
    /*31*/ virtual bool isValidTarget(class Actor*) const;
    /*32*/ virtual void adjustDamageAmount(int&) const;
    /*33*/ virtual void onTame();
    /*34*/ virtual void onFailedTame();
    /*35*/ virtual bool isJumping() const;
    /*36*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*37*/ virtual void animateHurt();
    /*38*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*39*/ virtual float getPickRadius();
    /*40*/ virtual void awardKillScore(class Actor&, int);
    /*41*/ virtual int /*enum enum ArmorMaterialType*/ getArmorMaterialTypeInSlot(int /*enum enum ArmorSlot*/) const;
    /*42*/ virtual int /*enum enum ArmorTextureType*/ getArmorMaterialTextureTypeInSlot(int /*enum enum ArmorSlot*/) const;
    /*43*/ virtual float getArmorColorInSlot(int /*enum enum ArmorSlot*/, int) const;
    /*44*/ virtual void setEquippedSlot(int /*enum enum EquipmentSlot*/, class ItemStack const&);
    /*45*/ virtual class HashedString const& queryEntityRenderer() const;
    /*46*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*47*/ virtual bool canFreeze() const;
    /*48*/ virtual int getPortalWaitTime() const;
    /*49*/ virtual bool canChangeDimensions() const;
    /*50*/ virtual void __unk_vfn_12();
    /*51*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*52*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*53*/ virtual bool canBePulledIntoVehicle() const;
    /*54*/ virtual bool inCaravan() const;
    /*55*/ virtual void __unk_vfn_13();
    /*56*/ virtual bool canSynchronizeNewEntity() const;
    /*57*/ virtual void buildDebugInfo(std::string&) const;
    /*58*/ virtual int getDeathTime() const;
    /*59*/ virtual void swing();
    /*60*/ virtual void __unk_vfn_14();
    /*61*/ virtual void __unk_vfn_15();
    /*62*/ virtual float getYHeadRot() const;
    /*63*/ virtual bool isWorldBuilder() const;
    /*64*/ virtual void __unk_vfn_16();
    /*65*/ virtual bool isAdventure() const;
    /*66*/ virtual bool canDestroyBlock(class Block const&) const;
    /*67*/ virtual void setAuxValue(int);
    /*68*/ virtual void stopSpinAttack();
    /*69*/ virtual void __unk_vfn_17();
    /*70*/ virtual void __unk_vfn_18();
    /*71*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*72*/ virtual void __unk_vfn_19();
    /*73*/ virtual void __unk_vfn_20();
    /*74*/ virtual void _onSizeUpdated();
    MCAPI EyeOfEnder(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI void signalTo(class Player const&, class BlockPos&);

protected:

private:

};