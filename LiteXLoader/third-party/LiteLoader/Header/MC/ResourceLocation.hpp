// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourceLocation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCELOCATION
public:
    class ResourceLocation& operator=(class ResourceLocation const&) = delete;
    ResourceLocation(class ResourceLocation const&) = delete;
#endif

public:
    MCAPI ResourceLocation(class Core::Path const&);
    MCAPI ResourceLocation(class Core::Path const&, enum ResourceFileSystem);
    MCAPI ResourceLocation();
    MCAPI class Core::PathBuffer<std::string > getFullPath() const;
    MCAPI class Core::PathBuffer<std::string > const& getRelativePath() const;
    MCAPI bool operator==(class ResourceLocation const&);
    MCAPI void serialize(class Json::Value&) const;
    MCAPI void setRelativePath(class Core::PathBuffer<std::string > const&);
    MCAPI ~ResourceLocation();
    MCAPI static class ResourceLocation const& getEmptyLocation();

protected:

private:

};