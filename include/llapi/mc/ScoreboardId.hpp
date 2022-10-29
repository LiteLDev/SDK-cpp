/**
 * @file  ScoreboardId.hpp
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
 * @brief MC structure ScoreboardId.
 *
 */
struct ScoreboardId {

#define AFTER_EXTRA
// Add Member There
public:
    __int64 id;
    void* null;
#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0ScoreboardId@@QEAA@_J@Z
     * @hash   1793750933
     */
    MCAPI ScoreboardId(__int64);
    /**
     * @symbol ??0ScoreboardId@@QEAA@XZ
     * @hash   -868814853
     */
    MCAPI ScoreboardId();
    /**
     * @symbol ??0ScoreboardId@@QEAA@AEBU0@@Z
     * @hash   1254795343
     */
    MCAPI ScoreboardId(struct ScoreboardId const &);
    /**
     * @symbol ?getHash@ScoreboardId@@QEBA_KXZ
     * @hash   -744743355
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol ?getIdentityDef@ScoreboardId@@QEBAAEBVIdentityDefinition@@XZ
     * @hash   1629447260
     */
    MCAPI class IdentityDefinition const & getIdentityDef() const;
    /**
     * @symbol ?isValid@ScoreboardId@@QEBA_NXZ
     * @hash   1161249302
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??BScoreboardId@@QEBA_NXZ
     * @hash   988348786
     */
    MCAPI operator bool() const;
    /**
     * @symbol ??9ScoreboardId@@QEBA_NAEBU0@@Z
     * @hash   -859226807
     */
    MCAPI bool operator!=(struct ScoreboardId const &) const;
    /**
     * @symbol ??EScoreboardId@@QEAAAEAU0@XZ
     * @hash   -264257862
     */
    MCAPI struct ScoreboardId & operator++();
    /**
     * @symbol ??4ScoreboardId@@QEAAAEAU0@AEBU0@@Z
     * @hash   -1981783802
     */
    MCAPI struct ScoreboardId & operator=(struct ScoreboardId const &);
    /**
     * @symbol ??8ScoreboardId@@QEBA_NAEBU0@@Z
     * @hash   -751976250
     */
    MCAPI bool operator==(struct ScoreboardId const &) const;
    /**
     * @symbol ?INVALID@ScoreboardId@@2U1@A
     * @hash   663519897
     */
    MCAPI static struct ScoreboardId INVALID;

};