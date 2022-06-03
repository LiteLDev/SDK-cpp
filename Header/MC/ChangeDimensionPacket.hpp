// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChangeDimensionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    AutomaticID<Dimension, int> dimensionId;
    Vec3 position;
    bool respawn;

    inline std::string toDebugString() {
        return fmt::format("{}: pos: {}, dimensionId: {}, isRespawn: {}",
            __super::toDebugString(), position.toString(), (int)dimensionId, respawn);
    }
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANGEDIMENSIONPACKET
public:
    class ChangeDimensionPacket& operator=(class ChangeDimensionPacket const &) = delete;
    ChangeDimensionPacket(class ChangeDimensionPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~ChangeDimensionPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    MCAPI ChangeDimensionPacket(class AutomaticID<class Dimension, int>, class Vec3, bool);
    MCAPI ChangeDimensionPacket();

protected:

private:

};