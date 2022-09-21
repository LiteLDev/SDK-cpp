/**
 * @file  MC/ActorInWeatherTest.hpp
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
 * @brief MC class ActorInWeatherTest.
 *
 */
class ActorInWeatherTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINWEATHERTEST
public:
    class ActorInWeatherTest& operator=(class ActorInWeatherTest const &) = delete;
    ActorInWeatherTest(class ActorInWeatherTest const &) = delete;
    ActorInWeatherTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorInWeatherTest();
    /**
     * @hash   -1763809426
     * @vftbl  1
     * @symbol ?setup@ActorInWeatherTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @hash   373687134
     * @vftbl  2
     * @symbol ?evaluate@ActorInWeatherTest@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -1694470652
     * @vftbl  4
     * @symbol ?getName@ActorInWeatherTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @hash   -589080589
     * @vftbl  6
     * @symbol ?_serializeValue@ActorInWeatherTest@@MEBA?AVValue@Json@@XZ
     */
    virtual class Json::Value _serializeValue() const;

};