// This file was generated based on '../../../AppData/Local/Fusetools/Packages/Fuse.Elements/1.4.2/Triggers/LayoutAnimation.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransitionedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// internal sealed class LayoutTransitionedArgs :8
// {
uType* LayoutTransitionedArgs_typeof();
void LayoutTransitionedArgs__ctor_2_fn(LayoutTransitionedArgs* __this, ::g::Fuse::Visual* node);
void LayoutTransitionedArgs__New3_fn(::g::Fuse::Visual* node, LayoutTransitionedArgs** __retval);

struct LayoutTransitionedArgs : ::g::Fuse::VisualEventArgs
{
    void ctor_2(::g::Fuse::Visual* node);
    static LayoutTransitionedArgs* New3(::g::Fuse::Visual* node);
};
// }

}}} // ::g::Fuse::Triggers
