// This file was generated based on '../../../AppData/Local/Fusetools/Packages/Fuse.Elements/1.4.2/LayoutFunctions.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// public abstract class LayoutFunction :7
// {
struct LayoutFunction_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_GetCurrentValue)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::Elements::Element*, uObject**);
    void(*fp_GetValue)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**);
};

LayoutFunction_type* LayoutFunction_typeof();
void LayoutFunction__ctor_2_fn(LayoutFunction* __this, ::g::Fuse::Reactive::Expression* element);
void LayoutFunction__Subscribe_fn(LayoutFunction* __this, uObject* dc, uObject* listener, uObject** __retval);

struct LayoutFunction : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* element);
    uObject* GetCurrentValue(::g::Fuse::Elements::Element* elm) { uObject* __retval; return (((LayoutFunction_type*)__type)->fp_GetCurrentValue)(this, elm, &__retval), __retval; }
    uObject* GetValue(::g::Fuse::PlacedArgs* args) { uObject* __retval; return (((LayoutFunction_type*)__type)->fp_GetValue)(this, args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Elements
