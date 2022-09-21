/**
 * @file  MC/ActorInVillageTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInVillageTest.
 *
 */
class ActorInVillageTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINVILLAGETEST
public:
    class ActorInVillageTest& operator=(class ActorInVillageTest const &) = delete;
    ActorInVillageTest(class ActorInVillageTest const &) = delete;
    ActorInVillageTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorInVillageTest();
    /**
     * @hash   -2058444458
     * @vftbl  2
     * @symbol ?evaluate@ActorInVillageTest@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -1353375140
     * @vftbl  4
     * @symbol ?getName@ActorInVillageTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};