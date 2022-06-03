// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CurseBindingEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CURSEBINDINGENCHANT
public:
    class CurseBindingEnchant& operator=(class CurseBindingEnchant const &) = delete;
    CurseBindingEnchant(class CurseBindingEnchant const &) = delete;
    CurseBindingEnchant() = delete;
#endif

public:
    /*0*/ virtual ~CurseBindingEnchant();
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*
    inline bool isTreasureOnly() const{
        bool (CurseBindingEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?isTreasureOnly@CurseBindingEnchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI CurseBindingEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int, bool);

protected:

private:

};