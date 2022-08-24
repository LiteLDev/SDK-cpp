/**
 * @file  SyncActorPropertyPacket.hpp
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
 * @brief MC class SyncActorPropertyPacket.
 *
 */
class SyncActorPropertyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCACTORPROPERTYPACKET
public:
    class SyncActorPropertyPacket& operator=(class SyncActorPropertyPacket const &) = delete;
    SyncActorPropertyPacket(class SyncActorPropertyPacket const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SyncActorPropertyPacket();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getId@SyncActorPropertyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getName@SyncActorPropertyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?write@SyncActorPropertyPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?readExtended@SyncActorPropertyPacket@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @note   Virtual function table index: 6
     * @symbol ?_read@SyncActorPropertyPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SYNCACTORPROPERTYPACKET
#endif
    /**
     * @symbol ??0SyncActorPropertyPacket@@QEAA@XZ
     */
    MCAPI SyncActorPropertyPacket();
    /**
     * @symbol ??0SyncActorPropertyPacket@@QEAA@AEBVActor@@@Z
     */
    MCAPI SyncActorPropertyPacket(class Actor const &);

};