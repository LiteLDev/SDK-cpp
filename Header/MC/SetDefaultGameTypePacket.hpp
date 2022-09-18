/**
 * @file  SetDefaultGameTypePacket.hpp
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
 * @brief MC class SetDefaultGameTypePacket.
 *
 */
class SetDefaultGameTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETDEFAULTGAMETYPEPACKET
public:
    class SetDefaultGameTypePacket& operator=(class SetDefaultGameTypePacket const &) = delete;
    SetDefaultGameTypePacket(class SetDefaultGameTypePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1010505501
     */
    virtual ~SetDefaultGameTypePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SetDefaultGameTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   694616683
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SetDefaultGameTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -314969832
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SetDefaultGameTypePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -136600689
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SetDefaultGameTypePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1805123391
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SetDefaultGameTypePacket@@QEAA@XZ
     * @hash   1484970223
     */
    MCAPI SetDefaultGameTypePacket();
    /**
     * @symbol ??0SetDefaultGameTypePacket@@QEAA@W4GameType@@@Z
     * @hash   613769018
     */
    MCAPI SetDefaultGameTypePacket(enum class GameType);

};