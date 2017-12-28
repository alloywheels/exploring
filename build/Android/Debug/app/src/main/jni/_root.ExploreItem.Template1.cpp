// This file was generated based on '.uno/ux13/ExploreItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ExploreItem.h>
#include <_root.ExploreItem.Template1.h>
#include <_root.exploring_FuseC-44bea007.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{

// public partial sealed class ExploreItem.Template1 :123
// {
// static Template1() :133
static void ExploreItem__Template1__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ExploreItem__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"File"*/]);
}

static void ExploreItem__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File");
    ::STRINGS[1] = uString::Const("");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::ExploreItem_typeof(), offsetof(ExploreItem__Template1, __parent1), uFieldFlagsWeak,
        ::g::ExploreItem_typeof(), offsetof(ExploreItem__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(ExploreItem__Template1, temp_File_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem__Template1::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ExploreItem__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ExploreItem__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ExploreItem.Template1", options);
    type->fp_build_ = ExploreItem__Template1_build;
    type->fp_cctor_ = ExploreItem__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ExploreItem__Template1__New1_fn;
    return type;
}

// public Template1(ExploreItem parent, ExploreItem parentInstance) :127
void ExploreItem__Template1__ctor_1_fn(ExploreItem__Template1* __this, ::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :136
void ExploreItem__Template1__New1_fn(ExploreItem__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    __this->temp_File_inst = ::g::exploring_FuseControlsImage_File_Property::New1(temp, ExploreItem__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*""*/]);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_File_inst, (uObject*)temp1, 3);
    __self1->Alignment(10);
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp->StretchMode(6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    return *__retval = __self1, void();
}

// public Template1 New(ExploreItem parent, ExploreItem parentInstance) :127
void ExploreItem__Template1__New2_fn(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance, ExploreItem__Template1** __retval)
{
    *__retval = ExploreItem__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ExploreItem__Template1::__selector0_;

// public Template1(ExploreItem parent, ExploreItem parentInstance) [instance] :127
void ExploreItem__Template1::ctor_1(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(ExploreItem parent, ExploreItem parentInstance) [static] :127
ExploreItem__Template1* ExploreItem__Template1::New2(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    ExploreItem__Template1* obj1 = (ExploreItem__Template1*)uNew(ExploreItem__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
