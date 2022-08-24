/**
 * @file  GuardianAttackDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GuardianAttackDefinition.
 *
 */
class GuardianAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIANATTACKDEFINITION
public:
    class GuardianAttackDefinition& operator=(class GuardianAttackDefinition const &) = delete;
    GuardianAttackDefinition(class GuardianAttackDefinition const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~GuardianAttackDefinition();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?validateMobType@GuardianAttackDefinition@@UEAA_NAEAVMob@@@Z
     */
    virtual bool validateMobType(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GUARDIANATTACKDEFINITION
#endif
    /**
     * @symbol ??0GuardianAttackDefinition@@QEAA@XZ
     */
    MCAPI GuardianAttackDefinition();
    /**
     * @symbol ?initialize@GuardianAttackDefinition@@QEAAXAEAVEntityContext@@AEAVGuardianAttackGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class GuardianAttackGoal &);
    /**
     * @symbol ?buildSchema@GuardianAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGuardianAttackDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GuardianAttackDefinition>> &);

};