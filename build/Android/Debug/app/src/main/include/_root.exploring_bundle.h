// This file was generated based on exploring.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{struct exploring_bundle;}

namespace g{

// public static generated class exploring_bundle :0
// {
uClassType* exploring_bundle_typeof();

struct exploring_bundle : uObject
{
    static uSStrong< ::g::Uno::IO::BundleFile*> MainView8330d5b2_;
    static uSStrong< ::g::Uno::IO::BundleFile*>& MainView8330d5b2() { return exploring_bundle_typeof()->Init(), MainView8330d5b2_; }
};
// }

} // ::g
