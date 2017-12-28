// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct exploring_FuseControlsScrollViewBase_UserScroll_Property;}

namespace g{

// internal sealed class exploring_FuseControlsScrollViewBase_UserScroll_Property :152
// {
::g::Uno::UX::Property1_type* exploring_FuseControlsScrollViewBase_UserScroll_Property_typeof();
void exploring_FuseControlsScrollViewBase_UserScroll_Property__ctor_3_fn(exploring_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name);
void exploring_FuseControlsScrollViewBase_UserScroll_Property__Get1_fn(exploring_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void exploring_FuseControlsScrollViewBase_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name, exploring_FuseControlsScrollViewBase_UserScroll_Property** __retval);
void exploring_FuseControlsScrollViewBase_UserScroll_Property__get_Object_fn(exploring_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void exploring_FuseControlsScrollViewBase_UserScroll_Property__Set1_fn(exploring_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct exploring_FuseControlsScrollViewBase_UserScroll_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::ScrollViewBase*> _obj;

    void ctor_3(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name);
    static exploring_FuseControlsScrollViewBase_UserScroll_Property* New1(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
