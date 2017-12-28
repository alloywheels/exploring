// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Element.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct exploring_FuseElementsElement_ElementLayoutMaster_Property;}

namespace g{

// internal sealed class exploring_FuseElementsElement_ElementLayoutMaster_Property :109
// {
::g::Uno::UX::Property1_type* exploring_FuseElementsElement_ElementLayoutMaster_Property_typeof();
void exploring_FuseElementsElement_ElementLayoutMaster_Property__ctor_3_fn(exploring_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void exploring_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn(exploring_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element** __retval);
void exploring_FuseElementsElement_ElementLayoutMaster_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, exploring_FuseElementsElement_ElementLayoutMaster_Property** __retval);
void exploring_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn(exploring_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void exploring_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn(exploring_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element* v, uObject* origin);

struct exploring_FuseElementsElement_ElementLayoutMaster_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static exploring_FuseElementsElement_ElementLayoutMaster_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
