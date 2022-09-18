/**
 * @file  ServerInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerInstance.
 *
 */
class ServerInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERINSTANCE
public:
    class ServerInstance& operator=(class ServerInstance const &) = delete;
    ServerInstance(class ServerInstance const &) = delete;
    ServerInstance() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERINSTANCE
    /**
     * @symbol ?onAppResumed@ServerInstance@@UEAAXXZ
     * @hash   -595908060
     */
    MCVAPI void onAppResumed();
    /**
     * @symbol ?onAppSuspended@ServerInstance@@UEAAXXZ
     * @hash   674452888
     */
    MCVAPI void onAppSuspended();
    /**
     * @symbol ?onCriticalDiskError@ServerInstance@@UEAAX_NAEBW4LevelStorageState@Core@@@Z
     * @hash   -912607979
     */
    MCVAPI void onCriticalDiskError(bool, enum class Core::LevelStorageState const &);
    /**
     * @symbol ?onGameModeChanged@ServerInstance@@UEAAXXZ
     * @hash   2035691503
     */
    MCVAPI void onGameModeChanged();
    /**
     * @symbol ?onGameSessionReset@ServerInstance@@UEAAXXZ
     * @hash   -650193671
     */
    MCVAPI void onGameSessionReset();
    /**
     * @symbol ?onInternetUpdate@ServerInstance@@UEAAXXZ
     * @hash   -2078803176
     */
    MCVAPI void onInternetUpdate();
    /**
     * @symbol ?onLevelCorrupt@ServerInstance@@UEAAXXZ
     * @hash   -1835728313
     */
    MCVAPI void onLevelCorrupt();
    /**
     * @symbol ?onLevelExit@ServerInstance@@UEAAXXZ
     * @hash   -523598318
     */
    MCVAPI void onLevelExit();
    /**
     * @symbol ?onLowDiskSpace@ServerInstance@@UEAAX_N@Z
     * @hash   -1904995239
     */
    MCVAPI void onLowDiskSpace(bool);
    /**
     * @symbol ?onLowMemory@ServerInstance@@UEAAXXZ
     * @hash   1283463189
     */
    MCVAPI void onLowMemory();
    /**
     * @symbol ?onOutOfDiskSpace@ServerInstance@@UEAAX_N@Z
     * @hash   885350250
     */
    MCVAPI void onOutOfDiskSpace(bool);
    /**
     * @symbol ?onRequestResourceReload@ServerInstance@@UEAAXXZ
     * @hash   -1441699530
     */
    MCVAPI void onRequestResourceReload();
    /**
     * @symbol ?onTick@ServerInstance@@UEAAXHH@Z
     * @hash   -780888309
     */
    MCVAPI void onTick(int, int);
    /**
     * @symbol ?updateScreens@ServerInstance@@UEAAXXZ
     * @hash   609016013
     */
    MCVAPI void updateScreens();
    /**
     * @symbol ??1ServerInstance@@UEAA@XZ
     * @hash   985867508
     */
    MCVAPI ~ServerInstance();
#endif
    /**
     * @symbol ??0ServerInstance@@QEAA@AEAVIMinecraftApp@@AEBV?$not_null@V?$NonOwnerPointer@VServerInstanceEventCoordinator@@@Bedrock@@@gsl@@@Z
     * @hash   -650878220
     */
    MCAPI ServerInstance(class IMinecraftApp &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerInstanceEventCoordinator>> const &);
    /**
     * @symbol ?disconnectAllClientsWithMessage@ServerInstance@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1944874048
     */
    MCAPI void disconnectAllClientsWithMessage(std::string);
    /**
     * @symbol ?enableItemStackNetManager@ServerInstance@@QEBA_NXZ
     * @hash   -940913964
     */
    MCAPI bool enableItemStackNetManager() const;
    /**
     * @symbol ?initializeServer@ServerInstance@@QEAA_NAEAVIMinecraftApp@@AEAVAllowList@@PEAVPermissionsFile@@AEBV?$not_null@V?$NonOwnerPointer@VFilePathManager@Core@@@Bedrock@@@gsl@@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@9@55VLevelSettings@@H_NUConnectionDefinition@@7AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@9@5AEBVUUID@mce@@AEAVIMinecraftEventing@@AEAVIResourcePackRepository@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentTierManager@@@Bedrock@@@6@AEAVResourcePackManager@@V?$function@$$A6A?AV?$unique_ptr@VLevelStorage@@U?$default_delete@VLevelStorage@@@std@@@std@@AEAVScheduler@@@Z@9@V?$unique_ptr@VLevelLooseFileStorage@@U?$default_delete@VLevelLooseFileStorage@@@std@@@9@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@9@PEAVLevelData@@55V?$unique_ptr@VEducationOptions@@U?$default_delete@VEducationOptions@@@std@@@9@PEAVResourcePackManager@@V?$function@$$A6AXXZ@9@V?$function@$$A6AXXZ@9@PEAVServerMetrics@@PEAVDebugEndPoint@@7V?$shared_ptr@VFileStorageArea@Core@@@9@G77V?$optional@UPlayerMovementSettings@@@9@V?$optional@UScriptSettings@@@9@AEBVExperiments@@W4TransportLayer@@M@Z
     * @hash   259970135
     */
    MCAPI bool initializeServer(class IMinecraftApp &, class AllowList &, class PermissionsFile *, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class std::chrono::duration<__int64, struct std::ratio<1, 1>>, std::string, std::string, std::string, class LevelSettings, int, bool, struct ConnectionDefinition, bool, std::vector<std::string> const &, std::string, class mce::UUID const &, class IMinecraftEventing &, class IResourcePackRepository &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const &, class ResourcePackManager &, class std::function<std::unique_ptr<class LevelStorage> (class Scheduler &)>, std::unique_ptr<class LevelLooseFileStorage>, std::string const &, class LevelData *, std::string, std::string, std::unique_ptr<class EducationOptions>, class ResourcePackManager *, class std::function<void (void)>, class std::function<void (void)>, class ServerMetrics *, class DebugEndPoint *, bool, class std::shared_ptr<class Core::FileStorageArea>, unsigned short, bool, bool, class std::optional<struct PlayerMovementSettings>, class std::optional<struct ScriptSettings>, class Experiments const &, enum class TransportLayer, float);
    /**
     * @symbol ?leaveGameSync@ServerInstance@@QEAAXXZ
     * @hash   1237873667
     */
    MCAPI void leaveGameSync();
    /**
     * @symbol ?queueForServerThread@ServerInstance@@QEAAXV?$function@$$A6AXXZ@std@@@Z
     * @hash   1546222430
     */
    MCAPI void queueForServerThread(class std::function<void (void)>);
    /**
     * @symbol ?setWakeupFrequency@ServerInstance@@QEAAXH@Z
     * @hash   -821325498
     */
    MCAPI void setWakeupFrequency(int);
    /**
     * @symbol ?shutDownWithMessage@ServerInstance@@QEAA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1211881317
     */
    MCAPI bool shutDownWithMessage(std::string);
    /**
     * @symbol ?startServerThread@ServerInstance@@QEAAXXZ
     * @hash   1108255139
     */
    MCAPI void startServerThread();
    /**
     * @symbol ?SERVER_MAX_DELAY_BEFORE_SLOWDOWN@ServerInstance@@2V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@B
     * @hash   -953982622
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

//private:
    /**
     * @symbol ?_threadSafeExecute@ServerInstance@@AEAAXV?$function@$$A6AXXZ@std@@@Z
     * @hash   1154367466
     */
    MCAPI void _threadSafeExecute(class std::function<void (void)>);
    /**
     * @symbol ?_update@ServerInstance@@AEAAXXZ
     * @hash   -594100036
     */
    MCAPI void _update();

private:

};