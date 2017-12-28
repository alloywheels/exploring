// This file was generated based on exploring.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.exploring_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class exploring_bundle :0
// {
// static exploring_bundle() :0
static void exploring_bundle__cctor__fn(uType* __type)
{
    exploring_bundle::MainView8330d5b2_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"exploring"*/]))->GetFile(::STRINGS[1/*"mainview-cb...*/]);
}

static void exploring_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("exploring");
    ::STRINGS[1] = uString::Const("mainview-cb8c4a65.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&exploring_bundle::MainView8330d5b2_, uFieldFlagsStatic);
}

uClassType* exploring_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("exploring_bundle", options);
    type->fp_build_ = exploring_bundle_build;
    type->fp_cctor_ = exploring_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> exploring_bundle::MainView8330d5b2_;
// }

} // ::g
