// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ExploreItem;}
namespace g{struct exploring_ExploreItem_InDetailsMode_Property;}

namespace g{

// internal sealed class exploring_ExploreItem_InDetailsMode_Property :213
// {
::g::Uno::UX::Property1_type* exploring_ExploreItem_InDetailsMode_Property_typeof();
void exploring_ExploreItem_InDetailsMode_Property__ctor_3_fn(exploring_ExploreItem_InDetailsMode_Property* __this, ::g::ExploreItem* obj, ::g::Uno::UX::Selector* name);
void exploring_ExploreItem_InDetailsMode_Property__Get1_fn(exploring_ExploreItem_InDetailsMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void exploring_ExploreItem_InDetailsMode_Property__New1_fn(::g::ExploreItem* obj, ::g::Uno::UX::Selector* name, exploring_ExploreItem_InDetailsMode_Property** __retval);
void exploring_ExploreItem_InDetailsMode_Property__get_Object_fn(exploring_ExploreItem_InDetailsMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void exploring_ExploreItem_InDetailsMode_Property__Set1_fn(exploring_ExploreItem_InDetailsMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);
void exploring_ExploreItem_InDetailsMode_Property__get_SupportsOriginSetter_fn(exploring_ExploreItem_InDetailsMode_Property* __this, bool* __retval);

struct exploring_ExploreItem_InDetailsMode_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::ExploreItem*> _obj;

    void ctor_3(::g::ExploreItem* obj, ::g::Uno::UX::Selector name);
    static exploring_ExploreItem_InDetailsMode_Property* New1(::g::ExploreItem* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
