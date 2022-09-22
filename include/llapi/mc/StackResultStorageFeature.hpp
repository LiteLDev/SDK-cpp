/**
 * @file  MC/StackResultStorageFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StackResultStorageFeature.
 *
 */
class StackResultStorageFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STACKRESULTSTORAGEFEATURE
public:
    class StackResultStorageFeature& operator=(class StackResultStorageFeature const &) = delete;
    StackResultStorageFeature(class StackResultStorageFeature const &) = delete;
    StackResultStorageFeature() = delete;
#endif

public:

//protected:
    /**
     * @hash   1228094499
     * @symbol ??0StackResultStorageFeature@@IEAA@AEBVWeakStorageFeature@@@Z
     */
    MCAPI StackResultStorageFeature(class WeakStorageFeature const &);
    /**
     * @hash   1108897049
     * @symbol ?_getStackRef@StackResultStorageFeature@@IEBAAEAVIFeature@@XZ
     */
    MCAPI class IFeature & _getStackRef() const;
    /**
     * @hash   1351592034
     * @symbol ?_hasValue@StackResultStorageFeature@@IEBA_NXZ
     */
    MCAPI bool _hasValue() const;

protected:

};