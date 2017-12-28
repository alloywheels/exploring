// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.exploring_FuseC-2990a784.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class exploring_FuseControlsTextControl_FontSize_Property :68
// {
static void exploring_FuseControlsTextControl_FontSize_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.TextControl*/], offsetof(exploring_FuseControlsTextControl_FontSize_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* exploring_FuseControlsTextControl_FontSize_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(exploring_FuseControlsTextControl_FontSize_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("exploring_FuseControlsTextControl_FontSize_Property", options);
    type->fp_build_ = exploring_FuseControlsTextControl_FontSize_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))exploring_FuseControlsTextControl_FontSize_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))exploring_FuseControlsTextControl_FontSize_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))exploring_FuseControlsTextControl_FontSize_Property__Set1_fn;
    return type;
}

// public exploring_FuseControlsTextControl_FontSize_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :71
void exploring_FuseControlsTextControl_FontSize_Property__ctor_3_fn(exploring_FuseControlsTextControl_FontSize_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :73
void exploring_FuseControlsTextControl_FontSize_Property__Get1_fn(exploring_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->FontSize(), void();
}

// public exploring_FuseControlsTextControl_FontSize_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :71
void exploring_FuseControlsTextControl_FontSize_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, exploring_FuseControlsTextControl_FontSize_Property** __retval)
{
    *__retval = exploring_FuseControlsTextControl_FontSize_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :72
void exploring_FuseControlsTextControl_FontSize_Property__get_Object_fn(exploring_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :74
void exploring_FuseControlsTextControl_FontSize_Property__Set1_fn(exploring_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->FontSize(v_);
}

// public exploring_FuseControlsTextControl_FontSize_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :71
void exploring_FuseControlsTextControl_FontSize_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public exploring_FuseControlsTextControl_FontSize_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :71
exploring_FuseControlsTextControl_FontSize_Property* exploring_FuseControlsTextControl_FontSize_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    exploring_FuseControlsTextControl_FontSize_Property* obj1 = (exploring_FuseControlsTextControl_FontSize_Property*)uNew(exploring_FuseControlsTextControl_FontSize_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
