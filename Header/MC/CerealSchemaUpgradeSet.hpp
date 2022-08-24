/**
 * @file  CerealSchemaUpgradeSet.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CerealSchemaUpgradeSet.
 *
 */
class CerealSchemaUpgradeSet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALSCHEMAUPGRADESET
public:
    class CerealSchemaUpgradeSet& operator=(class CerealSchemaUpgradeSet const &) = delete;
    CerealSchemaUpgradeSet(class CerealSchemaUpgradeSet const &) = delete;
    CerealSchemaUpgradeSet() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREALSCHEMAUPGRADESET
#endif
    /**
     * @symbol ?findNext@CerealSchemaUpgradeSet@@QEBA?AV?$shared_ptr@VCerealSchemaUpgrade@@@std@@AEBVSemVersion@@@Z
     */
    MCAPI class std::shared_ptr<class CerealSchemaUpgrade> findNext(class SemVersion const &) const;
    /**
     * @symbol ?forEach@CerealSchemaUpgradeSet@@QEAA_NV?$function@$$A6A_NV?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z@std@@@Z
     */
    MCAPI bool forEach(class std::function<bool (class std::shared_ptr<class CerealSchemaUpgrade>)>);

};