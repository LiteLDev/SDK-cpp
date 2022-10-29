/**
 * @file  ItemStackRequestActionBeaconPayment.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionBeaconPayment.
 *
 */
class ItemStackRequestActionBeaconPayment {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONBEACONPAYMENT
public:
    class ItemStackRequestActionBeaconPayment& operator=(class ItemStackRequestActionBeaconPayment const &) = delete;
    ItemStackRequestActionBeaconPayment(class ItemStackRequestActionBeaconPayment const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1124607776
     */
    virtual ~ItemStackRequestActionBeaconPayment();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   2096281682
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1367561133
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?_write@ItemStackRequestActionBeaconPayment@@MEBAXAEAVBinaryStream@@@Z
     * @hash   -1978552844
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl  5
     * @symbol ?_read@ItemStackRequestActionBeaconPayment@@MEAA_NAEAVReadOnlyBinaryStream@@@Z
     * @hash   1244737708
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestActionBeaconPayment@@QEAA@XZ
     * @hash   88178126
     */
    MCAPI ItemStackRequestActionBeaconPayment();
    /**
     * @symbol ?getPrimaryEffectId@ItemStackRequestActionBeaconPayment@@QEBAHXZ
     * @hash   1932463254
     */
    MCAPI int getPrimaryEffectId() const;
    /**
     * @symbol ?getSecondaryEffectId@ItemStackRequestActionBeaconPayment@@QEBAHXZ
     * @hash   690591722
     */
    MCAPI int getSecondaryEffectId() const;

};