/**
 * @file  AddVolumeEntityPacket.hpp
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
 * @brief MC class AddVolumeEntityPacket.
 *
 */
class AddVolumeEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDVOLUMEENTITYPACKET
public:
    class AddVolumeEntityPacket& operator=(class AddVolumeEntityPacket const &) = delete;
    AddVolumeEntityPacket(class AddVolumeEntityPacket const &) = delete;
    AddVolumeEntityPacket() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~AddVolumeEntityPacket();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getId@AddVolumeEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getName@AddVolumeEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?write@AddVolumeEntityPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?_read@AddVolumeEntityPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDVOLUMEENTITYPACKET
#endif
    /**
     * @symbol ??0AddVolumeEntityPacket@@QEAA@AEBVEntityContext@@VCompoundTag@@AEBVSemVersion@@@Z
     */
    MCAPI AddVolumeEntityPacket(class EntityContext const &, class CompoundTag, class SemVersion const &);

};