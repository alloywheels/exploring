// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Alignment.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ExploreItem;}
namespace g{struct exploring_ExploreItem_CardAlignment_Property;}

namespace g{

// internal sealed class exploring_ExploreItem_CardAlignment_Property :196
// {
::g::Uno::UX::Property1_type* exploring_ExploreItem_CardAlignment_Property_typeof();
void exploring_ExploreItem_CardAlignment_Property__ctor_3_fn(exploring_ExploreItem_CardAlignment_Property* __this, ::g::ExploreItem* obj, ::g::Uno::UX::Selector* name);
void exploring_ExploreItem_CardAlignment_Property__Get1_fn(exploring_ExploreItem_CardAlignment_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval);
void exploring_ExploreItem_CardAlignment_Property__New1_fn(::g::ExploreItem* obj, ::g::Uno::UX::Selector* name, exploring_ExploreItem_CardAlignment_Property** __retval);
void exploring_ExploreItem_CardAlignment_Property__get_Object_fn(exploring_ExploreItem_CardAlignment_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void exploring_ExploreItem_CardAlignment_Property__Set1_fn(exploring_ExploreItem_CardAlignment_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin);
void exploring_ExploreItem_CardAlignment_Property__get_SupportsOriginSetter_fn(exploring_ExploreItem_CardAlignment_Property* __this, bool* __retval);

struct exploring_ExploreItem_CardAlignment_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::ExploreItem*> _obj;

    void ctor_3(::g::ExploreItem* obj, ::g::Uno::UX::Selector name);
    static exploring_ExploreItem_CardAlignment_Property* New1(::g::ExploreItem* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
