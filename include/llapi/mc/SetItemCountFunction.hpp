/**
 * @file  SetItemCountFunction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetItemCountFunction.
 *
 */
class SetItemCountFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETITEMCOUNTFUNCTION
public:
    class SetItemCountFunction& operator=(class SetItemCountFunction const &) = delete;
    SetItemCountFunction(class SetItemCountFunction const &) = delete;
    SetItemCountFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   365314236
     */
    virtual ~SetItemCountFunction();
    /**
     * @vftbl  1
     * @symbol ?apply@SetItemCountFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   -1152252114
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl  3
     * @symbol ?apply@SetItemCountFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   1368706083
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol ?deserialize@SetItemCountFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
     * @hash   1064151439
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

};