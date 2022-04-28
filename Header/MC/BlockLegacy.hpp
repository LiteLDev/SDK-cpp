// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Block;
class BlockSource;
class ItemStack;

#undef BEFORE_EXTRA

class BlockLegacy {

#define AFTER_EXTRA
// Add new members to class
public:
    LIAPI Block* toBlock(unsigned short tileData);
    LIAPI string getTypeName();
    LIAPI bool applyBoneMeal(BlockSource*, BlockPos*);
    LIAPI ItemStack* getBlockDrops();
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLEGACY
public:
    class BlockLegacy& operator=(class BlockLegacy const &) = delete;
    BlockLegacy(class BlockLegacy const &) = delete;
    BlockLegacy() = delete;
#endif

public:
    /*0*/ virtual ~BlockLegacy();
    /*1*/ virtual class Block const & getStateFromLegacyData(unsigned short) const;
    /*2*/ virtual class std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const &, class Block const &) const;
    /*3*/ virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /*4*/ virtual bool hasTag(class BlockSource &, class BlockPos const &, class Block const &, std::string const &) const;
    /*5*/ virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*6*/ virtual bool isObstructingChests(class BlockSource &, class BlockPos const &) const;
    /*7*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &, int &) const;
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*12*/ virtual bool updateTallestCollisionShape(class Block const &, class BlockSource &, class BlockPos const &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /*13*/ virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*14*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*15*/ virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /*16*/ virtual void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /*17*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
    /*18*/ virtual bool isSolid() const;
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual bool isSculkReplaceable(class Block const &) const;
    /*21*/ virtual bool isStrippable(class Block const &) const;
    /*22*/ virtual class Block const & getStrippedBlock(class Block const &) const;
    /*23*/ virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /*24*/ virtual bool canProvideFullSupport(class Block const &, unsigned char) const;
    /*25*/ virtual bool canProvideMultifaceSupport(class Block const &, unsigned char) const;
    /*26*/ virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /*27*/ virtual void getConnectedDirections(class Block const &, class BlockPos const &, class IConstBlockSource const &, bool &, bool &, bool &, bool &) const;
    /*28*/ virtual class CopperBehavior const * tryGetCopperBehavior() const;
    /*29*/ virtual bool isClimbable(struct IActorMovementProxy const &) const;
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual bool isWaterBlocking() const;
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual bool isDoubleSlabBlock() const;
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual bool canHurtAndBreakItem() const;
    /*50*/ virtual void __unk_vfn_50();
    /*51*/ virtual bool canBeOriginalSurface() const;
    /*52*/ virtual bool canBeAscendedByJumping(class Actor const &, class BlockPos const &) const;
    /*53*/ virtual bool isValidAuxValue(int) const;
    /*54*/ virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*55*/ virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*56*/ virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*57*/ virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual bool canContainLiquid() const;
    /*61*/ virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /*62*/ virtual void handlePrecipitation(class BlockSource &, class BlockPos const &, float, float) const;
    /*63*/ virtual bool canBeUsedInCommands(class BaseGameVersion const &) const;
    /*64*/ virtual float getThickness() const;
    /*65*/ virtual float getFlexibility(class BlockSource &, class BlockPos const &) const;
    /*66*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*67*/ virtual bool shouldDispense(class BlockSource &, class Container &) const;
    /*68*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*69*/ virtual void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /*70*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*71*/ virtual void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /*74*/ virtual void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /*75*/ virtual void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /*76*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*77*/ virtual enum BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /*78*/ virtual void updateEntityAfterFallOn(class BlockPos const &, struct IActorMovementProxy &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual bool isFilteredOut(enum BlockRenderLayer) const;
    /*81*/ virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const *) const;
    /*82*/ virtual bool ignoreEntitiesOnPistonMove(class Block const &) const;
    /*83*/ virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /*84*/ virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /*85*/ virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*86*/ virtual bool mayPick() const;
    /*87*/ virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /*88*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*89*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*90*/ virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /*91*/ virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /*92*/ virtual bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /*93*/ virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /*94*/ virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /*95*/ virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*96*/ virtual bool getIgnoresDestroyPermissions(class Actor &, class BlockPos const &) const;
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*98*/ virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*102*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /*103*/ virtual void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*106*/ virtual int calcVariant(class BlockSource &, class BlockPos const &, class mce::Color const &) const;
    /*107*/ virtual bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /*108*/ virtual bool attack(class Player *, class BlockPos const &) const;
    /*109*/ virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /*110*/ virtual bool shouldTriggerOnStandOn(class Actor &, class BlockPos const &) const;
    /*111*/ virtual bool shouldTriggerEntityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*112*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*113*/ virtual int getExperienceDrop(class Random &) const;
    /*114*/ virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /*115*/ virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /*116*/ virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /*117*/ virtual void executeEvent(std::string const &, class RenderParams &) const;
    /*118*/ virtual void executeEvent(class BlockSource &, class BlockPos const &, class Block const &, std::string const &, class Actor &) const;
    /*119*/ virtual bool executeTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /*120*/ virtual bool executeTriggerChain(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /*121*/ virtual void forceExecuteTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /*122*/ virtual class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /*123*/ virtual bool shouldStopFalling(class Actor &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*125*/ virtual float calcGroundFriction(struct IMobMovementProxy const &, class BlockPos const &) const;
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*128*/ virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /*129*/ virtual bool canSlide(class BlockSource &, class BlockPos const &) const;
    /*130*/ virtual bool canSpawnAt(class BlockSource const &, class BlockPos const &) const;
    /*131*/ virtual void notifySpawnedAt(class BlockSource &, class BlockPos const &) const;
    /*132*/ virtual void __unk_vfn_132();
    /*133*/ virtual int getIconYOffset() const;
    /*134*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*135*/ virtual bool isAuxValueRelevantForPicking() const;
    /*136*/ virtual int getColor(class Block const &) const;
    /*137*/ virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*138*/ virtual int getColorAtPos(class BlockSource &, class BlockPos const &) const;
    /*139*/ virtual int getColorForParticle(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*140*/ virtual bool isSeasonTinted(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*141*/ virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /*142*/ virtual float getShadeBrightness(class Block const &) const;
    /*143*/ virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /*144*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*145*/ virtual class AABB const & getUIShape(class Block const &, class AABB &) const;
    /*146*/ virtual int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*149*/ virtual class Block const & getRenderBlock() const;
    /*150*/ virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /*151*/ virtual enum Flip getFaceFlip(unsigned char, class Block const &) const;
    /*152*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*153*/ virtual class BlockLegacy & init();
    /*154*/ virtual class BlockLegacy & setLightBlock(struct Brightness);
    /*155*/ virtual class BlockLegacy & setLightEmission(struct Brightness);
    /*156*/ virtual class BlockLegacy & setExplodeable(float);
    /*157*/ virtual class BlockLegacy & setFlammable(class FlameOdds, class BurnOdds);
    /*158*/ virtual class BlockLegacy & setDestroyTime(float);
    /*159*/ virtual class BlockLegacy & setFriction(float);
    /*160*/ virtual class BlockLegacy & addState(class ItemState const &);
    /*161*/ virtual class BlockLegacy & addState(class ItemState const &, unsigned __int64);
    /*162*/ virtual class BlockLegacy & setAllowsRunes(bool);
    /*163*/ virtual class BlockLegacy & setCanBeOriginalSurface(bool);
    /*164*/ virtual class BlockLegacy & setMapColor(class mce::Color const &);
    /*165*/ virtual void __unk_vfn_165();
    /*166*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*167*/ virtual void setVisualShape(class AABB const &);
    /*168*/ virtual void setVisualShape(class Vec3 const &, class Vec3 const &);
    /*169*/ virtual class Block const * tryLegacyUpgrade(unsigned short) const;
    /*170*/ virtual bool dealsContactDamage(class Actor const &, class Block const &, bool) const;
    /*171*/ virtual class Block const * tryGetInfested(class Block const &) const;
    /*172*/ virtual class Block const * tryGetUninfested(class Block const &) const;
    /*173*/ virtual void _addHardCodedBlockComponents();
    /*174*/ virtual std::string _getHardCodedJSON() const;
    /*175*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*176*/ virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /*177*/ virtual void onStandOn(class EntityContext &, class BlockPos const &) const;
    /*178*/ virtual void onStepOn(class Actor &, class BlockPos const &) const;
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*182*/ virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /*183*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*185*/ virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*186*/ virtual bool shouldRandomTick() const;
    /*187*/ virtual void __unk_vfn_187();
    /*188*/ virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*190*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*191*/ virtual enum BlockRenderLayer getRenderLayer() const;
    /*192*/ virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*193*/ virtual int getExtraRenderLayers() const;
    /*194*/ virtual float getExplosionResistance(class Actor *) const;
    /*195*/ virtual struct Brightness getLightEmission(class Block const &) const;
    /*196*/ virtual struct Brightness getEmissiveBrightness(class Block const &) const;
    /*197*/ virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*198*/ virtual void __unk_vfn_198();
    /*199*/ virtual void __unk_vfn_199();
    /*200*/ virtual void _executeEvent(std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /*201*/ virtual bool _executeTrigger(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /*202*/ virtual void _forceExecuteTrigger(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /*
    inline bool isMultifaceBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isMultifaceBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool spawnBurnResources(class BlockSource & a0, float a1, float a2, float a3) const{
        bool (BlockLegacy::*rv)(class BlockSource &, float, float, float) const;
        *((void**)&rv) = dlsym("?spawnBurnResources@BlockLegacy@@UEBA_NAEAVBlockSource@@MMM@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<float>(a1), std::forward<float>(a2), std::forward<float>(a3));
    }
    inline bool isHurtableBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isHurtableBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool use(class Player & a0, class BlockPos const & a1, unsigned char a2) const{
        bool (BlockLegacy::*rv)(class Player &, class BlockPos const &, unsigned char) const;
        *((void**)&rv) = dlsym("?use@BlockLegacy@@MEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z");
        return (this->*rv)(std::forward<class Player &>(a0), std::forward<class BlockPos const &>(a1), std::forward<unsigned char>(a2));
    }
    inline bool hasVariableLighting() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?hasVariableLighting@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isLeverBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isLeverBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool pushesUpFallingBlocks() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?pushesUpFallingBlocks@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isFenceGateBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isFenceGateBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isContainerBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isContainerBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canHaveExtraData() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?canHaveExtraData@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isWallBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isWallBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isSlabBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isSlabBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInteractiveBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isInteractiveBlock@BlockLegacy@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isThinFenceBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isThinFenceBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isCraftingBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isCraftingBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool hasComparatorSignal() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?hasComparatorSignal@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool causesFreezeEffect() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?causesFreezeEffect@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool detachesOnPistonMove(class BlockSource & a0, class BlockPos const & a1) const{
        bool (BlockLegacy::*rv)(class BlockSource &, class BlockPos const &) const;
        *((void**)&rv) = dlsym("?detachesOnPistonMove@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1));
    }
    inline bool isDoorBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isDoorBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isCandleCakeBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isCandleCakeBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isSignalSource() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isSignalSource@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool waterSpreadCausesSpawn() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?waterSpreadCausesSpawn@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isBounceBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isBounceBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isFenceBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isFenceBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canBeDestroyedByWaterSpread() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?canBeDestroyedByWaterSpread@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isStairBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isStairBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isVibrationBlocking() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isVibrationBlocking@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isStemBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isStemBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isRailBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isRailBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isButtonBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isButtonBlock@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isCropBlock() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?isCropBlock@BlockLegacy@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline int getExtraRenderLayers() const{
        int (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?getExtraRenderLayers@BlockLegacy@@MEBAHXZ");
        return (this->*rv)();
    }
    inline bool canSurvive(class BlockSource & a0, class BlockPos const & a1) const{
        bool (BlockLegacy::*rv)(class BlockSource &, class BlockPos const &) const;
        *((void**)&rv) = dlsym("?canSurvive@BlockLegacy@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1));
    }
    inline bool mayPlaceOn(class BlockSource & a0, class BlockPos const & a1) const{
        bool (BlockLegacy::*rv)(class BlockSource &, class BlockPos const &) const;
        *((void**)&rv) = dlsym("?mayPlaceOn@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1));
    }
    inline bool canSpawnOn() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?canSpawnOn@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canBeSilkTouched() const{
        bool (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@BlockLegacy@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void onExploded(class BlockSource & a0, class BlockPos const & a1, class Actor * a2) const{
        void (BlockLegacy::*rv)(class BlockSource &, class BlockPos const &, class Actor *) const;
        *((void**)&rv) = dlsym("?onExploded@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1), std::forward<class Actor *>(a2));
    }
    inline void onPlace(class BlockSource & a0, class BlockPos const & a1) const{
        void (BlockLegacy::*rv)(class BlockSource &, class BlockPos const &) const;
        *((void**)&rv) = dlsym("?onPlace@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1));
    }
    inline void onStepOn(class Actor & a0, class BlockPos const & a1) const{
        void (BlockLegacy::*rv)(class Actor &, class BlockPos const &) const;
        *((void**)&rv) = dlsym("?onStepOn@BlockLegacy@@MEBAXAEAVActor@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class BlockPos const &>(a1));
    }
    inline void onPlayerPlacing(class BlockSource & a0, class BlockPos const & a1, class Actor & a2, unsigned char a3) const{
        void (BlockLegacy::*rv)(class BlockSource &, class BlockPos const &, class Actor &, unsigned char) const;
        *((void**)&rv) = dlsym("?onPlayerPlacing@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@E@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1), std::forward<class Actor &>(a2), std::forward<unsigned char>(a3));
    }
    inline void tick(class BlockSource & a0, class BlockPos const & a1, class Random & a2) const{
        void (BlockLegacy::*rv)(class BlockSource &, class BlockPos const &, class Random &) const;
        *((void**)&rv) = dlsym("?tick@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1), std::forward<class Random &>(a2));
    }
    inline void onStandOn(class EntityContext & a0, class BlockPos const & a1) const{
        void (BlockLegacy::*rv)(class EntityContext &, class BlockPos const &) const;
        *((void**)&rv) = dlsym("?onStandOn@BlockLegacy@@MEBAXAEAVEntityContext@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class EntityContext &>(a0), std::forward<class BlockPos const &>(a1));
    }
    inline void onStepOff(class Actor & a0, class BlockPos const & a1) const{
        void (BlockLegacy::*rv)(class Actor &, class BlockPos const &) const;
        *((void**)&rv) = dlsym("?onStepOff@BlockLegacy@@MEBAXAEAVActor@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0), std::forward<class BlockPos const &>(a1));
    }
    inline  ~BlockLegacy(){
         (BlockLegacy::*rv)();
        *((void**)&rv) = dlsym("??1BlockLegacy@@UEAA@XZ");
        return (this->*rv)();
    }
    inline class mce::Color getMapColor(class BlockSource & a0, class BlockPos const & a1) const{
        class mce::Color (BlockLegacy::*rv)(class BlockSource &, class BlockPos const &) const;
        *((void**)&rv) = dlsym("?getMapColor@BlockLegacy@@MEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1));
    }
    inline class mce::Color getMapColor() const{
        class mce::Color (BlockLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?getMapColor@BlockLegacy@@MEBA?AVColor@mce@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI BlockLegacy(std::string const &, int, class Material const &);
    MCAPI bool _isDataDrivingVanillaBlocksAndItems() const;
    MCAPI bool addAABB(class AABB const &, class AABB const *, std::vector<class AABB> &) const;
    MCAPI class BlockLegacy & addBlockProperties(enum BlockProperty);
    MCAPI class BlockLegacy & addTag(class HashedString const &);
    MCAPI void createBlockPermutations(unsigned int);
    MCAPI class WeakPtr<class BlockLegacy> createWeakPtr() const;
    MCAPI void forEachBlockPermutation(class std::function<bool (class Block const &)>) const;
    MCAPI void forEachItemStateInstance(class std::function<bool (class ItemStateInstance const &)>) const;
    MCAPI enum BlockActorType getBlockEntityType() const;
    MCAPI short getBlockItemId() const;
    MCAPI class ItemState const * getBlockState(class HashedString const &) const;
    MCAPI class BlockStateGroup * getBlockStateGroup();
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    MCAPI enum CreativeItemCategory getCreativeCategory() const;
    MCAPI void getDebugText(std::vector<std::string> &, class BlockPos const &) const;
    MCAPI class Block const & getDefaultState() const;
    MCAPI std::string const & getDescriptionId() const;
    MCAPI class Material const & getMaterial() const;
    MCAPI std::string const & getNamespace() const;
    MCAPI class HashedString const & getRawNameHash() const;
    MCAPI std::string const & getRawNameId() const;
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    MCAPI bool hasProperty(enum BlockProperty) const;
    MCAPI bool hasState(class HashedString const &) const;
    MCAPI bool hasState(class ItemState const &) const;
    MCAPI void initEntity(class EntityRegistry &);
    MCAPI void initializeBlockStateGroup();
    MCAPI bool isVanilla() const;
    MCAPI bool matchesStates(class BlockLegacy const &) const;
    MCAPI class BlockLegacy & overrideBlockProperties(enum BlockProperty);
    MCAPI class ItemActor * popResource(class BlockSource &, class BlockPos const &, class ItemInstance const &) const;
    MCAPI class BlockLegacy & setBlockTintType(enum BlockTintType);
    MCAPI class BlockLegacy & setCanBeExtraBlock(bool);
    MCAPI class BlockLegacy & setCategory(enum CreativeItemCategory);
    MCAPI class BlockLegacy & setCreativeEnumState(class ItemState const &);
    MCAPI class BlockLegacy & setCreativeGroup(std::string const &);
    MCAPI void setDefaultState(class Block const &);
    MCAPI void setIgnoreBlockForInsideCubeRenderer(bool);
    MCAPI void setIsInteraction(bool);
    MCAPI void setIsVanillaBlock(bool);
    MCAPI class BlockLegacy & setMinRequiredBaseGameVersion(class BaseGameVersion const &);
    MCAPI class BlockLegacy & setNameId(std::string const &);
    MCAPI void setOnlyPermutationandDefaultState(std::unique_ptr<class Block>);
    MCAPI void setPushesOutItems(bool);
    MCAPI void setRandomTicking(bool) const;
    MCAPI void setRandomTickingExtraLayer(bool) const;
    MCAPI void setSolid(bool);
    MCAPI class Block const * tryGetStateFromLegacyData(unsigned short) const;
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;
    MCAPI static float const SIZE_OFFSET;
    MCAPI static struct BlockLegacy::NameInfo extractBlockNameInfo(class HashedString const &);
    MCAPI static unsigned char getPlacementFacingAll(class Actor &, class BlockPos const &, float);
    MCAPI static unsigned char getPlacementFacingAllExceptAxisY(class Actor &, class BlockPos const &, float);
    MCAPI static void spawnResources(class BlockSource &, class BlockPos const &, class Randomize &, std::vector<class Item const *> *, float, int);

protected:
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool, class AABB const &) const;
    MCAPI bool forEachBlockPermutationMutable(class std::function<bool (class Block &)>);
    MCAPI float getFriction() const;
    MCAPI static class AABB createAABBWithPixelCoordinates(float, float, float, float, float, float);

private:
    MCAPI void initParams(class RenderParams &, class BlockSource &, class BlockPos const &, class Actor *) const;

};