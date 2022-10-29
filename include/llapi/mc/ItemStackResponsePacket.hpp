/**
 * @file  ItemStackResponsePacket.hpp
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
 * @brief MC class ItemStackResponsePacket.
 *
 */
class ItemStackResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKRESPONSEPACKET
public:
    class ItemStackResponsePacket& operator=(class ItemStackResponsePacket const &) = delete;
    ItemStackResponsePacket(class ItemStackResponsePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1566073332
     */
    virtual ~ItemStackResponsePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ItemStackResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1299514080
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ItemStackResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1000521101
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ItemStackResponsePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   566386682
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ItemStackResponsePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   763509690
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackResponsePacket@@QEAA@XZ
     * @hash   -492475110
     */
    MCAPI ItemStackResponsePacket();
    /**
     * @symbol ??0ItemStackResponsePacket@@QEAA@$$QEAV?$vector@UItemStackResponseInfo@@V?$allocator@UItemStackResponseInfo@@@std@@@std@@@Z
     * @hash   1324260331
     */
    MCAPI ItemStackResponsePacket(std::vector<struct ItemStackResponseInfo> &&);
    /**
     * @symbol ?getResponses@ItemStackResponsePacket@@QEBAAEBV?$vector@UItemStackResponseInfo@@V?$allocator@UItemStackResponseInfo@@@std@@@std@@XZ
     * @hash   -1915425808
     */
    MCAPI std::vector<struct ItemStackResponseInfo> const & getResponses() const;

};