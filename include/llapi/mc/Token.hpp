/**
 * @file  Token.hpp
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
 * @brief MC structure Token.
 *
 */
struct Token {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOKEN
public:
    struct Token& operator=(struct Token const &) = delete;
    Token(struct Token const &) = delete;
    Token() = delete;
#endif

public:
    /**
     * @symbol ??0Token@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2138129068
     */
    MCAPI Token(std::string const &);
    /**
     * @symbol ?getText@Token@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   -2132406413
     */
    MCAPI std::string const & getText(std::string const &) const;
    /**
     * @symbol ??1Token@@QEAA@XZ
     * @hash   1566319093
     */
    MCAPI ~Token();
    /**
     * @symbol ?tokenize@Token@@SA?AV?$vector@UToken@@V?$allocator@UToken@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   1679338845
     */
    MCAPI static std::vector<struct Token> tokenize(std::string const &);

//protected:
    /**
     * @symbol ?_parseRandom@Token@@IEAA_NXZ
     * @hash   -898861429
     */
    MCAPI bool _parseRandom();

};