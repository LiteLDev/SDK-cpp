/**
 * @file  ServerLevel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerLevel.
 *
 */
class ServerLevel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLEVEL
public:
    class ServerLevel& operator=(class ServerLevel const &) = delete;
    ServerLevel(class ServerLevel const &) = delete;
    ServerLevel() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLEVEL
    /**
     * @note   Virtual function table index: -1
     * @symbol ?consolidateLevelChunkMetaData@ServerLevel@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void consolidateLevelChunkMetaData(class LevelChunk &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?createDimension@ServerLevel@@UEAAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCVAPI class Dimension * createDimension(class AutomaticID<class Dimension, int>);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?decrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
     */
    MCVAPI void decrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getClientResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ
     */
    MCVAPI class ResourcePackManager * getClientResourcePackManager() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getLevelChunkMetaDataDictionary@ServerLevel@@UEBA?AV?$shared_ptr@VLevelChunkMetaDataDictionary@@@std@@XZ
     */
    MCVAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getLevelEventCoordinator@ServerLevel@@UEAAAEAVLevelEventCoordinator@@XZ
     */
    MCVAPI class LevelEventCoordinator & getLevelEventCoordinator();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getPositionTrackerDBServer@ServerLevel@@UEBAPEAVPositionTrackingDBServer@PositionTrackingDB@@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer * getPositionTrackerDBServer() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getServerResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ
     */
    MCVAPI class ResourcePackManager * getServerResourcePackManager() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getThreadRandom@ServerLevel@@UEBAAEAVRandom@@XZ
     */
    MCVAPI class Random & getThreadRandom() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getTradeTables@ServerLevel@@UEAAPEAVTradeTables@@XZ
     */
    MCVAPI class TradeTables * getTradeTables();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?incrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
     */
    MCVAPI void incrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?initialize@ServerLevel@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@AEBVExperiments@@PEBV23@@Z
     */
    MCVAPI bool initialize(std::string const &, class LevelSettings const &, class LevelData *, class Experiments const &, std::string const *);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?initializeLevelChunkMetaData@ServerLevel@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void initializeLevelChunkMetaData(class LevelChunk &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadFunctionManager@ServerLevel@@UEAAXXZ
     */
    MCVAPI void loadFunctionManager();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onChunkLoaded@ServerLevel@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?registerEventCoordinators@ServerLevel@@UEAAXXZ
     */
    MCVAPI void registerEventCoordinators();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?runCommand@ServerLevel@@UEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z
     */
    MCVAPI void runCommand(class Command &, class CommandOrigin &, enum CommandOriginSystem);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?runCommand@ServerLevel@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z
     */
    MCVAPI void runCommand(class HashedString const &, class CommandOrigin &, enum CommandOriginSystem, enum CurrentCmdVersion);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?saveAdditionalData@ServerLevel@@UEAAXXZ
     */
    MCVAPI void saveAdditionalData();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?saveDynamicProperties@ServerLevel@@UEAAXXZ
     */
    MCVAPI void saveDynamicProperties();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?setCommandsEnabled@ServerLevel@@UEAAX_N@Z
     */
    MCVAPI void setCommandsEnabled(bool);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?setServerTickOffset@ServerLevel@@UEAAX_J@Z
     */
    MCVAPI void setServerTickOffset(__int64);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?setWorldTemplateOptionsUnlocked@ServerLevel@@UEAAXXZ
     */
    MCVAPI void setWorldTemplateOptionsUnlocked();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?tick@ServerLevel@@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?updateSleepingPlayerList@ServerLevel@@UEAAXXZ
     */
    MCVAPI void updateSleepingPlayerList();
#endif
    /**
     * @symbol ??0ServerLevel@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@V?$unique_ptr@VLevelStorage@@U?$default_delete@VLevelStorage@@@std@@@std@@V?$unique_ptr@VLevelLooseFileStorage@@U?$default_delete@VLevelLooseFileStorage@@@std@@@4@AEAVIMinecraftEventing@@AEAVResourcePackManager@@4V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@2@AEAVMinecraftCommands@@AEAVScheduler@@AEBV?$not_null@V?$NonOwnerPointer@VIEntityRegistryOwner@@@Bedrock@@@2@V?$WeakRefT@UEntityRefTraits@@@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@4@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@4@VItemRegistryRef@@V?$weak_ptr@VBlockTypeRegistry@@@4@@Z
     */
    MCAPI ServerLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing &, class ResourcePackManager &, class ResourcePackManager &, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class MinecraftCommands &, class Scheduler &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const &, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, class std::weak_ptr<class BlockTypeRegistry>);
    /**
     * @symbol ?getCommands@ServerLevel@@QEAAAEAVMinecraftCommands@@XZ
     */
    MCAPI class MinecraftCommands & getCommands();
    /**
     * @symbol ?getDynamicPropertiesDefinition@ServerLevel@@QEAAAEAVDynamicPropertiesDefinition@@XZ
     */
    MCAPI class DynamicPropertiesDefinition & getDynamicPropertiesDefinition();
    /**
     * @symbol ?getFunctionManager@ServerLevel@@QEAAAEAVFunctionManager@@XZ
     */
    MCAPI class FunctionManager & getFunctionManager();
    /**
     * @symbol ?getMobEvents@ServerLevel@@QEAAAEAVMobEvents@@XZ
     */
    MCAPI class MobEvents & getMobEvents();
    /**
     * @symbol ?getMobEvents@ServerLevel@@QEBAAEBVMobEvents@@XZ
     */
    MCAPI class MobEvents const & getMobEvents() const;
    /**
     * @symbol ?getOrAddDynamicProperties@ServerLevel@@QEAAAEAVDynamicProperties@@XZ
     */
    MCAPI class DynamicProperties & getOrAddDynamicProperties();
    /**
     * @symbol ?setShouldSendSleepMessage@ServerLevel@@QEAAX_N@Z
     */
    MCAPI void setShouldSendSleepMessage(bool);
    /**
     * @symbol ?shouldSendSleepMessage@ServerLevel@@QEBA_NXZ
     */
    MCAPI bool shouldSendSleepMessage() const;
    /**
     * @symbol ?tryGetVolumeEntityManager@ServerLevel@@QEBA?AV?$NonOwnerPointer@VVolumeEntityManagerServer@@@Bedrock@@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class VolumeEntityManagerServer> tryGetVolumeEntityManager() const;

};