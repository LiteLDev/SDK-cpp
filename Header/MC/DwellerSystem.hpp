/**
 * @file  DwellerSystem.hpp
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
 * @brief MC class DwellerSystem.
 *
 */
class DwellerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DWELLERSYSTEM
public:
    class DwellerSystem& operator=(class DwellerSystem const &) = delete;
    DwellerSystem(class DwellerSystem const &) = delete;
    DwellerSystem() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~DwellerSystem();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?registerEvents@DwellerSystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?tick@DwellerSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DWELLERSYSTEM
#endif

};