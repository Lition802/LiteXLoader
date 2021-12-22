// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetworkPeer {

#define AFTER_EXTRA
// Add Member There
public:
enum class Reliability : int {};
enum class DataStatus : int { OK,
                              BUSY };
struct NetworkStatus {
    int unk0;             //0
    int ping;             //4
    int avgping;          //8
    int unk12;            //12
    float packetloss;     //16
    float avgpacketloss;  //20
    double unk24;         //24
    double unk32;         //32
    double unk40;         //40
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKPEER
public:
    class NetworkPeer& operator=(class NetworkPeer const&) = delete;
    NetworkPeer(class NetworkPeer const&) = delete;
    NetworkPeer() = delete;
#endif

public:
    /*0*/ virtual ~NetworkPeer();
    /*1*/ virtual void sendPacket(std::string const&, enum NetworkPeer::Reliability, int, unsigned short, enum Compressibility) = 0;
    /*2*/ virtual enum NetworkPeer::DataStatus receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > > > const&) = 0;
    /*3*/ virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const = 0;
    /*4*/ virtual void update();
    /*5*/ virtual void flush(class std::function<void (void)>&&);
    /*
    inline  ~NetworkPeer(){
         (NetworkPeer::*rv)();
        *((void**)&rv) = dlsym("??1NetworkPeer@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};