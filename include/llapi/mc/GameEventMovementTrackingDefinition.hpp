/**
 * @file  MC/GameEventMovementTrackingDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventMovementTrackingDefinition.
 *
 */
class GameEventMovementTrackingDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMOVEMENTTRACKINGDEFINITION
public:
    class GameEventMovementTrackingDefinition& operator=(class GameEventMovementTrackingDefinition const &) = delete;
    GameEventMovementTrackingDefinition(class GameEventMovementTrackingDefinition const &) = delete;
    GameEventMovementTrackingDefinition() = delete;
#endif

public:
    /**
     * @hash   305523445
     * @symbol ?initialize@GameEventMovementTrackingDefinition@@QEBAXAEAVEntityContext@@AEAVGameEventMovementTrackingComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class GameEventMovementTrackingComponent &) const;
    /**
     * @hash   2142193572
     * @symbol ?buildSchema@GameEventMovementTrackingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGameEventMovementTrackingDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GameEventMovementTrackingDefinition>> &);

};