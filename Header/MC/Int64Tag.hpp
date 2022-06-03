// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Int64Tag : public Tag {

#define AFTER_EXTRA
// Add Member There
int64_t val;

public:
    LIAPI int64_t& value();
    LIAPI Int64Tag& operator=(int64_t val);
    LIAPI static std::unique_ptr<Int64Tag> create(int64_t val = 0);
    LIAPI bool set(int64_t val);
    LIAPI int64_t get();
    LIAPI operator int64_t() const;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INT64TAG
public:
    class Int64Tag& operator=(class Int64Tag const &) = delete;
    Int64Tag(class Int64Tag const &) = delete;
#endif

public:
    /*0*/ virtual ~Int64Tag();
    /*2*/ virtual void write(class IDataOutput &) const;
    /*3*/ virtual void load(class IDataInput &);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual enum Tag::Type getId() const;
    /*6*/ virtual bool equals(class Tag const &) const;
    /*9*/ virtual std::unique_ptr<class Tag> copy() const;
    /*10*/ virtual unsigned __int64 hash() const;
    MCAPI Int64Tag();
    MCAPI Int64Tag(__int64);

protected:

private:

};