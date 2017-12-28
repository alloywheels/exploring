// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Selection{struct Selection;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct exploring_FuseSelectionSelection_Value_Property;}

namespace g{

// internal sealed class exploring_FuseSelectionSelection_Value_Property :160
// {
::g::Uno::UX::Property1_type* exploring_FuseSelectionSelection_Value_Property_typeof();
void exploring_FuseSelectionSelection_Value_Property__ctor_3_fn(exploring_FuseSelectionSelection_Value_Property* __this, ::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector* name);
void exploring_FuseSelectionSelection_Value_Property__Get1_fn(exploring_FuseSelectionSelection_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void exploring_FuseSelectionSelection_Value_Property__New1_fn(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector* name, exploring_FuseSelectionSelection_Value_Property** __retval);
void exploring_FuseSelectionSelection_Value_Property__get_Object_fn(exploring_FuseSelectionSelection_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void exploring_FuseSelectionSelection_Value_Property__Set1_fn(exploring_FuseSelectionSelection_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void exploring_FuseSelectionSelection_Value_Property__get_SupportsOriginSetter_fn(exploring_FuseSelectionSelection_Value_Property* __this, bool* __retval);

struct exploring_FuseSelectionSelection_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Selection::Selection*> _obj;

    void ctor_3(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector name);
    static exploring_FuseSelectionSelection_Value_Property* New1(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
