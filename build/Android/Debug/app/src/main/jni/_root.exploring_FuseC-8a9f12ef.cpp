// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.exploring_FuseC-8a9f12ef.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class exploring_FuseControlsScrollViewBase_UserScroll_Property :152
// {
static void exploring_FuseControlsScrollViewBase_UserScroll_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.ScrollViewBase*/], offsetof(exploring_FuseControlsScrollViewBase_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* exploring_FuseControlsScrollViewBase_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(exploring_FuseControlsScrollViewBase_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("exploring_FuseControlsScrollViewBase_UserScroll_Property", options);
    type->fp_build_ = exploring_FuseControlsScrollViewBase_UserScroll_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))exploring_FuseControlsScrollViewBase_UserScroll_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))exploring_FuseControlsScrollViewBase_UserScroll_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))exploring_FuseControlsScrollViewBase_UserScroll_Property__Set1_fn;
    return type;
}

// public exploring_FuseControlsScrollViewBase_UserScroll_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :155
void exploring_FuseControlsScrollViewBase_UserScroll_Property__ctor_3_fn(exploring_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :157
void exploring_FuseControlsScrollViewBase_UserScroll_Property__Get1_fn(exploring_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[0/*Fuse.Controls.ScrollViewBase*/]))->UserScroll(), void();
}

// public exploring_FuseControlsScrollViewBase_UserScroll_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :155
void exploring_FuseControlsScrollViewBase_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name, exploring_FuseControlsScrollViewBase_UserScroll_Property** __retval)
{
    *__retval = exploring_FuseControlsScrollViewBase_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :156
void exploring_FuseControlsScrollViewBase_UserScroll_Property__get_Object_fn(exploring_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :158
void exploring_FuseControlsScrollViewBase_UserScroll_Property__Set1_fn(exploring_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[0/*Fuse.Controls.ScrollViewBase*/]))->UserScroll(v_);
}

// public exploring_FuseControlsScrollViewBase_UserScroll_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [instance] :155
void exploring_FuseControlsScrollViewBase_UserScroll_Property::ctor_3(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public exploring_FuseControlsScrollViewBase_UserScroll_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [static] :155
exploring_FuseControlsScrollViewBase_UserScroll_Property* exploring_FuseControlsScrollViewBase_UserScroll_Property::New1(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    exploring_FuseControlsScrollViewBase_UserScroll_Property* obj1 = (exploring_FuseControlsScrollViewBase_UserScroll_Property*)uNew(exploring_FuseControlsScrollViewBase_UserScroll_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
