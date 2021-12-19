// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NBCastleSmallCorridorPiece : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLESMALLCORRIDORPIECE
public:
    class NBCastleSmallCorridorPiece& operator=(class NBCastleSmallCorridorPiece const&) = delete;
    NBCastleSmallCorridorPiece(class NBCastleSmallCorridorPiece const&) = delete;
    NBCastleSmallCorridorPiece() = delete;
#endif

public:
    /*0*/ virtual ~NBCastleSmallCorridorPiece();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual enum StructurePieceType getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void __unk_vfn_2();

protected:

private:

};