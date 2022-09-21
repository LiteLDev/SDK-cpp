/**
 * @file  MC/DynamicProperties.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DynamicProperties.
 *
 */
class DynamicProperties {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICPROPERTIES
public:
    class DynamicProperties& operator=(class DynamicProperties const &) = delete;
    DynamicProperties(class DynamicProperties const &) = delete;
    DynamicProperties() = delete;
#endif

public:
    /**
     * @hash   -1221118428
     * @symbol ?deserialize@DynamicProperties@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void deserialize(class CompoundTag const &);
    /**
     * @hash   765391335
     * @symbol ?getCollectionCount@DynamicProperties@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCollectionCount() const;
    /**
     * @hash   -6836119
     * @symbol ?getDynamicProperty@DynamicProperties@@QEAAPEAV?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@0@Z
     */
    MCAPI class std::variant<float, bool, std::string> * getDynamicProperty(std::string const &, std::string const &);
    /**
     * @hash   -1183844239
     * @symbol ?removeDynamicProperty@DynamicProperties@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI bool removeDynamicProperty(std::string const &, std::string const &);
    /**
     * @hash   421912446
     * @symbol ?serialize@DynamicProperties@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;
    /**
     * @hash   -1497848298
     * @symbol ?setDynamicProperty@DynamicProperties@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@3@0@Z
     */
    MCAPI void setDynamicProperty(std::string const &, class std::variant<float, bool, std::string> const &, std::string const &);
    /**
     * @hash   -2041691006
     * @symbol ?writeToLevelStorage@DynamicProperties@@QEAAXAEAVLevelStorage@@@Z
     */
    MCAPI void writeToLevelStorage(class LevelStorage &);
    /**
     * @hash   491162142
     * @symbol ??1DynamicProperties@@QEAA@XZ
     */
    MCAPI ~DynamicProperties();
    /**
     * @hash   -1129460001
     * @symbol ?STORAGE_TAG@DynamicProperties@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STORAGE_TAG;
    /**
     * @symbol ?bindType@DynamicProperties@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   2130049247
     * @symbol ?readFromLevelStorage@DynamicProperties@@SA?AV?$unique_ptr@VDynamicProperties@@U?$default_delete@VDynamicProperties@@@std@@@std@@AEAVLevelStorage@@@Z
     */
    MCAPI static std::unique_ptr<class DynamicProperties> readFromLevelStorage(class LevelStorage &);
    /**
     * @hash   -1865531306
     * @symbol ?validateDynamicProperty@DynamicProperties@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUDynamicPropertyDefinition@@AEBV23@PEBV?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@3@@Z
     */
    MCAPI static std::string validateDynamicProperty(struct DynamicPropertyDefinition const *, std::string const &, class std::variant<float, bool, std::string> const *);

//private:
    /**
     * @symbol ?_getPropertyVariant@DynamicProperties@@CA?AVmeta_any@entt@@AEBV?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
     */
    MCAPI static class entt::meta_any _getPropertyVariant(class std::variant<float, bool, std::string> const &);

private:

};