/**
 * @file  DebugInfoPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DebugInfoPacket.
 *
 */
class DebugInfoPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGINFOPACKET
public:
    class DebugInfoPacket& operator=(class DebugInfoPacket const &) = delete;
    DebugInfoPacket(class DebugInfoPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -281961129
     */
    virtual ~DebugInfoPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@DebugInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1757703589
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@DebugInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   101402706
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@DebugInfoPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   47965813
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@DebugInfoPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -975586107
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0DebugInfoPacket@@QEAA@XZ
     * @hash   -1529776315
     */
    MCAPI DebugInfoPacket();

};