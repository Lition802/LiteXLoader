// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EmoteListPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMOTELISTPACKET
public:
    class EmoteListPacket& operator=(class EmoteListPacket const&) = delete;
    EmoteListPacket(class EmoteListPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~EmoteListPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~EmoteListPacket(){
         (EmoteListPacket::*rv)();
        *((void**)&rv) = dlsym("??1EmoteListPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI EmoteListPacket(class ActorRuntimeID);
    MCAPI EmoteListPacket();
    MCAPI static int const MAX_EMOTE_PIECE_IDS;

protected:

private:

};