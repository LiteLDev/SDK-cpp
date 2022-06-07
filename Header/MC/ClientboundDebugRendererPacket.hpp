// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ClientboundDebugRendererPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBOUNDDEBUGRENDERERPACKET
public:
    class ClientboundDebugRendererPacket& operator=(class ClientboundDebugRendererPacket const &) = delete;
    ClientboundDebugRendererPacket(class ClientboundDebugRendererPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~ClientboundDebugRendererPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTBOUNDDEBUGRENDERERPACKET
#endif
    MCAPI ClientboundDebugRendererPacket(std::string, class mce::Color const &, class Vec3 const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000>>);
    MCAPI ClientboundDebugRendererPacket(enum ClientboundDebugRendererPacket::Type);
    MCAPI ClientboundDebugRendererPacket();



};