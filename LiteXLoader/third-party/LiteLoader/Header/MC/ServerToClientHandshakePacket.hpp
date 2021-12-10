// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerToClientHandshakePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERTOCLIENTHANDSHAKEPACKET
public:
    class ServerToClientHandshakePacket& operator=(class ServerToClientHandshakePacket const&) = delete;
    ServerToClientHandshakePacket(class ServerToClientHandshakePacket const&) = delete;
#endif

public:
    /*0*/ virtual ~ServerToClientHandshakePacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~ServerToClientHandshakePacket(){
         (ServerToClientHandshakePacket::*rv)();
        *((void**)&rv) = dlsym("??1ServerToClientHandshakePacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ServerToClientHandshakePacket(std::string const&);
    MCAPI ServerToClientHandshakePacket();

protected:

private:

};