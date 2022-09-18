/**
 * @file  Village.hpp
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
 * @brief MC class Village.
 *
 */
class Village {

#define AFTER_EXTRA
// Add Member There
public:
struct DwellerData {
    DwellerData() = delete;
    DwellerData(DwellerData const&) = delete;
    DwellerData(DwellerData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGE
public:
    class Village& operator=(class Village const &) = delete;
    Village(class Village const &) = delete;
    Village() = delete;
#endif

public:
    /**
     * @symbol ??0Village@@QEAA@AEAVDimension@@VUUID@mce@@AEBVBlockPos@@@Z
     * @hash   -1814740295
     */
    MCAPI Village(class Dimension &, class mce::UUID, class BlockPos const &);
    /**
     * @symbol ?addActorToVillage@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@@Z
     * @hash   -846055733
     */
    MCAPI void addActorToVillage(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @symbol ?addAggressor@Village@@QEAAXAEBVMob@@@Z
     * @hash   101889862
     */
    MCAPI void addAggressor(class Mob const &);
    /**
     * @symbol ?addPOI@Village@@QEAA_NV?$weak_ptr@VPOIInstance@@@std@@@Z
     * @hash   -67112338
     */
    MCAPI bool addPOI(class std::weak_ptr<class POIInstance>);
    /**
     * @symbol ?addVillager@Village@@QEAAXAEBUActorUniqueID@@@Z
     * @hash   -56544334
     */
    MCAPI void addVillager(struct ActorUniqueID const &);
    /**
     * @symbol ?canRemove@Village@@QEBA_NXZ
     * @hash   -1822476714
     */
    MCAPI bool canRemove() const;
    /**
     * @symbol ?checkNeedMoreVillagers@Village@@QEBA_NXZ
     * @hash   -1701891848
     */
    MCAPI bool checkNeedMoreVillagers() const;
    /**
     * @symbol ?clearOwnedPOIs@Village@@QEAAXXZ
     * @hash   -2141887083
     */
    MCAPI void clearOwnedPOIs();
    /**
     * @symbol ?debugDraw@Village@@QEAAXXZ
     * @hash   1696440083
     */
    MCAPI void debugDraw();
    /**
     * @symbol ?fetchOwnedPOI@Village@@QEAA?AV?$weak_ptr@VPOIInstance@@@std@@AEBUActorUniqueID@@W4POIType@@@Z
     * @hash   2146341253
     */
    MCAPI class std::weak_ptr<class POIInstance> fetchOwnedPOI(struct ActorUniqueID const &, enum class POIType);
    /**
     * @symbol ?fireSoundTheAlarm@Village@@QEAAXXZ
     * @hash   -2139198985
     */
    MCAPI void fireSoundTheAlarm();
    /**
     * @symbol ?getApproximateRadius@Village@@QEBAMXZ
     * @hash   -172849036
     */
    MCAPI float getApproximateRadius() const;
    /**
     * @symbol ?getBedPOICount@Village@@QEBA_KXZ
     * @hash   1014336083
     */
    MCAPI unsigned __int64 getBedPOICount() const;
    /**
     * @symbol ?getBounds@Village@@QEBAAEBVAABB@@XZ
     * @hash   2075364354
     */
    MCAPI class AABB const & getBounds() const;
    /**
     * @symbol ?getCenter@Village@@QEBA?AVVec3@@XZ
     * @hash   -746122824
     */
    MCAPI class Vec3 getCenter() const;
    /**
     * @symbol ?getClosestAggressor@Village@@QEAAPEAVActor@@PEAV2@@Z
     * @hash   -1358576016
     */
    MCAPI class Actor * getClosestAggressor(class Actor *);
    /**
     * @symbol ?getClosestBadStandingPlayer@Village@@QEAAPEAVPlayer@@AEAVActor@@@Z
     * @hash   557722210
     */
    MCAPI class Player * getClosestBadStandingPlayer(class Actor &);
    /**
     * @symbol ?getClosestPOI@Village@@QEAA?AV?$weak_ptr@VPOIInstance@@@std@@W4POIType@@AEBVBlockPos@@@Z
     * @hash   2136384933
     */
    MCAPI class std::weak_ptr<class POIInstance> getClosestPOI(enum class POIType, class BlockPos const &);
    /**
     * @symbol ?getRaid@Village@@QEBAPEBVRaid@@XZ
     * @hash   1029633081
     */
    MCAPI class Raid const * getRaid() const;
    /**
     * @symbol ?getRaidBounds@Village@@QEBAAEBVAABB@@XZ
     * @hash   -852419086
     */
    MCAPI class AABB const & getRaidBounds() const;
    /**
     * @symbol ?getRaidMutable@Village@@QEAAPEAVRaid@@XZ
     * @hash   639621277
     */
    MCAPI class Raid * getRaidMutable();
    /**
     * @symbol ?getStanding@Village@@QEAAHAEBUActorUniqueID@@@Z
     * @hash   -523713353
     */
    MCAPI int getStanding(struct ActorUniqueID const &);
    /**
     * @symbol ?getUnclaimedPOIs@Village@@QEBAAEBV?$array@V?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@$02@std@@XZ
     * @hash   238485373
     */
    MCAPI class std::array<std::vector<class std::weak_ptr<class POIInstance>>, 3> const & getUnclaimedPOIs() const;
    /**
     * @symbol ?getUniqueID@Village@@QEBA?AVUUID@mce@@XZ
     * @hash   650177968
     */
    MCAPI class mce::UUID getUniqueID() const;
    /**
     * @symbol ?hasInvalidRole@Village@@QEAA_NAEBUActorUniqueID@@AEBW4DwellerRole@@@Z
     * @hash   -2133324418
     */
    MCAPI bool hasInvalidRole(struct ActorUniqueID const &, enum class DwellerRole const &);
    /**
     * @symbol ?hasRaid@Village@@QEBA_NXZ
     * @hash   1165670678
     */
    MCAPI bool hasRaid() const;
    /**
     * @symbol ?hasSpecificDweller@Village@@QEBA_NW4DwellerRole@@AEBUActorUniqueID@@@Z
     * @hash   -347993196
     */
    MCAPI bool hasSpecificDweller(enum class DwellerRole, struct ActorUniqueID const &) const;
    /**
     * @symbol ?loadDataByKey@Village@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
     * @hash   2096712211
     */
    MCAPI void loadDataByKey(std::string const &, class CompoundTag const &);
    /**
     * @symbol ?modifyStanding@Village@@QEAAHAEBUActorUniqueID@@H@Z
     * @hash   -2089009950
     */
    MCAPI int modifyStanding(struct ActorUniqueID const &, int);
    /**
     * @symbol ?removeActorFromVillage@Village@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUActorUniqueID@@UDwellerData@Village@@@std@@@std@@@std@@@std@@W4DwellerRole@@AEBUActorUniqueID@@@Z
     * @hash   483226090
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<struct ActorUniqueID const, struct Village::DwellerData>>>> removeActorFromVillage(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @symbol ?removeAllInstancesofActorFromVillage@Village@@QEAAXAEBUActorUniqueID@@@Z
     * @hash   -784897352
     */
    MCAPI void removeAllInstancesofActorFromVillage(struct ActorUniqueID const &);
    /**
     * @symbol ?removeVillageSavedData@Village@@QEAAXXZ
     * @hash   1637442533
     */
    MCAPI void removeVillageSavedData();
    /**
     * @symbol ?resetDwellerTimer@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@@Z
     * @hash   725927739
     */
    MCAPI void resetDwellerTimer(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @symbol ?resetNoBreedTimer@Village@@QEAAXXZ
     * @hash   -797444841
     */
    MCAPI void resetNoBreedTimer();
    /**
     * @symbol ?rewardAllPlayers@Village@@QEAAXH@Z
     * @hash   1322439224
     */
    MCAPI void rewardAllPlayers(int);
    /**
     * @symbol ?saveEntireVillage@Village@@QEAAXXZ
     * @hash   195420497
     */
    MCAPI void saveEntireVillage();
    /**
     * @symbol ?setSavedDwellerPosition@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@VBlockPos@@@Z
     * @hash   1803055620
     */
    MCAPI void setSavedDwellerPosition(enum class DwellerRole, struct ActorUniqueID const &, class BlockPos);
    /**
     * @symbol ?tick@Village@@QEAAXUTick@@AEAVBlockSource@@@Z
     * @hash   1589099609
     */
    MCAPI void tick(struct Tick, class BlockSource &);
    /**
     * @symbol ?triggerRaid@Village@@QEAAXXZ
     * @hash   646919817
     */
    MCAPI void triggerRaid();
    /**
     * @symbol ?trySetVillagerWorkTimestamp@Village@@QEAAXAEBUActorUniqueID@@@Z
     * @hash   -1331456048
     */
    MCAPI void trySetVillagerWorkTimestamp(struct ActorUniqueID const &);
    /**
     * @symbol ?unlinkMismatchedJobsites@Village@@QEAAXAEBVActor@@@Z
     * @hash   1591933962
     */
    MCAPI void unlinkMismatchedJobsites(class Actor const &);
    /**
     * @symbol ?villagerLivesHere@Village@@QEBA_NAEBUActorUniqueID@@@Z
     * @hash   875204013
     */
    MCAPI bool villagerLivesHere(struct ActorUniqueID const &) const;
    /**
     * @symbol ?withinVillageBounds@Village@@QEBA_NAEBVVec3@@M@Z
     * @hash   1038231322
     */
    MCAPI bool withinVillageBounds(class Vec3 const &, float) const;
    /**
     * @symbol ??1Village@@QEAA@XZ
     * @hash   568985224
     */
    MCAPI ~Village();
    /**
     * @symbol ?DEBUG_DRAWING@Village@@2_NA
     * @hash   1208287755
     */
    MCAPI static bool DEBUG_DRAWING;
    /**
     * @symbol ?DWELLER_REMOVAL_TOLERANCE@Village@@2MB
     * @hash   2003147897
     */
    MCAPI static float const DWELLER_REMOVAL_TOLERANCE;
    /**
     * @symbol ?MAX_VILLAGE_STANDING@Village@@2HB
     * @hash   -2136384873
     */
    MCAPI static int const MAX_VILLAGE_STANDING;
    /**
     * @symbol ?MIN_VILLAGE_STANDING@Village@@2HB
     * @hash   769149631
     */
    MCAPI static int const MIN_VILLAGE_STANDING;
    /**
     * @symbol ?STORAGE_KEY_PREFIX@Village@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1484543133
     */
    MCAPI static std::string const STORAGE_KEY_PREFIX;
    /**
     * @symbol ?VILLAGE_START_XZ_BOUNDS@Village@@2HB
     * @hash   -1153321595
     */
    MCAPI static int const VILLAGE_START_XZ_BOUNDS;
    /**
     * @symbol ?isVillagePOI@Village@@SA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -991250308
     */
    MCAPI static bool isVillagePOI(class BlockSource const &, class BlockPos const &);
    /**
     * @symbol ?isVillagePOI@Village@@SA_NAEBVVillageManager@@AEBVBlock@@@Z
     * @hash   1426621010
     */
    MCAPI static bool isVillagePOI(class VillageManager const &, class Block const &);

//private:
    /**
     * @symbol ?_addPoiToVillage@Village@@AEAAXAEBUActorUniqueID@@V?$weak_ptr@VPOIInstance@@@std@@@Z
     * @hash   1269806936
     */
    MCAPI void _addPoiToVillage(struct ActorUniqueID const &, class std::weak_ptr<class POIInstance>);
    /**
     * @symbol ?_calcPOIDist@Village@@AEAAXXZ
     * @hash   122133884
     */
    MCAPI void _calcPOIDist();
    /**
     * @symbol ?_claimUnclaimedPOIs@Village@@AEAAXXZ
     * @hash   1996752942
     */
    MCAPI void _claimUnclaimedPOIs();
    /**
     * @symbol ?_clearVillagerPOIs@Village@@AEAAXAEBUActorUniqueID@@@Z
     * @hash   -1289917426
     */
    MCAPI void _clearVillagerPOIs(struct ActorUniqueID const &);
    /**
     * @symbol ?_createRaid@Village@@AEAAXXZ
     * @hash   752103317
     */
    MCAPI void _createRaid();
    /**
     * @symbol ?_findAvailablePOI@Village@@AEAA_N_KAEAVLevel@@AEAVRandom@@UActorUniqueID@@@Z
     * @hash   82313099
     */
    MCAPI bool _findAvailablePOI(unsigned __int64, class Level &, class Random &, struct ActorUniqueID);
    /**
     * @symbol ?_findPlayerCentricSpawnPointForRaid@Village@@AEBA_NAEAVVec3@@_N@Z
     * @hash   2040345779
     */
    MCAPI bool _findPlayerCentricSpawnPointForRaid(class Vec3 &, bool) const;
    /**
     * @symbol ?_findPreferredPOI@Village@@AEAAXAEAV?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@AEBVHashedString@@UActorUniqueID@@@Z
     * @hash   1453585923
     */
    MCAPI void _findPreferredPOI(std::vector<class std::weak_ptr<class POIInstance>> &, class HashedString const &, struct ActorUniqueID);
    /**
     * @symbol ?_findSpawnPointForRaid@Village@@AEBA_NAEAVVec3@@MM_N1@Z
     * @hash   -1681050884
     */
    MCAPI bool _findSpawnPointForRaid(class Vec3 &, float, float, bool, bool) const;
    /**
     * @symbol ?_findSpawnableRegion@Village@@AEBAPEAVBlockSource@@VVec3@@HAEA_N@Z
     * @hash   -1186013225
     */
    MCAPI class BlockSource * _findSpawnableRegion(class Vec3, int, bool &) const;
    /**
     * @symbol ?_findWeightedPOI@Village@@AEAAXAEAV?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@AEAVRandom@@UActorUniqueID@@@Z
     * @hash   -575051813
     */
    MCAPI void _findWeightedPOI(std::vector<class std::weak_ptr<class POIInstance>> &, class Random &, struct ActorUniqueID);
    /**
     * @symbol ?_helpLocateRaiders@Village@@AEAAXAEBVRaid@@@Z
     * @hash   902282021
     */
    MCAPI void _helpLocateRaiders(class Raid const &);
    /**
     * @symbol ?_loadVillageData@Village@@AEAAXAEBVCompoundTag@@@Z
     * @hash   1435340089
     */
    MCAPI void _loadVillageData(class CompoundTag const &);
    /**
     * @symbol ?_loadVillageDwellers@Village@@AEAAXAEBVCompoundTag@@@Z
     * @hash   -1312182785
     */
    MCAPI void _loadVillageDwellers(class CompoundTag const &);
    /**
     * @symbol ?_loadVillagePOIs@Village@@AEAAXAEBVCompoundTag@@@Z
     * @hash   -1923965958
     */
    MCAPI void _loadVillagePOIs(class CompoundTag const &);
    /**
     * @symbol ?_playSoundFrom@Village@@AEAAXAEBVVec3@@W4LevelSoundEvent@@@Z
     * @hash   -1805828217
     */
    MCAPI void _playSoundFrom(class Vec3 const &, enum class LevelSoundEvent);
    /**
     * @symbol ?_readyRaidGroup@Village@@AEAAXAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z
     * @hash   -66975233
     */
    MCAPI void _readyRaidGroup(class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &);
    /**
     * @symbol ?_ringBells@Village@@AEBAXAEAVBlockSource@@AEAVRandom@@@Z
     * @hash   -1601722923
     */
    MCAPI void _ringBells(class BlockSource &, class Random &) const;
    /**
     * @symbol ?_saveVillageData@Village@@AEBAXXZ
     * @hash   -459661303
     */
    MCAPI void _saveVillageData() const;
    /**
     * @symbol ?_saveVillageDwellers@Village@@AEBAXXZ
     * @hash   1209045571
     */
    MCAPI void _saveVillageDwellers() const;
    /**
     * @symbol ?_saveVillagePOIs@Village@@AEBAXXZ
     * @hash   1350711576
     */
    MCAPI void _saveVillagePOIs() const;
    /**
     * @symbol ?_saveVillagePlayerStanding@Village@@AEBAXXZ
     * @hash   433862972
     */
    MCAPI void _saveVillagePlayerStanding() const;
    /**
     * @symbol ?_saveVillageRaid@Village@@AEBAXXZ
     * @hash   2027111305
     */
    MCAPI void _saveVillageRaid() const;
    /**
     * @symbol ?_spawnPassiveDwellers@Village@@AEAAXAEAVBlockSource@@H@Z
     * @hash   -621954342
     */
    MCAPI void _spawnPassiveDwellers(class BlockSource &, int);
    /**
     * @symbol ?_spawnRaidGroup@Village@@AEBA_NVVec3@@EAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z
     * @hash   1206747843
     */
    MCAPI bool _spawnRaidGroup(class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &) const;
    /**
     * @symbol ?_tryShiftStandingsTowardNeutral@Village@@AEAAXAEAUTick@@_K_N@Z
     * @hash   -2014754795
     */
    MCAPI void _tryShiftStandingsTowardNeutral(struct Tick &, unsigned __int64, bool);
    /**
     * @symbol ?_trySpawnDefenderDwellers@Village@@AEAAXAEAVBlockSource@@_K@Z
     * @hash   168840894
     */
    MCAPI void _trySpawnDefenderDwellers(class BlockSource &, unsigned __int64);
    /**
     * @symbol ?_updateAndRemoveInactiveDwellers@Village@@AEAAX_KM@Z
     * @hash   -1402004904
     */
    MCAPI void _updateAndRemoveInactiveDwellers(unsigned __int64, float);
    /**
     * @symbol ?_updateClaimedPOIs@Village@@AEAAXAEAVBlockSource@@@Z
     * @hash   868282280
     */
    MCAPI void _updateClaimedPOIs(class BlockSource &);
    /**
     * @symbol ?_updateUnclaimedPOIs@Village@@AEAAXAEAVBlockSource@@@Z
     * @hash   358199745
     */
    MCAPI void _updateUnclaimedPOIs(class BlockSource &);

private:
    /**
     * @symbol ?ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE@Village@@0MB
     * @hash   -1594374592
     */
    MCAPI static float const ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE;
    /**
     * @symbol ?CELEBRATION_EVENT@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   417790692
     */
    MCAPI static std::string const CELEBRATION_EVENT;
    /**
     * @symbol ?RAID_BOUNDS_PADDING@Village@@0VVec3@@B
     * @hash   -1466499227
     */
    MCAPI static class Vec3 const RAID_BOUNDS_PADDING;
    /**
     * @symbol ?RAID_EXPIRY_EVENT@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   516256258
     */
    MCAPI static std::string const RAID_EXPIRY_EVENT;
    /**
     * @symbol ?RAID_FINISHED_DELAY_IN_TICKS@Village@@0HB
     * @hash   1307832276
     */
    MCAPI static int const RAID_FINISHED_DELAY_IN_TICKS;
    /**
     * @symbol ?RAID_GROUP_COMPLETE_DELAY_IN_TICKS@Village@@0HB
     * @hash   -1712702363
     */
    MCAPI static int const RAID_GROUP_COMPLETE_DELAY_IN_TICKS;
    /**
     * @symbol ?RAID_LOCATION_HELP_DELAY_IN_TICKS@Village@@0HB
     * @hash   -1252183551
     */
    MCAPI static int const RAID_LOCATION_HELP_DELAY_IN_TICKS;
    /**
     * @symbol ?RAID_MAX_SPAWN_FAILURES@Village@@0EB
     * @hash   58367476
     */
    MCAPI static unsigned char const RAID_MAX_SPAWN_FAILURES;
    /**
     * @symbol ?RAID_PREP_TIME_IN_TICKS@Village@@0HB
     * @hash   2048358985
     */
    MCAPI static int const RAID_PREP_TIME_IN_TICKS;
    /**
     * @symbol ?RAID_TIMEOUT_IN_TICKS@Village@@0UTick@@B
     * @hash   1530714327
     */
    MCAPI static struct Tick const RAID_TIMEOUT_IN_TICKS;
    /**
     * @symbol ?STANDING_DECAY_INTERVAL_BAD@Village@@0_KB
     * @hash   -588542064
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_BAD;
    /**
     * @symbol ?STANDING_DECAY_INTERVAL_GOOD@Village@@0_KB
     * @hash   -910003788
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_GOOD;
    /**
     * @symbol ?STORAGE_KEY_DWELLERS@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1605819799
     */
    MCAPI static std::string const STORAGE_KEY_DWELLERS;
    /**
     * @symbol ?STORAGE_KEY_PLAYERS@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1945126195
     */
    MCAPI static std::string const STORAGE_KEY_PLAYERS;
    /**
     * @symbol ?STORAGE_KEY_POI@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1442453669
     */
    MCAPI static std::string const STORAGE_KEY_POI;
    /**
     * @symbol ?STORAGE_KEY_RAID@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -232933843
     */
    MCAPI static std::string const STORAGE_KEY_RAID;
    /**
     * @symbol ?STORAGE_KEY_VILLAGE@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -70162457
     */
    MCAPI static std::string const STORAGE_KEY_VILLAGE;
    /**
     * @symbol ?UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS@Village@@0HB
     * @hash   -2131784932
     */
    MCAPI static int const UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS;
    /**
     * @symbol ?VILLAGER_EXPECTED_WORK_INTERVAL@Village@@0_JB
     * @hash   -1931715145
     */
    MCAPI static __int64 const VILLAGER_EXPECTED_WORK_INTERVAL;
    /**
     * @symbol ?VILLAGE_HERO_BESTOW_TIME@Village@@0HB
     * @hash   -2051848394
     */
    MCAPI static int const VILLAGE_HERO_BESTOW_TIME;
    /**
     * @symbol ?VILLAGE_POI_PURGE_TIME@Village@@0_KB
     * @hash   -617283234
     */
    MCAPI static unsigned __int64 const VILLAGE_POI_PURGE_TIME;
    /**
     * @symbol ?VILLAGE_RADIUS_APPROX_SCALAR@Village@@0MB
     * @hash   -830507978
     */
    MCAPI static float const VILLAGE_RADIUS_APPROX_SCALAR;
    /**
     * @symbol ?VILLAGE_SAVE_TICK_DELAY@Village@@0_KB
     * @hash   696539749
     */
    MCAPI static unsigned __int64 const VILLAGE_SAVE_TICK_DELAY;
    /**
     * @symbol ?VILLAGE_START_HEIGHT@Village@@0HB
     * @hash   -1625238233
     */
    MCAPI static int const VILLAGE_START_HEIGHT;
    /**
     * @symbol ?VILLAGE_UNCLAIMED_POI_CAP@Village@@0HB
     * @hash   1220681345
     */
    MCAPI static int const VILLAGE_UNCLAIMED_POI_CAP;
    /**
     * @symbol ?VILLAGE_UPDATE_TICK_DELAY@Village@@0_KB
     * @hash   1478844113
     */
    MCAPI static unsigned __int64 const VILLAGE_UPDATE_TICK_DELAY;
    /**
     * @symbol ?VILLAGE_VERSION_CURRENT@Village@@0EB
     * @hash   1431920725
     */
    MCAPI static unsigned char const VILLAGE_VERSION_CURRENT;

};