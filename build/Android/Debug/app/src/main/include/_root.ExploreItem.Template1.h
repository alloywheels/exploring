// This file was generated based on '.uno/ux13/ExploreItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ExploreItem;}
namespace g{struct ExploreItem__Template1;}

namespace g{

// public partial sealed class ExploreItem.Template1 :123
// {
::g::Uno::UX::Template_type* ExploreItem__Template1_typeof();
void ExploreItem__Template1__ctor_1_fn(ExploreItem__Template1* __this, ::g::ExploreItem* parent, ::g::ExploreItem* parentInstance);
void ExploreItem__Template1__New1_fn(ExploreItem__Template1* __this, uObject** __retval);
void ExploreItem__Template1__New2_fn(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance, ExploreItem__Template1** __retval);

struct ExploreItem__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::ExploreItem*> __parent1;
    uWeak< ::g::ExploreItem*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_File_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ExploreItem__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance);
    static ExploreItem__Template1* New2(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance);
};
// }

} // ::g
