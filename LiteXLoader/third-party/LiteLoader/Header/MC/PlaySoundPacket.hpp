// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlaySoundPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[104];
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSOUNDPACKET
public:
    class PlaySoundPacket& operator=(class PlaySoundPacket const&) = delete;
    PlaySoundPacket(class PlaySoundPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~PlaySoundPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~PlaySoundPacket(){
         (PlaySoundPacket::*rv)();
        *((void**)&rv) = dlsym("??1PlaySoundPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI PlaySoundPacket(std::string, class Vec3 const&, float, float);
    MCAPI PlaySoundPacket();

protected:

private:

};