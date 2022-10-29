/**
 * @file  PlayerEnchantOptionsPacket.hpp
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
 * @brief MC class PlayerEnchantOptionsPacket.
 *
 */
class PlayerEnchantOptionsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERENCHANTOPTIONSPACKET
public:
    class PlayerEnchantOptionsPacket& operator=(class PlayerEnchantOptionsPacket const &) = delete;
    PlayerEnchantOptionsPacket(class PlayerEnchantOptionsPacket const &) = delete;
    PlayerEnchantOptionsPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1442837448
     */
    virtual ~PlayerEnchantOptionsPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PlayerEnchantOptionsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -599492608
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PlayerEnchantOptionsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   716109549
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PlayerEnchantOptionsPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -417143862
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PlayerEnchantOptionsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1054512550
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};