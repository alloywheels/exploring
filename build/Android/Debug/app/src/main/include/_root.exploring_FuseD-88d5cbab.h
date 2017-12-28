// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct exploring_FuseDrawingSolidColor_Color_Property;}

namespace g{

// internal sealed class exploring_FuseDrawingSolidColor_Color_Property :143
// {
::g::Uno::UX::Property1_type* exploring_FuseDrawingSolidColor_Color_Property_typeof();
void exploring_FuseDrawingSolidColor_Color_Property__ctor_3_fn(exploring_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name);
void exploring_FuseDrawingSolidColor_Color_Property__Get1_fn(exploring_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void exploring_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, exploring_FuseDrawingSolidColor_Color_Property** __retval);
void exploring_FuseDrawingSolidColor_Color_Property__get_Object_fn(exploring_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void exploring_FuseDrawingSolidColor_Color_Property__Set1_fn(exploring_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void exploring_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(exploring_FuseDrawingSolidColor_Color_Property* __this, bool* __retval);

struct exploring_FuseDrawingSolidColor_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Drawing::SolidColor*> _obj;

    void ctor_3(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name);
    static exploring_FuseDrawingSolidColor_Color_Property* New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
