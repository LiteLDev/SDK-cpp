/**
 * @file  MobEffectInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "MobEffect.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEffectInstance.
 *
 */
class MobEffectInstance {

#define AFTER_EXTRA
// Add Member There
public:
char filler[122];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTINSTANCE
public:
    MobEffectInstance() = delete;
#endif

public:
    /**
     * @symbol ??0MobEffectInstance@@QEAA@IHH_N00@Z
     * @hash   -1289932632
     */
    MCAPI MobEffectInstance(unsigned int, int, int, bool, bool, bool);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@IHHHHH_N00@Z
     * @hash   1195800839
     */
    MCAPI MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@IHH@Z
     * @hash   962181219
     */
    MCAPI MobEffectInstance(unsigned int, int, int);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@IH@Z
     * @hash   1016569696
     */
    MCAPI MobEffectInstance(unsigned int, int);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@I@Z
     * @hash   1018220003
     */
    MCAPI MobEffectInstance(unsigned int);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@$$QEAV0@@Z
     * @hash   -1615422283
     */
    MCAPI MobEffectInstance(class MobEffectInstance &&);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@AEBV0@@Z
     * @hash   -1918981311
     */
    MCAPI MobEffectInstance(class MobEffectInstance const &);
    /**
     * @symbol ?applyEffects@MobEffectInstance@@QEAAXPEAVActor@@@Z
     * @hash   -1618457759
     */
    MCAPI void applyEffects(class Actor *);
    /**
     * @symbol ?displaysOnScreenTextureAnimation@MobEffectInstance@@QEBA_NXZ
     * @hash   1098733748
     */
    MCAPI bool displaysOnScreenTextureAnimation() const;
    /**
     * @symbol ?getAmplifier@MobEffectInstance@@QEBAHXZ
     * @hash   -1030346932
     */
    MCAPI int getAmplifier() const;
    /**
     * @symbol ?getComponentName@MobEffectInstance@@QEBAAEBVHashedString@@XZ
     * @hash   -1245135436
     */
    MCAPI class HashedString const & getComponentName() const;
    /**
     * @symbol ?getDifficulityDuration@MobEffectInstance@@QEBAHW4Difficulty@@@Z
     * @hash   1687914613
     */
    MCAPI int getDifficulityDuration(enum class Difficulty) const;
    /**
     * @symbol ?getDisplayName@MobEffectInstance@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -204301150
     */
    MCAPI std::string getDisplayName() const;
    /**
     * @symbol ?getDuration@MobEffectInstance@@QEBAHXZ
     * @hash   547116652
     */
    MCAPI int getDuration() const;
    /**
     * @symbol ?getId@MobEffectInstance@@QEBAIXZ
     * @hash   -288619116
     */
    MCAPI unsigned int getId() const;
    /**
     * @symbol ?getLingerDuration@MobEffectInstance@@QEBAHXZ
     * @hash   1250539298
     */
    MCAPI int getLingerDuration() const;
    /**
     * @symbol ?getSplashDuration@MobEffectInstance@@QEBAHXZ
     * @hash   1069628874
     */
    MCAPI int getSplashDuration() const;
    /**
     * @symbol ?getSplashEffect@MobEffectInstance@@QEBA?AV1@XZ
     * @hash   -1401684761
     */
    MCAPI class MobEffectInstance getSplashEffect() const;
    /**
     * @symbol ?isAmbient@MobEffectInstance@@QEBA_NXZ
     * @hash   -213323966
     */
    MCAPI bool isAmbient() const;
    /**
     * @symbol ?isEffectVisible@MobEffectInstance@@QEBA_NXZ
     * @hash   -1164485582
     */
    MCAPI bool isEffectVisible() const;
    /**
     * @symbol ??9MobEffectInstance@@QEBA_NAEBV0@@Z
     * @hash   1393276118
     */
    MCAPI bool operator!=(class MobEffectInstance const &) const;
    /**
     * @symbol ??4MobEffectInstance@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   1439826624
     */
    MCAPI class MobEffectInstance & operator=(class MobEffectInstance &&);
    /**
     * @symbol ??4MobEffectInstance@@QEAAAEAV0@AEBV0@@Z
     * @hash   -733702724
     */
    MCAPI class MobEffectInstance & operator=(class MobEffectInstance const &);
    /**
     * @symbol ??8MobEffectInstance@@QEBA_NAEBV0@@Z
     * @hash   35562337
     */
    MCAPI bool operator==(class MobEffectInstance const &) const;
    /**
     * @symbol ?removeEffects@MobEffectInstance@@QEBAXPEAVActor@@@Z
     * @hash   528994827
     */
    MCAPI void removeEffects(class Actor *) const;
    /**
     * @symbol ?save@MobEffectInstance@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -33326296
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ?setDifficulityDuration@MobEffectInstance@@QEAAXW4Difficulty@@H@Z
     * @hash   -1111820233
     */
    MCAPI void setDifficulityDuration(enum class Difficulty, int);
    /**
     * @symbol ?setDuration@MobEffectInstance@@QEAAXH@Z
     * @hash   1765283482
     */
    MCAPI void setDuration(int);
    /**
     * @symbol ?tick@MobEffectInstance@@QEAA_NPEAVActor@@@Z
     * @hash   133732616
     */
    MCAPI bool tick(class Actor *);
    /**
     * @symbol ?tryInitializeMobEffectData@MobEffectInstance@@QEAAXXZ
     * @hash   -492876541
     */
    MCAPI void tryInitializeMobEffectData();
    /**
     * @symbol ?update@MobEffectInstance@@QEAAXAEBV1@@Z
     * @hash   -1823055825
     */
    MCAPI void update(class MobEffectInstance const &);
    /**
     * @symbol ?updateEffects@MobEffectInstance@@QEBAXPEAVActor@@@Z
     * @hash   -852397275
     */
    MCAPI void updateEffects(class Actor *) const;
    /**
     * @symbol ??1MobEffectInstance@@QEAA@XZ
     * @hash   -1313133118
     */
    MCAPI ~MobEffectInstance();
    /**
     * @symbol ?MAX_AMPLIFIER_COUNT@MobEffectInstance@@2HB
     * @hash   356945709
     */
    MCAPI static int const MAX_AMPLIFIER_COUNT;
    /**
     * @symbol ?NO_EFFECT@MobEffectInstance@@2V1@B
     * @hash   -1196231254
     */
    MCAPI static class MobEffectInstance const NO_EFFECT;
    /**
     * @symbol ?areAllEffectsAmbient@MobEffectInstance@@SA_NAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
     * @hash   1081833093
     */
    MCAPI static bool areAllEffectsAmbient(std::vector<class MobEffectInstance> const &);
    /**
     * @symbol ?getColorValue@MobEffectInstance@@SA?AVColor@mce@@AEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
     * @hash   906530775
     */
    MCAPI static class mce::Color getColorValue(std::vector<class MobEffectInstance> const &);
    /**
     * @symbol ?load@MobEffectInstance@@SA?AV1@AEBVCompoundTag@@@Z
     * @hash   -1632499002
     */
    MCAPI static class MobEffectInstance load(class CompoundTag const &);

};