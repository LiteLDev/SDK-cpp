// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
    class ServerPlayer;
    class Player;
    class NetworkIdentifier;
    class Certificate;
    class Container;
    class CompoundTag;
    #include "UserEntityIdentifierComponent.hpp"
    #include "ScorePacketInfo.hpp"
    #include "DataItem.hpp"
#undef BEFORE_EXTRA

class Player : public Mob {

#define AFTER_EXTRA
// Add new members to class
public:
    enum PositionMode : char{
        NORMAL,
        RESPAWN,
        TELEPORT,
        HEAD_ROTATION,
    };

    LIAPI std::string getName();
    LIAPI std::string getRealName();
    LIAPI std::string getUuid();
    LIAPI unsigned char getClientSubId();
    LIAPI string getDeviceTypeName();
    LIAPI int getAvgPing();
    LIAPI int getLastPing();
    LIAPI std::string getIP();
    LIAPI string getLanguageCode();
    LIAPI string getServerAddress();
    LIAPI NetworkIdentifier* getNetworkIdentifier();
    LIAPI Certificate* getCertificate();
    LIAPI Container* getEnderChestContainer();
    LIAPI std::pair<BlockPos, int> getRespawnPosition();
    LIAPI float getAvgPacketLoss();
    LIAPI string getClientId();
    LIAPI int getDeviceType();
    LIAPI bool isOperator();
    LIAPI bool isOP();

    LIAPI int getCurrentExperience();
    LIAPI bool setCurrentExperience(int exp);
    LIAPI size_t getTotalExperience();
    LIAPI bool setTotalExperience(size_t exp);
    LIAPI bool reduceExperience(size_t exp);

    // Experience required to upgrade to level from (level-1)
    LIAPI static int getXpNeededForLevel(int level);

    // Experience required to upgrade to level from level 0
    LIAPI static size_t getTotalXpNeededForLevel(int level);

    LIAPI bool sendText(string text, TextType type = TextType::RAW);
    template <typename... Args>
    bool sendFormattedText(string text, const Args&... args)
    {
        if constexpr (0 == sizeof...(args))
        {
            // Avoid fmt if only one argument
            return sendText(text);
        }
        else
            return sendText(fmt::format(text, args...));
    }

    LIAPI bool kick(const string& msg);
    LIAPI bool crashClient();
    LIAPI bool talkAs(const string& msg);
    LIAPI bool giveItem(ItemStack* item); 
    LIAPI int clearItem(string typeName);
    LIAPI bool runcmd(const string& cmd);
    LIAPI bool transferServer(const string& address, unsigned short port);
    LIAPI bool setSidebar(const std::string& title, const std::vector<std::pair<std::string, int>>& data, ObjectiveSortOrder sortOrder);
    LIAPI bool removeSidebar();
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI bool refreshAttribute(class Attribute const& attribute);
    LIAPI bool refreshAttributes(std::vector<Attribute const*> const& attributes);
    LIAPI void addBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay = 0);
    LIAPI void removeBossEvent(int64_t uid);
    LIAPI void updateBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay = 0);

    LIAPI int getScore(const string& key);
    LIAPI bool setScore(const string& key, int value);
    LIAPI bool addScore(const string& key, int value);
    LIAPI bool reduceScore(const string& key, int value);
    LIAPI bool deleteScore(const string& key);

    //Form
    LIAPI bool sendSimpleForm(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(Player*, int)> callback) const;
    LIAPI bool sendModalForm(const string& title, const string& content, const string& button1, const string& button2, std::function<void(Player*, bool)> callback) const;
    LIAPI bool sendCustomForm(const std::string& data, std::function<void(Player*, string)> callback) const;

    //Packet
    LIAPI bool sendTextPacket(string text, TextType Type = TextType::RAW) const;
    LIAPI bool sendTitlePacket(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration) const;
    LIAPI bool sendNotePacket(unsigned int tone);
    LIAPI bool sendSpawnParticleEffectPacket(Vec3 spawnPos, int dimid, string ParticleName, int64_t EntityUniqueID = -1) const;
    /*bad*/ LIAPI bool sendPlaySoundPacket(string SoundName, Vec3 Position, float Volume, float Pitch) const;
    LIAPI bool sendAddItemEntityPacket(unsigned long long runtimeID, class Item const& item, int stackSize, short aux, Vec3 pos, vector<std::unique_ptr<DataItem>> dataItems = {}) const;
    LIAPI bool sendAddEntityPacket(unsigned long long runtimeID, string entityType, Vec3 pos, Vec2 rotation, float headYaw, vector<std::unique_ptr<DataItem>> dataItems = {});
    LIAPI bool sendUpdateBlockPacket(BlockPos const& blockPos, unsigned int runtimeId, UpdateBlockFlags flag = UpdateBlockFlags::BlockUpdateAll, UpdateBlockLayer layer = UpdateBlockLayer::UpdateBlockDefault);
    LIAPI bool sendUpdateBlockPacket(BlockPos const& blockPos, const Block& block, UpdateBlockFlags flag = UpdateBlockFlags::BlockUpdateAll, UpdateBlockLayer layer = UpdateBlockLayer::UpdateBlockDefault);
    LIAPI bool sendTransferPacket(const string& address, short port) const;
    LIAPI bool sendSetDisplayObjectivePacket(const string& title, const string& name, char sortOrder) const;
    LIAPI bool sendSetScorePacket(char type, const vector<ScorePacketInfo>& data);
    LIAPI bool sendBossEventPacket(BossEvent type, string name, float percent, BossEventColour colour, int overlay = 0);
    LIAPI bool sendCommandRequestPacket(const string& cmd);
    LIAPI bool sendTextTalkPacket(const string& msg);
    LIAPI bool sendTextTalkPacket(const string& msg, Player* target/* = nullptr*/);

    LIAPI bool sendRawFormPacket(unsigned formId, const string& data) const;
    LIAPI bool sendToastPacket(string title, string msg);

    LIAPI static bool isValid(Player* player);

    //For compatibility
    inline string getDeviceName() { return getDeviceTypeName(); }
    LIAPI bool sendSimpleFormPacket(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(int)> callback) const;
    LIAPI bool sendModalFormPacket(const string& title, const string& content, const string& button1, const string& button2, std::function<void(bool)> callback);
    LIAPI bool sendCustomFormPacket(const std::string& data, std::function<void(string)> callback);

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYER
public:
    class Player& operator=(class Player const &) = delete;
    Player(class Player const &) = delete;
    Player() = delete;
#endif


public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*12*/ virtual void _serverInitItemStackIds();
    /*14*/ virtual ~Player();
    /*16*/ virtual void resetUserPos(bool);
    /*18*/ virtual void remove();
    /*25*/ virtual class Vec3 getAttachPos(enum ActorLocation, float) const;
    /*28*/ virtual void move(class Vec3 const &);
    /*29*/ virtual void move(struct IActorMovementProxy &, class Vec3 const &) const;
    /*39*/ virtual bool isFireImmune() const;
    /*40*/ virtual void __unk_vfn_40();
    /*43*/ virtual void teleportTo(class Vec3 const &, bool, int, int);
    /*47*/ virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /*48*/ virtual void normalTick();
    /*50*/ virtual void passengerTick();
    /*60*/ virtual void __unk_vfn_60();
    /*64*/ virtual std::string getFormattedNameTag() const;
    /*67*/ virtual void __unk_vfn_67();
    /*75*/ virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /*77*/ virtual float getCameraOffset() const;
    /*81*/ virtual void __unk_vfn_81();
    /*84*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*87*/ virtual void __unk_vfn_87();
    /*91*/ virtual bool isImmobile() const;
    /*94*/ virtual void __unk_vfn_94();
    /*95*/ virtual bool isSleeping() const;
    /*96*/ virtual void setSleeping(bool);
    /*97*/ virtual void __unk_vfn_97();
    /*99*/ virtual bool isBlocking() const;
    /*100*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*114*/ virtual bool attack(class Actor &, enum ActorDamageCause const &);
    /*127*/ virtual bool isJumping() const;
    /*133*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*138*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*139*/ virtual void feed(int);
    /*140*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*142*/ virtual class HashedString const & getActorRendererId() const;
    /*150*/ virtual void awardKillScore(class Actor &, int);
    /*151*/ virtual void setArmor(enum ArmorSlot, class ItemStack const &);
    /*159*/ virtual void setCarriedItem(class ItemStack const &);
    /*160*/ virtual class ItemStack const & getCarriedItem() const;
    /*161*/ virtual void setOffhandSlot(class ItemStack const &);
    /*162*/ virtual class ItemStack const & getEquippedTotem() const;
    /*163*/ virtual bool consumeTotem();
    /*168*/ virtual enum ActorType getEntityTypeId() const;
    /*172*/ virtual bool canFreeze() const;
    /*176*/ virtual int getPortalCooldown() const;
    /*177*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual void __unk_vfn_180();
    /*189*/ virtual void onSynchedDataUpdate(int);
    /*190*/ virtual bool canAddPassenger(class Actor &) const;
    /*192*/ virtual bool canBePulledIntoVehicle() const;
    /*194*/ virtual void __unk_vfn_194();
    /*196*/ virtual void sendMotionPacketIfNeeded();
    /*199*/ virtual void startSwimming();
    /*200*/ virtual void stopSwimming();
    /*202*/ virtual enum CommandPermissionLevel getCommandPermissionLevel() const;
    /*215*/ virtual class AnimationComponent & getAnimationComponent();
    /*218*/ virtual void useItem(class ItemStackBase &, enum ItemUseMethod, bool);
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*222*/ virtual float getMapDecorationRotation() const;
    /*227*/ virtual bool isWorldBuilder() const;
    /*228*/ virtual bool isCreative() const;
    /*229*/ virtual bool isAdventure() const;
    /*230*/ virtual bool isSurvival() const;
    /*231*/ virtual bool isSpectator() const;
    /*233*/ virtual bool add(class ItemStack &);
    /*234*/ virtual bool drop(class ItemStack const &, bool);
    /*238*/ virtual void setSize(float, float);
    /*242*/ virtual void startSpinAttack();
    /*243*/ virtual void stopSpinAttack();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*250*/ virtual void die(class ActorDamageSource const &);
    /*251*/ virtual bool shouldDropDeathLoot() const;
    /*259*/ virtual class std::optional<class BlockPos> getLastDeathPos() const;
    /*260*/ virtual class std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const;
    /*261*/ virtual bool hasDiedBefore() const;
    /*264*/ virtual void __unk_vfn_264();
    /*265*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*268*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*269*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*272*/ virtual void __unk_vfn_272();
    /*280*/ virtual void _onSizeUpdated();
    /*281*/ virtual void __unk_vfn_281();
    /*288*/ virtual float getSpeed() const;
    /*289*/ virtual void setSpeed(float);
    /*294*/ virtual void travel(float, float, float);
    /*295*/ virtual void travel(struct IMobMovementProxy &, float, float, float) const;
    /*297*/ virtual void aiStep();
    /*298*/ virtual void aiStep(struct IMobMovementProxy &) const;
    /*305*/ virtual int getItemUseDuration() const;
    /*306*/ virtual float getItemUseStartupProgress() const;
    /*307*/ virtual float getItemUseIntervalProgress() const;
    /*310*/ virtual void __unk_vfn_310();
    /*314*/ virtual void __unk_vfn_314();
    /*330*/ virtual std::vector<class ItemStack const *> getAllHand() const;
    /*331*/ virtual std::vector<class ItemStack const *> getAllEquipment() const;
    /*333*/ virtual void dropEquipmentOnDeath(class ActorDamageSource const &, int);
    /*334*/ virtual void dropEquipmentOnDeath();
    /*335*/ virtual void clearVanishEnchantedItemsOnDeath();
    /*336*/ virtual void sendInventory(bool);
    /*347*/ virtual bool canExistWhenDisallowMob() const;
    /*348*/ virtual void __unk_vfn_348();
    /*353*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*354*/ virtual void jumpFromGround();
    /*355*/ virtual void jumpFromGround(struct IMobMovementProxy &) const;
    /*356*/ virtual void updateAi();
    /*361*/ virtual void updateGliding();
    /*362*/ virtual void __unk_vfn_362();
    /*364*/ virtual void prepareRegion(class ChunkSource &);
    /*365*/ virtual void destroyRegion();
    /*366*/ virtual void suspendRegion();
    /*367*/ virtual void resendAllChunks();
    /*368*/ virtual void _fireWillChangeDimension();
    /*369*/ virtual void _fireDimensionChanged();
    /*370*/ virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /*371*/ virtual void tickWorld(struct Tick const &);
    /*372*/ virtual void __unk_vfn_372() = 0;
    /*373*/ virtual std::vector<class ChunkPos> const & getTickingOffsets() const;
    /*374*/ virtual void moveView();
    /*375*/ virtual void setName(std::string const &);
    /*376*/ virtual enum TravelMethod getTravelledMethod() const;
    /*377*/ virtual void checkMovementStats(class Vec3 const &);
    /*378*/ virtual void __unk_vfn_378();
    /*379*/ virtual void __unk_vfn_379();
    /*380*/ virtual void respawn();
    /*381*/ virtual void __unk_vfn_381();
    /*382*/ virtual void __unk_vfn_382();
    /*383*/ virtual bool hasResource(int);
    /*384*/ virtual void completeUsingItem();
    /*385*/ virtual void startDestroying();
    /*386*/ virtual void stopDestroying();
    /*387*/ virtual void __unk_vfn_387();
    /*388*/ virtual void __unk_vfn_388();
    /*389*/ virtual void openTrading(struct ActorUniqueID const &, bool);
    /*390*/ virtual bool canOpenContainerScreen();
    /*391*/ virtual void __unk_vfn_391();
    /*392*/ virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>);
    /*393*/ virtual void openInventory();
    /*394*/ virtual void __unk_vfn_394();
    /*395*/ virtual void __unk_vfn_395();
    /*396*/ virtual void displayTextObjectMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    /*397*/ virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /*398*/ virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /*399*/ virtual enum BedSleepingResult startSleepInBed(class BlockPos const &);
    /*400*/ virtual void stopSleepInBed(bool, bool);
    /*401*/ virtual bool canStartSleepInBed();
    /*402*/ virtual int getSleepTimer() const;
    /*403*/ virtual int getPreviousTickSleepTimer() const;
    /*404*/ virtual void __unk_vfn_404();
    /*405*/ virtual void __unk_vfn_405();
    /*406*/ virtual bool isHostingPlayer() const;
    /*407*/ virtual bool isLoading() const;
    /*408*/ virtual bool isPlayerInitialized() const;
    /*409*/ virtual void __unk_vfn_409();
    /*410*/ virtual void registerTrackedBoss(struct ActorUniqueID);
    /*411*/ virtual void unRegisterTrackedBoss(struct ActorUniqueID);
    /*412*/ virtual void setPlayerGameType(enum GameType);
    /*413*/ virtual void initHUDContainerManager();
    /*414*/ virtual void _crit(class Actor &);
    /*415*/ virtual class IMinecraftEventing * getEventing() const;
    /*416*/ virtual void __unk_vfn_416();
    /*417*/ virtual void sendEventPacket(class EventPacket &) const;
    /*418*/ virtual void addExperience(int);
    /*419*/ virtual void addLevels(int);
    /*420*/ virtual void setContainerData(class IContainerManager &, int, int) = 0;
    /*421*/ virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool) = 0;
    /*422*/ virtual void inventoryChanged(class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /*423*/ virtual void refreshContainer(class IContainerManager &) = 0;
    /*424*/ virtual void deleteContainerManager();
    /*425*/ virtual void setFieldOfViewModifier(float);
    /*426*/ virtual bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const &);
    /*427*/ virtual bool isActorRelevant(class Actor const &);
    /*428*/ virtual bool isTeacher() const = 0;
    /*429*/ virtual void onSuspension();
    /*430*/ virtual void onLinkedSlotsChanged();
    /*431*/ virtual void startCooldown(class Item const *, bool);
    /*432*/ virtual int getItemCooldownLeft(class HashedString const &) const;
    /*433*/ virtual int getItemCooldownLeft(unsigned __int64) const;
    /*434*/ virtual int getMaxItemCooldownLeft() const;
    /*435*/ virtual bool isItemOnCooldown(class HashedString const &) const;
    /*436*/ virtual void sendInventoryTransaction(class InventoryTransaction const &) const = 0;
    /*437*/ virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0;
    /*438*/ virtual void sendNetworkPacket(class Packet &) const;
    /*439*/ virtual class PlayerEventCoordinator & getPlayerEventCoordinator() = 0;
    /*440*/ virtual class MoveInputHandler * tryGetMoveInputHandler() const = 0;
    /*441*/ virtual enum InputMode getInputMode() const = 0;
    /*442*/ virtual enum ClientPlayMode getPlayMode() const = 0;
    /*443*/ virtual void reportMovementTelemetry(enum MovementEventType);
    /*444*/ virtual void __unk_vfn_444();
    /*445*/ virtual std::string getXuid() const;
    /*446*/ virtual struct PlayerMovementSettings const & getMovementSettings() const;
    /*447*/ virtual void onMovePlayerPacketNormal(class Vec3 const &, class Vec2 const &, float);
    /*448*/ virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYER
    MCVAPI void displayChatMessage(std::string const &, std::string const &);
    MCVAPI void displayClientMessage(std::string const &);
    MCVAPI bool getAlwaysShowNameTag() const;
    MCVAPI enum StructureFeatureType getCurrentStructureFeature() const;
    MCVAPI unsigned int getUserId() const;
    MCVAPI bool isAutoJumpEnabled() const;
    MCVAPI bool isCreativeModeAllowed();
    MCVAPI bool isInTrialMode();
    MCVAPI bool isLocalPlayer() const;
    MCVAPI bool isPlayer() const;
    MCVAPI bool isShootable();
    MCVAPI bool isSimulated() const;
    MCVAPI void openBook(int, bool, int, class BlockActor *);
    MCVAPI void openChalkboard(class ChalkboardBlockActor &, bool);
    MCVAPI void openPortfolio();
    MCVAPI void openSign(class BlockPos const &);
    MCVAPI void playEmote(std::string const &);
    MCVAPI void resetRot();
    MCVAPI void stopLoading();
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Player(class Level &, class PacketSender &, enum GameType, class NetworkIdentifier const &, unsigned char, class mce::UUID, std::string const &, std::string const &, std::unique_ptr<class Certificate>, class EntityContext &, std::string const &, std::string const &);
    MCAPI void applyExhaustion(class Vec3 const &);
    MCAPI void broadcastPlayerSpawnedMobEvent(enum ActorType, enum MobSpawnMethod);
    MCAPI bool canBeSeenOnMap() const;
    MCAPI bool canDestroy(class Block const &) const;
    MCAPI bool canUseAbility(enum AbilitiesIndex) const;
    MCAPI bool canUseOperatorBlocks() const;
    MCAPI void causeFoodExhaustion(float);
    MCAPI void clearRespawnPosition();
    MCAPI void eat(class ItemStack const &);
    MCAPI void eat(int, float);
    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const &) const;
    MCAPI void fireDimensionChangedEvent(class AutomaticID<class Dimension, int>);
    MCAPI bool forceAllowEating() const;
    MCAPI class Agent * getAgent() const;
    MCAPI struct ActorUniqueID getAgentID() const;
    MCAPI class Agent * getAgentIfAllowed(bool, struct ActorUniqueID) const;
    MCAPI class BlockPos const & getBedPosition() const;
    MCAPI __int64 getBlockedUsingDamagedShieldTimeStamp() const;
    MCAPI __int64 getBlockedUsingShieldTimeStamp() const;
    MCAPI __int64 getBlockingStartTimeStamp() const;
    MCAPI class Vec3 getCapePos(float);
    MCAPI class std::weak_ptr<class IContainerManager> getContainerManager();
    MCAPI class ItemStack const & getCurrentActiveShield() const;
    MCAPI float getDestroyProgress(class Block const &) const;
    MCAPI float getDestroySpeed(class Block const &) const;
    MCAPI int getDirection() const;
    MCAPI int getEnchantmentSeed() const;
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const;
    MCAPI class BlockPos const & getExpectedSpawnPosition() const;
    MCAPI std::string getInteractText() const;
    MCAPI class Container & getInventory();
    MCAPI class ItemStack const & getItemInUse() const;
    MCAPI std::string getItemInteractText(class Item const &) const;
    MCAPI class ItemStackNetManagerBase * getItemStackNetManager();
    MCAPI class ItemStackNetManagerBase const * getItemStackNetManager() const;
    MCAPI float getLuck();
    MCAPI int getMapIndex();
    MCAPI class MoveInputHandler * getMoveInputHandler() const;
    MCAPI void getNewEnchantmentSeed();
    MCAPI class AABB getPickupArea() const;
    MCAPI enum BuildPlatform getPlatform() const;
    MCAPI std::string const & getPlatformOnlineId() const;
    MCAPI enum GameType getPlayerGameType() const;
    MCAPI int getPlayerIndex() const;
    MCAPI int getPlayerLevel() const;
    MCAPI enum PlayerPermissionLevel getPlayerPermissionLevel() const;
    MCAPI std::string const & getPlayerSessionId() const;
    MCAPI class ItemStack const & getPlayerUIItem(enum PlayerUISlot);
    MCAPI class BlockPos const & getRespawnAnchorPosition() const;
    MCAPI class ItemStack const & getSelectedItem() const;
    MCAPI int getSelectedItemSlot() const;
    MCAPI class SerializedSkin & getSkin();
    MCAPI class SerializedSkin const & getSkin() const;
    MCAPI float getSleepRotation() const;
    MCAPI class AutomaticID<class Dimension, int> getSpawnDimension() const;
    MCAPI class BlockPos const & getSpawnPosition() const;
    MCAPI class PlayerInventory & getSupplies();
    MCAPI class PlayerInventory const & getSupplies() const;
    MCAPI std::vector<struct ActorUniqueID> const & getTrackedBosses();
    MCAPI enum GameType getUnmappedPlayerGameType() const;
    MCAPI bool getUsedPotion();
    MCAPI int getXpNeededForNextLevel() const;
    MCAPI bool hasBedPosition() const;
    MCAPI bool hasOpenContainer() const;
    MCAPI bool hasOpenContainerOfContainerType(enum ContainerType) const;
    MCAPI bool hasOwnedChunkSource() const;
    MCAPI bool hasResource(class ItemDescriptor const &);
    MCAPI bool hasRespawnAnchorPosition() const;
    MCAPI bool hasRespawnPosition() const;
    MCAPI bool interact(class Actor &, class Vec3 const &);
    MCAPI bool isForcedRespawn() const;
    MCAPI bool isHiddenFrom(class Mob &) const;
    MCAPI bool isHungry() const;
    MCAPI bool isHurt();
    MCAPI bool isInCreativeMode() const;
    MCAPI bool isInRaid() const;
    MCAPI bool isRespawningFromTheEnd() const;
    MCAPI bool isSleepingLongEnough() const;
    MCAPI bool isSlowedByItemUse() const;
    MCAPI bool isSpawned() const;
    MCAPI bool isUsingItem() const;
    MCAPI void loadLastDeathLocation(class CompoundTag const &);
    MCAPI void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    MCAPI void recheckSpawnPosition();
    MCAPI void releaseUsingItem();
    MCAPI void resetPlayerLevel();
    MCAPI void resetToDefaultGameMode();
    MCAPI void setAgent(class Agent *);
    MCAPI void setAllPlayersSleeping();
    MCAPI void setBedRespawnPosition(class BlockPos const &);
    MCAPI void setBlockRespawnUntilClientMessage(bool);
    MCAPI void setChunkRadius(unsigned int);
    MCAPI void setContainerManager(class std::shared_ptr<class IContainerManager>);
    MCAPI void setCursorSelectedItem(class ItemStack const &);
    MCAPI void setCursorSelectedItemGroup(class ItemGroup const &);
    MCAPI void setEnchantmentSeed(int);
    MCAPI void setHasDied(bool);
    MCAPI void setHasSeenCredits(bool);
    MCAPI void setLastDeathDimension(class AutomaticID<class Dimension, int>);
    MCAPI void setMapIndex(int);
    MCAPI void setPermissions(enum CommandPermissionLevel);
    MCAPI void setPlatformOnlineId(std::string const &);
    MCAPI void setPlayerIndex(int);
    MCAPI void setPlayerUIItem(enum PlayerUISlot, class ItemStack const &);
    MCAPI void setRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    MCAPI void setRespawnPositionCandidate();
    MCAPI void setRespawnReady(class Vec3 const &);
    MCAPI void setSelectedItem(class ItemStack const &);
    MCAPI class ItemStack const & setSelectedSlot(int);
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    MCAPI void setUsedPotion(bool);
    MCAPI bool shouldShowCredits() const;
    MCAPI void spawnExperienceOrb(class Vec3 const &, int);
    MCAPI void startCooldown(class HashedString const &, int, bool);
    MCAPI void startGliding();
    MCAPI void startUsingItem(class ItemStack const &, int);
    MCAPI void stopGliding();
    MCAPI void stopUsingItem();
    MCAPI bool take(class Actor &, int, int);
    MCAPI void updateBlockSourceTick();
    MCAPI void updateInventoryTransactions();
    MCAPI void updateSkin(class SerializedSkin const &, int);
    MCAPI void updateSpawnChunkView();
    MCAPI void updateTrackedBosses();
    MCAPI void useSelectedItem(enum ItemUseMethod, bool);
    MCAPI static float const DEFAULT_BB_HEIGHT;
    MCAPI static float const DEFAULT_BB_WIDTH;
    MCAPI static float const DEFAULT_FLY_SPEED;
    MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET;
    MCAPI static float const DEFAULT_WALK_SPEED;
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;
    MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT;
    MCAPI static class Attribute const EXHAUSTION;
    MCAPI static class Attribute const EXPERIENCE;
    MCAPI static int const GLIDE_STOP_DELAY;
    MCAPI static class Attribute const HUNGER;
    MCAPI static int const ITEM_USE_INTERVAL_COUNT;
    MCAPI static int const ITEM_USE_INTERVAL_DURATION;
    MCAPI static class Attribute const LEVEL;
    MCAPI static int const MAX_ITEM_USE_DURATION;
    MCAPI static float const PLAYER_ALIVE_HEIGHT;
    MCAPI static float const PLAYER_ALIVE_WIDTH;
    MCAPI static float const PLAYER_DEAD_HEIGHT;
    MCAPI static float const PLAYER_DEAD_WIDTH;
    MCAPI static float const PLAYER_DOWN_SWIM_SPEED;
    MCAPI static float const PLAYER_GLIDING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_ITEM_USE_DEFAULT_SPEED_MODIFIER;
    MCAPI static float const PLAYER_SLEEPING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_SLEEPING_HEIGHT;
    MCAPI static float const PLAYER_SLEEPING_WIDTH;
    MCAPI static float const PLAYER_SNEAK_OFFSET;
    MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_SWIM_BREACH_ANGLE;
    MCAPI static float const PLAYER_SWIM_ENTER_THRESHOLD;
    MCAPI static float const PLAYER_SWIM_FLY_MULTI;
    MCAPI static float const PLAYER_UP_SWIM_SPEED;
    MCAPI static class Attribute const SATURATION;
    MCAPI static unsigned int const SPAWN_CHUNK_LARGE_JUMP;
    MCAPI static unsigned int const SPAWN_CHUNK_RADIUS;
    MCAPI static void _aiStep(struct IPlayerMovementProxy &);
    MCAPI static void _travel(struct IPlayerMovementProxy &, float, float, float);
    MCAPI static bool canJump(struct IPlayerMovementProxy &);
    MCAPI static bool checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, class AABB, bool, bool, bool, bool, bool, bool, short);
    MCAPI static bool checkNeedAutoJump(struct IPlayerMovementProxy *, float, float);
    MCAPI static void goDownInWater(struct IActorMovementProxy &);
    MCAPI static void handleJumpEffects(struct IPlayerMovementProxy &);
    MCAPI static bool isDangerousVolume(class BlockSource &, class AABB const &, bool);
    MCAPI static class Player * tryGetFromComponent(class FlagComponent<struct PlayerComponentFlag> const &, class ActorOwnerComponent &, bool);
    MCAPI static class Player * tryGetFromEntity(class EntityContext &, bool);
    MCAPI static class Player * tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);

//protected:
    MCAPI bool _checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, bool, bool, bool, bool, bool) const;
    MCAPI void _chooseSpawnArea();
    MCAPI bool _chooseSpawnPositionWithinArea();
    MCAPI void _registerPlayerAttributes();
    MCAPI void _updateInteraction();
    MCAPI bool _validateSpawnPositionAvailability(class Vec3 const &, class BlockSource *, class Vec3 const *const) const;
    MCAPI bool checkBed(class BlockSource *, class Vec3 const *const);
    MCAPI bool checkSpawnBlock(class BlockSource const &) const;
    MCAPI static bool _isDangerousBlock(class Block const &, bool);

//private:
    MCAPI void _addLevels(int);
    MCAPI bool _blockUsingShield(class ActorDamageSource const &, float);
    MCAPI void _ensureSafeSpawnPosition(class Vec3 &);
    MCAPI bool _findFallbackSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, unsigned int);
    MCAPI void _handleCarriedItemInteractText();
    MCAPI bool _isChunkSourceLoaded(class Vec3 const &, class BlockSource const &) const;
    MCAPI void _registerElytraLoopSound();
    MCAPI void _sendShieldUpdatePacket(class ShieldItem const &, class ItemStack const &, class ItemStack const &, enum ContainerID, int);


protected:

private:


};