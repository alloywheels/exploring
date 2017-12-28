// This file was generated based on '.uno/ux13/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ExploreItem.h>
#include <_root.exploring_Explo-13b9bb6b.h>
#include <_root.exploring_Explo-5bbbc3a9.h>
#include <_root.exploring_Explo-7c3e02bb.h>
#include <_root.exploring_Explo-bff902f5.h>
#include <_root.exploring_Explo-f4635e6.h>
#include <_root.exploring_FuseS-e71175b7.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Shadow.-722079e.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Selection.WhileSelected.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[12];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView.Template :5
// {
// static Template() :20
static void MainView__Template__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    MainView__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    MainView__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"InDetailsMode"*/]);
    MainView__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"ImageName"*/]);
    MainView__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Country"*/]);
    MainView__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"ForegroundC...*/]);
    MainView__Template::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"CardAlignment"*/]);
    MainView__Template::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"topItem"*/]);
}

static void MainView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("InDetailsMode");
    ::STRINGS[2] = uString::Const("ImageName");
    ::STRINGS[3] = uString::Const("Country");
    ::STRINGS[4] = uString::Const("ForegroundColor");
    ::STRINGS[5] = uString::Const("CardAlignment");
    ::STRINGS[6] = uString::Const("topItem");
    ::STRINGS[7] = uString::Const("id");
    ::STRINGS[8] = uString::Const("name");
    ::STRINGS[9] = uString::Const("country");
    ::STRINGS[10] = uString::Const("color");
    ::STRINGS[11] = uString::Const("alignment");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView__Template, __self_InDetailsMode_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView__Template, __self_ImageName_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView__Template, __self_Country_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView__Template, __self_ForegroundColor_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL), offsetof(MainView__Template, __self_CardAlignment_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector6_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 17;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->fp_build_ = MainView__Template_build;
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template__New1_fn;
    return type;
}

// public Template(MainView parent, MainView parentInstance) :9
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :23
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval)
{
    ::g::ExploreItem* __self1 = ::g::ExploreItem::New4(uPtr(__this->__parent1)->detailsImagePanel, uPtr(__this->__parent1)->detailsPlacesPanel, uPtr(__this->__parent1)->detailsInfoPanel, uPtr(__this->__parent1)->detailsFactsPanel);
    ::g::Fuse::Selection::Selectable* temp = ::g::Fuse::Selection::Selectable::New2();
    __this->temp_Value_inst = ::g::exploring_FuseSelectionSelectable_Value_Property::New1(temp, MainView__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"id"*/]);
    __this->__self_InDetailsMode_inst1 = ::g::exploring_ExploreItem_InDetailsMode_Property::New1(__self1, MainView__Template::__selector1_);
    __this->__self_ImageName_inst1 = ::g::exploring_ExploreItem_ImageName_Property::New1(__self1, MainView__Template::__selector2_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"name"*/]);
    __this->__self_Country_inst1 = ::g::exploring_ExploreItem_Country_Property::New1(__self1, MainView__Template::__selector3_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"country"*/]);
    __this->__self_ForegroundColor_inst1 = ::g::exploring_ExploreItem_ForegroundColor_Property::New1(__self1, MainView__Template::__selector4_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"color"*/]);
    __this->__self_CardAlignment_inst1 = ::g::exploring_ExploreItem_CardAlignment_Property::New1(__self1, MainView__Template::__selector5_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"alignment"*/]);
    ::g::Fuse::Controls::Shadow* temp6 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp1, 3);
    ::g::Fuse::Selection::WhileSelected* temp8 = ::g::Fuse::Selection::WhileSelected::New2();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<bool>*/], __this->__self_InDetailsMode_inst1);
    ::g::Fuse::Gestures::Tapped* temp10 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Selection::ToggleSelection* temp11 = ::g::Fuse::Selection::ToggleSelection::New2();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_ImageName_inst1, (uObject*)temp2, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Country_inst1, (uObject*)temp3, 3);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_ForegroundColor_inst1, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_CardAlignment_inst1, (uObject*)temp5, 3);
    __self1->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    __self1->Name(MainView__Template::__selector6_);
    temp6->Mode(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(true));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    return *__retval = __self1, void();
}

// public Template New(MainView parent, MainView parentInstance) :9
void MainView__Template__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template** __retval)
{
    *__retval = MainView__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template::__selector0_;
::g::Uno::UX::Selector MainView__Template::__selector1_;
::g::Uno::UX::Selector MainView__Template::__selector2_;
::g::Uno::UX::Selector MainView__Template::__selector3_;
::g::Uno::UX::Selector MainView__Template::__selector4_;
::g::Uno::UX::Selector MainView__Template::__selector5_;
::g::Uno::UX::Selector MainView__Template::__selector6_;

// public Template(MainView parent, MainView parentInstance) [instance] :9
void MainView__Template::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MainView parent, MainView parentInstance) [static] :9
MainView__Template* MainView__Template::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
