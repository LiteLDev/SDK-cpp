/**
 * @file  ContainerClosePacket.hpp
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
 * @brief MC class ContainerClosePacket.
 *
 */
class ContainerClosePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERCLOSEPACKET
public:
    class ContainerClosePacket& operator=(class ContainerClosePacket const &) = delete;
    ContainerClosePacket(class ContainerClosePacket const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ContainerClosePacket();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getId@ContainerClosePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getName@ContainerClosePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?write@ContainerClosePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?_read@ContainerClosePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERCLOSEPACKET
#endif
    /**
     * @symbol ??0ContainerClosePacket@@QEAA@XZ
     */
    MCAPI ContainerClosePacket();
    /**
     * @symbol ??0ContainerClosePacket@@QEAA@W4ContainerID@@_N@Z
     */
    MCAPI ContainerClosePacket(enum ContainerID, bool);

};