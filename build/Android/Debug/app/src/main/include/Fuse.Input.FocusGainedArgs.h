// This file was generated based on '../../../AppData/Local/Fusetools/Packages/Fuse.Nodes/1.4.2/Input/FocusEvents.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct FocusGainedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class FocusGainedArgs :7
// {
uType* FocusGainedArgs_typeof();
void FocusGainedArgs__ctor_2_fn(FocusGainedArgs* __this, ::g::Fuse::Visual* visual);
void FocusGainedArgs__New3_fn(::g::Fuse::Visual* visual, FocusGainedArgs** __retval);

struct FocusGainedArgs : ::g::Fuse::VisualEventArgs
{
    void ctor_2(::g::Fuse::Visual* visual);
    static FocusGainedArgs* New3(::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input