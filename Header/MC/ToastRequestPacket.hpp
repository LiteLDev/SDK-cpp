/**
 * @file  ToastRequestPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ToastRequestPacket.
 *
 */
class ToastRequestPacket : public Packet {

#define AFTER_EXTRA
public:
    string mTitle;
    string mMessage;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOASTREQUESTPACKET
public:
    class ToastRequestPacket& operator=(class ToastRequestPacket const &) = delete;
    ToastRequestPacket(class ToastRequestPacket const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ToastRequestPacket();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getId@ToastRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getName@ToastRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?write@ToastRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?_read@ToastRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TOASTREQUESTPACKET
#endif
    /**
     * @symbol ??0ToastRequestPacket@@QEAA@XZ
     */
    MCAPI ToastRequestPacket();
    /**
     * @symbol ??0ToastRequestPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI ToastRequestPacket(std::string const &, std::string const &);

};