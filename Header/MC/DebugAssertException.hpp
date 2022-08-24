/**
 * @file  DebugAssertException.hpp
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
 * @brief MC class DebugAssertException.
 *
 */
class DebugAssertException {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGASSERTEXCEPTION
public:
    class DebugAssertException& operator=(class DebugAssertException const &) = delete;
    DebugAssertException() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~DebugAssertException();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?what@DebugAssertException@@UEBAPEBDXZ
     */
    virtual char const * what() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEBUGASSERTEXCEPTION
#endif
    /**
     * @symbol ??0DebugAssertException@@QEAA@PEBD00H00@Z
     */
    MCAPI DebugAssertException(char const *, char const *, char const *, int, char const *, char const *);
    /**
     * @symbol ??0DebugAssertException@@QEAA@AEBV0@@Z
     */
    MCAPI DebugAssertException(class DebugAssertException const &);
    /**
     * @symbol ?isEnabled@DebugAssertException@@SA_NXZ
     */
    MCAPI static bool isEnabled();

//private:

private:
MCAPI static char const *const WHAT;

};