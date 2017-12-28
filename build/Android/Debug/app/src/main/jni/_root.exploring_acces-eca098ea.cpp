// This file was generated based on '.uno/ux13/exploring.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ExploreItem.h>
#include <_root.exploring_acces-eca098ea.h>
#include <Fuse.Elements.Alignment.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class exploring_accessor_ExploreItem_CardAlignment :1
// {
// static generated exploring_accessor_ExploreItem_CardAlignment() :1
static void exploring_accessor_ExploreItem_CardAlignment__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    exploring_accessor_ExploreItem_CardAlignment::Singleton_ = exploring_accessor_ExploreItem_CardAlignment::New1();
    exploring_accessor_ExploreItem_CardAlignment::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"CardAlignment"*/]);
}

static void exploring_accessor_ExploreItem_CardAlignment_build(uType* type)
{
    ::STRINGS[0] = uString::Const("CardAlignment");
    ::TYPES[0] = ::g::ExploreItem_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&exploring_accessor_ExploreItem_CardAlignment::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&exploring_accessor_ExploreItem_CardAlignment::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* exploring_accessor_ExploreItem_CardAlignment_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(exploring_accessor_ExploreItem_CardAlignment);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("exploring_accessor_ExploreItem_CardAlignment", options);
    type->fp_build_ = exploring_accessor_ExploreItem_CardAlignment_build;
    type->fp_ctor_ = (void*)exploring_accessor_ExploreItem_CardAlignment__New1_fn;
    type->fp_cctor_ = exploring_accessor_ExploreItem_CardAlignment__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))exploring_accessor_ExploreItem_CardAlignment__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))exploring_accessor_ExploreItem_CardAlignment__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))exploring_accessor_ExploreItem_CardAlignment__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))exploring_accessor_ExploreItem_CardAlignment__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))exploring_accessor_ExploreItem_CardAlignment__get_SupportsOriginSetter_fn;
    return type;
}

// public generated exploring_accessor_ExploreItem_CardAlignment() :1
void exploring_accessor_ExploreItem_CardAlignment__ctor_1_fn(exploring_accessor_ExploreItem_CardAlignment* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void exploring_accessor_ExploreItem_CardAlignment__GetAsObject_fn(exploring_accessor_ExploreItem_CardAlignment* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox<int>(::g::Fuse::Elements::Alignment_typeof(), uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->CardAlignment()), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void exploring_accessor_ExploreItem_CardAlignment__get_Name_fn(exploring_accessor_ExploreItem_CardAlignment* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = exploring_accessor_ExploreItem_CardAlignment::_name_, void();
}

// public generated exploring_accessor_ExploreItem_CardAlignment New() :1
void exploring_accessor_ExploreItem_CardAlignment__New1_fn(exploring_accessor_ExploreItem_CardAlignment** __retval)
{
    *__retval = exploring_accessor_ExploreItem_CardAlignment::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void exploring_accessor_ExploreItem_CardAlignment__get_PropertyType_fn(exploring_accessor_ExploreItem_CardAlignment* __this, uType** __retval)
{
    return *__retval = ::g::Fuse::Elements::Alignment_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void exploring_accessor_ExploreItem_CardAlignment__SetAsObject_fn(exploring_accessor_ExploreItem_CardAlignment* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->SetCardAlignment(uUnbox<int>(::g::Fuse::Elements::Alignment_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void exploring_accessor_ExploreItem_CardAlignment__get_SupportsOriginSetter_fn(exploring_accessor_ExploreItem_CardAlignment* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> exploring_accessor_ExploreItem_CardAlignment::Singleton_;
::g::Uno::UX::Selector exploring_accessor_ExploreItem_CardAlignment::_name_;

// public generated exploring_accessor_ExploreItem_CardAlignment() [instance] :1
void exploring_accessor_ExploreItem_CardAlignment::ctor_1()
{
    ctor_();
}

// public generated exploring_accessor_ExploreItem_CardAlignment New() [static] :1
exploring_accessor_ExploreItem_CardAlignment* exploring_accessor_ExploreItem_CardAlignment::New1()
{
    exploring_accessor_ExploreItem_CardAlignment* obj1 = (exploring_accessor_ExploreItem_CardAlignment*)uNew(exploring_accessor_ExploreItem_CardAlignment_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
