// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ExploreItem.h>
#include <_root.exploring_Explo-f4635e6.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class exploring_ExploreItem_CardAlignment_Property :196
// {
static void exploring_ExploreItem_CardAlignment_Property_build(uType* type)
{
    ::TYPES[0] = ::g::ExploreItem_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*ExploreItem*/], offsetof(exploring_ExploreItem_CardAlignment_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* exploring_ExploreItem_CardAlignment_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(exploring_ExploreItem_CardAlignment_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("exploring_ExploreItem_CardAlignment_Property", options);
    type->fp_build_ = exploring_ExploreItem_CardAlignment_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))exploring_ExploreItem_CardAlignment_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))exploring_ExploreItem_CardAlignment_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))exploring_ExploreItem_CardAlignment_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))exploring_ExploreItem_CardAlignment_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public exploring_ExploreItem_CardAlignment_Property(ExploreItem obj, Uno.UX.Selector name) :199
void exploring_ExploreItem_CardAlignment_Property__ctor_3_fn(exploring_ExploreItem_CardAlignment_Property* __this, ::g::ExploreItem* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Elements.Alignment Get(Uno.UX.PropertyObject obj) :201
void exploring_ExploreItem_CardAlignment_Property__Get1_fn(exploring_ExploreItem_CardAlignment_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval)
{
    return *__retval = uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->CardAlignment(), void();
}

// public exploring_ExploreItem_CardAlignment_Property New(ExploreItem obj, Uno.UX.Selector name) :199
void exploring_ExploreItem_CardAlignment_Property__New1_fn(::g::ExploreItem* obj, ::g::Uno::UX::Selector* name, exploring_ExploreItem_CardAlignment_Property** __retval)
{
    *__retval = exploring_ExploreItem_CardAlignment_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :200
void exploring_ExploreItem_CardAlignment_Property__get_Object_fn(exploring_ExploreItem_CardAlignment_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.Alignment v, Uno.UX.IPropertyListener origin) :202
void exploring_ExploreItem_CardAlignment_Property__Set1_fn(exploring_ExploreItem_CardAlignment_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->SetCardAlignment(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :203
void exploring_ExploreItem_CardAlignment_Property__get_SupportsOriginSetter_fn(exploring_ExploreItem_CardAlignment_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public exploring_ExploreItem_CardAlignment_Property(ExploreItem obj, Uno.UX.Selector name) [instance] :199
void exploring_ExploreItem_CardAlignment_Property::ctor_3(::g::ExploreItem* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public exploring_ExploreItem_CardAlignment_Property New(ExploreItem obj, Uno.UX.Selector name) [static] :199
exploring_ExploreItem_CardAlignment_Property* exploring_ExploreItem_CardAlignment_Property::New1(::g::ExploreItem* obj, ::g::Uno::UX::Selector name)
{
    exploring_ExploreItem_CardAlignment_Property* obj1 = (exploring_ExploreItem_CardAlignment_Property*)uNew(exploring_ExploreItem_CardAlignment_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
