// This file was generated based on '../../../AppData/Local/Fusetools/Packages/Fuse.Nodes/1.4.2/Input/PointerEvents.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct CustomPointerEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract class CustomPointerEventArgs :4
// {
uType* CustomPointerEventArgs_typeof();
void CustomPointerEventArgs__ctor_3_fn(CustomPointerEventArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);

struct CustomPointerEventArgs : ::g::Fuse::Input::PointerEventArgs
{
    void ctor_3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
