// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.HitTestMode.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct exploring_FuseElementsElement_HitTestMode_Property;}

namespace g{

// internal sealed class exploring_FuseElementsElement_HitTestMode_Property :134
// {
::g::Uno::UX::Property1_type* exploring_FuseElementsElement_HitTestMode_Property_typeof();
void exploring_FuseElementsElement_HitTestMode_Property__ctor_3_fn(exploring_FuseElementsElement_HitTestMode_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void exploring_FuseElementsElement_HitTestMode_Property__Get1_fn(exploring_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval);
void exploring_FuseElementsElement_HitTestMode_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, exploring_FuseElementsElement_HitTestMode_Property** __retval);
void exploring_FuseElementsElement_HitTestMode_Property__get_Object_fn(exploring_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void exploring_FuseElementsElement_HitTestMode_Property__Set1_fn(exploring_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin);
void exploring_FuseElementsElement_HitTestMode_Property__get_SupportsOriginSetter_fn(exploring_FuseElementsElement_HitTestMode_Property* __this, bool* __retval);

struct exploring_FuseElementsElement_HitTestMode_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static exploring_FuseElementsElement_HitTestMode_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
