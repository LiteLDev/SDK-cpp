/**
 * @file  MC/VarIntDataOutput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VarIntDataOutput.
 *
 */
class VarIntDataOutput {

#define AFTER_EXTRA
// Add Member There
public:
    BinaryStream* stream;

    // Manually delete it after you finish using it
    static VarIntDataOutput* newVarIntDataOutput(BinaryStream* bs) {
        struct VarIntDataOutput_C {
            __int64 vtbl;
            BinaryStream* stream;
        }* CStruct      = new VarIntDataOutput_C();
        CStruct->stream = bs;
        CStruct->vtbl   = (__int64)dlsym("??_7VarIntDataOutput@@6B@");
        return (VarIntDataOutput*)CStruct;
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARINTDATAOUTPUT
public:
    class VarIntDataOutput& operator=(class VarIntDataOutput const &) = delete;
    VarIntDataOutput(class VarIntDataOutput const &) = delete;
    VarIntDataOutput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~VarIntDataOutput();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   -562292095
     * @vftbl  3
     * @symbol ?writeFloat@VarIntDataOutput@@UEAAXM@Z
     */
    virtual void writeFloat(float);
    /**
     * @hash   857157737
     * @vftbl  4
     * @symbol ?writeDouble@VarIntDataOutput@@UEAAXN@Z
     */
    virtual void writeDouble(double);
    /**
     * @hash   -1388727075
     * @vftbl  5
     * @symbol ?writeByte@VarIntDataOutput@@UEAAXD@Z
     */
    virtual void writeByte(char);
    /**
     * @hash   -1238634895
     * @vftbl  6
     * @symbol ?writeShort@VarIntDataOutput@@UEAAXF@Z
     */
    virtual void writeShort(short);
    /**
     * @hash   -963633109
     * @vftbl  7
     * @symbol ?writeInt@VarIntDataOutput@@UEAAXH@Z
     */
    virtual void writeInt(int);
    /**
     * @hash   -989169170
     * @vftbl  8
     * @symbol ?writeLongLong@VarIntDataOutput@@UEAAX_J@Z
     */
    virtual void writeLongLong(__int64);
    /**
     * @hash   1886334435
     * @vftbl  9
     * @symbol ?writeBytes@VarIntDataOutput@@UEAAXPEBX_K@Z
     */
    virtual void writeBytes(void const *, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARINTDATAOUTPUT
    /**
     * @hash   -1995360189
     * @symbol ?writeLongString@VarIntDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCVAPI void writeLongString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   194158943
     * @symbol ?writeString@VarIntDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCVAPI void writeString(class gsl::basic_string_span<char const, -1>);
#endif

};