// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct exploring_accessor_ExploreItem_InDetailsMode;}

namespace g{

// internal sealed class exploring_accessor_ExploreItem_InDetailsMode :41
// {
::g::Uno::UX::PropertyAccessor_type* exploring_accessor_ExploreItem_InDetailsMode_typeof();
void exploring_accessor_ExploreItem_InDetailsMode__ctor_1_fn(exploring_accessor_ExploreItem_InDetailsMode* __this);
void exploring_accessor_ExploreItem_InDetailsMode__GetAsObject_fn(exploring_accessor_ExploreItem_InDetailsMode* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void exploring_accessor_ExploreItem_InDetailsMode__get_Name_fn(exploring_accessor_ExploreItem_InDetailsMode* __this, ::g::Uno::UX::Selector* __retval);
void exploring_accessor_ExploreItem_InDetailsMode__New1_fn(exploring_accessor_ExploreItem_InDetailsMode** __retval);
void exploring_accessor_ExploreItem_InDetailsMode__get_PropertyType_fn(exploring_accessor_ExploreItem_InDetailsMode* __this, uType** __retval);
void exploring_accessor_ExploreItem_InDetailsMode__SetAsObject_fn(exploring_accessor_ExploreItem_InDetailsMode* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void exploring_accessor_ExploreItem_InDetailsMode__get_SupportsOriginSetter_fn(exploring_accessor_ExploreItem_InDetailsMode* __this, bool* __retval);

struct exploring_accessor_ExploreItem_InDetailsMode : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return _name_; }

    void ctor_1();
    static exploring_accessor_ExploreItem_InDetailsMode* New1();
};
// }

} // ::g
