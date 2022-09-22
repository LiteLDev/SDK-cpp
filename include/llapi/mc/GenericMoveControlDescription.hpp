/**
 * @file  MC/GenericMoveControlDescription.hpp
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
 * @brief MC class GenericMoveControlDescription.
 *
 */
class GenericMoveControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENERICMOVECONTROLDESCRIPTION
public:
    class GenericMoveControlDescription& operator=(class GenericMoveControlDescription const &) = delete;
    GenericMoveControlDescription(class GenericMoveControlDescription const &) = delete;
    GenericMoveControlDescription() = delete;
#endif

public:
    /**
     * @hash   581298621
     * @vftbl  0
     * @symbol ?getJsonName@GenericMoveControlDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~GenericMoveControlDescription();
    /**
     * @hash   1432832598
     * @vftbl  2
     * @symbol ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   334013664
     * @vftbl  3
     * @symbol ?serializeData@MoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};