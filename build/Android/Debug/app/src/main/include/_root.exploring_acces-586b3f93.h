// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct exploring_accessor_ExploreItem_ForegroundColor;}

namespace g{

// internal sealed class exploring_accessor_ExploreItem_ForegroundColor :31
// {
::g::Uno::UX::PropertyAccessor_type* exploring_accessor_ExploreItem_ForegroundColor_typeof();
void exploring_accessor_ExploreItem_ForegroundColor__ctor_1_fn(exploring_accessor_ExploreItem_ForegroundColor* __this);
void exploring_accessor_ExploreItem_ForegroundColor__GetAsObject_fn(exploring_accessor_ExploreItem_ForegroundColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void exploring_accessor_ExploreItem_ForegroundColor__get_Name_fn(exploring_accessor_ExploreItem_ForegroundColor* __this, ::g::Uno::UX::Selector* __retval);
void exploring_accessor_ExploreItem_ForegroundColor__New1_fn(exploring_accessor_ExploreItem_ForegroundColor** __retval);
void exploring_accessor_ExploreItem_ForegroundColor__get_PropertyType_fn(exploring_accessor_ExploreItem_ForegroundColor* __this, uType** __retval);
void exploring_accessor_ExploreItem_ForegroundColor__SetAsObject_fn(exploring_accessor_ExploreItem_ForegroundColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void exploring_accessor_ExploreItem_ForegroundColor__get_SupportsOriginSetter_fn(exploring_accessor_ExploreItem_ForegroundColor* __this, bool* __retval);

struct exploring_accessor_ExploreItem_ForegroundColor : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return _name_; }

    void ctor_1();
    static exploring_accessor_ExploreItem_ForegroundColor* New1();
};
// }

} // ::g
