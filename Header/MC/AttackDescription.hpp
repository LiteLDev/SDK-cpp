/**
 * @file  AttackDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class AttackDescription.
 *
 */
class AttackDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKDESCRIPTION
public:
    class AttackDescription& operator=(class AttackDescription const &) = delete;
    AttackDescription(class AttackDescription const &) = delete;
    AttackDescription() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol ?getJsonName@AttackDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual ~AttackDescription();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?deserializeData@AttackDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @note   Virtual function table index: 3
     * @symbol ?serializeData@AttackDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTACKDESCRIPTION
#endif

};