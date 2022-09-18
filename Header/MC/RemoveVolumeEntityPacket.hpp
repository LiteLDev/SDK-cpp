/**
 * @file  RemoveVolumeEntityPacket.hpp
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
 * @brief MC class RemoveVolumeEntityPacket.
 *
 */
class RemoveVolumeEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEVOLUMEENTITYPACKET
public:
    class RemoveVolumeEntityPacket& operator=(class RemoveVolumeEntityPacket const &) = delete;
    RemoveVolumeEntityPacket(class RemoveVolumeEntityPacket const &) = delete;
    RemoveVolumeEntityPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   222079731
     */
    virtual ~RemoveVolumeEntityPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@RemoveVolumeEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1908330933
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@RemoveVolumeEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1750073442
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@RemoveVolumeEntityPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1052447941
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@RemoveVolumeEntityPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -612998683
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0RemoveVolumeEntityPacket@@QEAA@AEAVEntityContext@@@Z
     * @hash   -1690039620
     */
    MCAPI RemoveVolumeEntityPacket(class EntityContext &);

};