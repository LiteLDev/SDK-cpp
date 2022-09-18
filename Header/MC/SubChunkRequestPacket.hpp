/**
 * @file  SubChunkRequestPacket.hpp
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
 * @brief MC class SubChunkRequestPacket.
 *
 */
class SubChunkRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKREQUESTPACKET
public:
    class SubChunkRequestPacket& operator=(class SubChunkRequestPacket const &) = delete;
    SubChunkRequestPacket(class SubChunkRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -366113096
     */
    virtual ~SubChunkRequestPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SubChunkRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1565635316
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SubChunkRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -712938079
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SubChunkRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   660632806
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SubChunkRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   115722854
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SubChunkRequestPacket@@QEAA@XZ
     * @hash   831821478
     */
    MCAPI SubChunkRequestPacket();

};