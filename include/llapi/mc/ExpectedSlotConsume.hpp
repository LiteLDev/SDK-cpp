/**
 * @file  ExpectedSlotConsume.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExpectedSlotConsume.
 *
 */
class ExpectedSlotConsume {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPECTEDSLOTCONSUME
public:
    class ExpectedSlotConsume& operator=(class ExpectedSlotConsume const &) = delete;
    ExpectedSlotConsume(class ExpectedSlotConsume const &) = delete;
    ExpectedSlotConsume() = delete;
#endif

public:
    /**
     * @symbol ??0ExpectedSlotConsume@@QEAA@W4ContainerEnumName@@EAEBVItemStack@@E@Z
     * @hash   460668694
     */
    MCAPI ExpectedSlotConsume(enum ContainerEnumName, unsigned char, class ItemStack const &, unsigned char);

};