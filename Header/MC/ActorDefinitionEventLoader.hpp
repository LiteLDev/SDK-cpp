/**
 * @file  MC/ActorDefinitionEventLoader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionEventLoader.
 *
 */
class ActorDefinitionEventLoader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONEVENTLOADER
public:
    class ActorDefinitionEventLoader& operator=(class ActorDefinitionEventLoader const &) = delete;
    ActorDefinitionEventLoader(class ActorDefinitionEventLoader const &) = delete;
    ActorDefinitionEventLoader() = delete;
#endif

public:
    /**
     * @hash   142492653
     * @symbol ?loadEvent@ActorDefinitionEventLoader@@SA?AVActorDefinitionEvent@@VValue@Json@@AEBVSemVersion@@1PEBVActorEventResponseFactory@@@Z
     */
    MCAPI static class ActorDefinitionEvent loadEvent(class Json::Value, class SemVersion const &, class SemVersion const &, class ActorEventResponseFactory const *);

//private:
    /**
     * @hash   1542790985
     * @symbol ?_loadCollection@ActorDefinitionEventLoader@@CAXAEAVActorDefinitionEvent@@AEBVValue@Json@@AEBVSemVersion@@PEBVActorEventResponseFactory@@@Z
     */
    MCAPI static void _loadCollection(class ActorDefinitionEvent &, class Json::Value const &, class SemVersion const &, class ActorEventResponseFactory const *);
    /**
     * @hash   667542837
     * @symbol ?_loadEvent@ActorDefinitionEventLoader@@CA?AVActorDefinitionEvent@@AEAVValue@Json@@AEBVSemVersion@@PEBVActorEventResponseFactory@@@Z
     */
    MCAPI static class ActorDefinitionEvent _loadEvent(class Json::Value &, class SemVersion const &, class ActorEventResponseFactory const *);

private:

};