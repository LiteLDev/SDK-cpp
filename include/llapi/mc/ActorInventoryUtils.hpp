/**
 * @file  ActorInventoryUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorInventoryUtils.
 *
 */
namespace ActorInventoryUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?forEachItemInContainer@ActorInventoryUtils@@YAXAEBVContainer@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
     * @hash   -1948656172
     */
    MCAPI void forEachItemInContainer(class Container const &, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @symbol ?forEachItemOnActor@ActorInventoryUtils@@YAXAEBVActor@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
     * @hash   -1238928109
     */
    MCAPI void forEachItemOnActor(class Actor const &, class std::function<void (class ItemStack const &)>);
    /**
     * @symbol ?forEachItemOnActor@ActorInventoryUtils@@YAXAEBVActor@@W4EquipmentSlot@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
     * @hash   -2015649243
     */
    MCAPI void forEachItemOnActor(class Actor const &, enum class EquipmentSlot, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @symbol ?forEachItemOnActorHotbar@ActorInventoryUtils@@YAXAEBVActor@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
     * @hash   1628746140
     */
    MCAPI void forEachItemOnActorHotbar(class Actor const &, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @symbol ?forEachItemOnActorInventory@ActorInventoryUtils@@YAXAEBVActor@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
     * @hash   -2081185598
     */
    MCAPI void forEachItemOnActorInventory(class Actor const &, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @symbol ?getItem@ActorInventoryUtils@@YAPEBVItemStack@@AEBVActor@@W4EquipmentSlot@@H@Z
     * @hash   -2013825451
     */
    MCAPI class ItemStack const * getItem(class Actor const &, enum class EquipmentSlot, int);
    /**
     * @symbol ?queryActorEquipmentSlotForItem@ActorInventoryUtils@@YA_NAEBVActor@@AEBVItemInstance@@W4EquipmentSlot@@AEBVCommandIntegerRange@@3@Z
     * @hash   -1380786897
     */
    MCAPI bool queryActorEquipmentSlotForItem(class Actor const &, class ItemInstance const &, enum class EquipmentSlot, class CommandIntegerRange const &, class CommandIntegerRange const &);
    /**
     * @symbol ?queryActorForItem@ActorInventoryUtils@@YA_NAEBVActor@@AEBVItemInstance@@AEBVCommandIntegerRange@@@Z
     * @hash   1455014904
     */
    MCAPI bool queryActorForItem(class Actor const &, class ItemInstance const &, class CommandIntegerRange const &);

};