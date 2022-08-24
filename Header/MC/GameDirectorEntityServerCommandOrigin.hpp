/**
 * @file  GameDirectorEntityServerCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ActorServerCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameDirectorEntityServerCommandOrigin.
 *
 */
class GameDirectorEntityServerCommandOrigin : public ActorServerCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEDIRECTORENTITYSERVERCOMMANDORIGIN
public:
    class GameDirectorEntityServerCommandOrigin& operator=(class GameDirectorEntityServerCommandOrigin const &) = delete;
    GameDirectorEntityServerCommandOrigin(class GameDirectorEntityServerCommandOrigin const &) = delete;
    GameDirectorEntityServerCommandOrigin() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~GameDirectorEntityServerCommandOrigin();
    /**
     * @note   Virtual function table index: 9
     * @symbol ?getPermissionsLevel@GameDirectorEntityServerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @note   Virtual function table index: 10
     * @symbol ?clone@GameDirectorEntityServerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @note   Virtual function table index: 17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@GameDirectorEntityServerCommandOrigin@@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @note   Virtual function table index: 18
     * @symbol ?isSelectorExpansionAllowed@GameDirectorEntityServerCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @note   Virtual function table index: 23
     * @symbol ?getOriginType@GameDirectorEntityServerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum CommandOriginType getOriginType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEDIRECTORENTITYSERVERCOMMANDORIGIN
#endif
    /**
     * @symbol ??0GameDirectorEntityServerCommandOrigin@@QEAA@UActorUniqueID@@AEAVLevel@@@Z
     */
    MCAPI GameDirectorEntityServerCommandOrigin(struct ActorUniqueID, class Level &);
    /**
     * @symbol ??0GameDirectorEntityServerCommandOrigin@@QEAA@AEAVActor@@@Z
     */
    MCAPI GameDirectorEntityServerCommandOrigin(class Actor &);
    /**
     * @symbol ?load@GameDirectorEntityServerCommandOrigin@@SA?AV?$unique_ptr@VGameDirectorEntityServerCommandOrigin@@U?$default_delete@VGameDirectorEntityServerCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
     */
    MCAPI static std::unique_ptr<class GameDirectorEntityServerCommandOrigin> load(class CompoundTag const &, class Level &);

};