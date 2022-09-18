/**
 * @file  PhotoTransferPacket.hpp
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
 * @brief MC class PhotoTransferPacket.
 *
 */
class PhotoTransferPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHOTOTRANSFERPACKET
public:
    class PhotoTransferPacket& operator=(class PhotoTransferPacket const &) = delete;
    PhotoTransferPacket(class PhotoTransferPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -415767565
     */
    virtual ~PhotoTransferPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PhotoTransferPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   2113502793
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PhotoTransferPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1025779466
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PhotoTransferPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1613036335
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PhotoTransferPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1098769167
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PhotoTransferPacket@@QEAA@XZ
     * @hash   -112461999
     */
    MCAPI PhotoTransferPacket();

};