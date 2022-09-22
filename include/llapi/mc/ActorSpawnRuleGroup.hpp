/**
 * @file  MC/ActorSpawnRuleGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorSpawnRuleGroup.
 *
 */
class ActorSpawnRuleGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSPAWNRULEGROUP
public:
    class ActorSpawnRuleGroup& operator=(class ActorSpawnRuleGroup const &) = delete;
    ActorSpawnRuleGroup(class ActorSpawnRuleGroup const &) = delete;
    ActorSpawnRuleGroup() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorSpawnRuleGroup();
    /**
     * @hash   2113562060
     * @vftbl  1
     * @symbol ?getRootKey@ActorSpawnRuleGroup@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getRootKey();
    /**
     * @hash   -1847579455
     * @vftbl  2
     * @symbol ?getFileType@ActorSpawnRuleGroup@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getFileType();
    /**
     * @hash   187313909
     * @vftbl  3
     * @symbol ?processPopulationControl@ActorSpawnRuleGroup@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@@Z
     */
    virtual bool processPopulationControl(std::string const &, class Json::Value &);
    /**
     * @hash   1511933593
     * @vftbl  4
     * @symbol ?readResourceFiles@ActorSpawnRuleGroup@@MEAAXAEAVResourcePackManager@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@@std@@@2@@std@@@Z
     */
    virtual void readResourceFiles(class ResourcePackManager &, class std::unordered_map<std::string, struct ActorSpawnRuleDefinition, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct ActorSpawnRuleDefinition>>> &);
    /**
     * @hash   523482581
     * @symbol ??0ActorSpawnRuleGroup@@QEAA@AEAVResourcePackManager@@AEAVIWorldRegistriesProvider@@@Z
     */
    MCAPI ActorSpawnRuleGroup(class ResourcePackManager &, class IWorldRegistriesProvider &);
    /**
     * @hash   -875599829
     * @symbol ?getActorSpawnPool@ActorSpawnRuleGroup@@QEBAHAEBUActorDefinitionIdentifier@@@Z
     */
    MCAPI int getActorSpawnPool(struct ActorDefinitionIdentifier const &) const;
    /**
     * @hash   1962006737
     * @symbol ?getDelayEnd@ActorSpawnRuleGroup@@QEBAHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI int getDelayEnd(std::string) const;
    /**
     * @hash   1886357782
     * @symbol ?offSetDelayByCurrentTick@ActorSpawnRuleGroup@@QEAAXAEBUTick@@@Z
     */
    MCAPI void offSetDelayByCurrentTick(struct Tick const &);
    /**
     * @hash   283443161
     * @symbol ?resetDelayEnd@ActorSpawnRuleGroup@@QEAAXVMobSpawnRules@@_KAEAVRandom@@@Z
     */
    MCAPI void resetDelayEnd(class MobSpawnRules, unsigned __int64, class Random &);

};