// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.exploring_FuseS-f1906cbd.h>
#include <Fuse.Selection.Selection.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class exploring_FuseSelectionSelection_Value_Property :160
// {
static void exploring_FuseSelectionSelection_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Selection::Selection_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Selection.Selection*/], offsetof(exploring_FuseSelectionSelection_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* exploring_FuseSelectionSelection_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(exploring_FuseSelectionSelection_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("exploring_FuseSelectionSelection_Value_Property", options);
    type->fp_build_ = exploring_FuseSelectionSelection_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))exploring_FuseSelectionSelection_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))exploring_FuseSelectionSelection_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))exploring_FuseSelectionSelection_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))exploring_FuseSelectionSelection_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public exploring_FuseSelectionSelection_Value_Property(Fuse.Selection.Selection obj, Uno.UX.Selector name) :163
void exploring_FuseSelectionSelection_Value_Property__ctor_3_fn(exploring_FuseSelectionSelection_Value_Property* __this, ::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :165
void exploring_FuseSelectionSelection_Value_Property__Get1_fn(exploring_FuseSelectionSelection_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Selection::Selection*>(obj, ::TYPES[0/*Fuse.Selection.Selection*/]))->Value(), void();
}

// public exploring_FuseSelectionSelection_Value_Property New(Fuse.Selection.Selection obj, Uno.UX.Selector name) :163
void exploring_FuseSelectionSelection_Value_Property__New1_fn(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector* name, exploring_FuseSelectionSelection_Value_Property** __retval)
{
    *__retval = exploring_FuseSelectionSelection_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :164
void exploring_FuseSelectionSelection_Value_Property__get_Object_fn(exploring_FuseSelectionSelection_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :166
void exploring_FuseSelectionSelection_Value_Property__Set1_fn(exploring_FuseSelectionSelection_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Selection::Selection*>(obj, ::TYPES[0/*Fuse.Selection.Selection*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :167
void exploring_FuseSelectionSelection_Value_Property__get_SupportsOriginSetter_fn(exploring_FuseSelectionSelection_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public exploring_FuseSelectionSelection_Value_Property(Fuse.Selection.Selection obj, Uno.UX.Selector name) [instance] :163
void exploring_FuseSelectionSelection_Value_Property::ctor_3(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public exploring_FuseSelectionSelection_Value_Property New(Fuse.Selection.Selection obj, Uno.UX.Selector name) [static] :163
exploring_FuseSelectionSelection_Value_Property* exploring_FuseSelectionSelection_Value_Property::New1(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector name)
{
    exploring_FuseSelectionSelection_Value_Property* obj1 = (exploring_FuseSelectionSelection_Value_Property*)uNew(exploring_FuseSelectionSelection_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
