// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldTemplatePackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEPACKSOURCE
public:
    class WorldTemplatePackSource& operator=(class WorldTemplatePackSource const&) = delete;
    WorldTemplatePackSource(class WorldTemplatePackSource const&) = delete;
    WorldTemplatePackSource() = delete;
#endif

public:
    /*0*/ virtual ~WorldTemplatePackSource();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual class PackSourceReport load(class IPackManifestFactory&, class IContentKeyProvider const&);

protected:

private:

};