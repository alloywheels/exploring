// This file was generated based on '.uno/ux13/ExploreItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ExploreItem.h>
#include <_root.ExploreItem.Template.h>
#include <_root.ExploreItem.Template1.h>
#include <_root.ExploreItem.Template2.h>
#include <_root.exploring_acces-586b3f93.h>
#include <_root.exploring_acces-89ff09f5.h>
#include <_root.exploring_acces-af4a85fb.h>
#include <_root.exploring_acces-e6263e59.h>
#include <_root.exploring_acces-eca098ea.h>
#include <_root.exploring_FuseC-1e90369a.h>
#include <_root.exploring_FuseC-20ac7163.h>
#include <_root.exploring_FuseC-2990a784.h>
#include <_root.exploring_FuseC-44bea007.h>
#include <_root.exploring_FuseE-23a27768.h>
#include <_root.exploring_FuseE-30da34e5.h>
#include <_root.exploring_FuseE-3850b31d.h>
#include <_root.exploring_FuseE-b68a5e2c.h>
#include <_root.exploring_FuseR-5776e416.h>
#include <_root.exploring_FuseT-823301f.h>
#include <_root.exploring_FuseT-ab103156.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Resize.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.PageIndicator.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Element-bd497d56.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.WidthFunction.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Divide.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.LogicalAnd.h>
#include <Fuse.Reactive.Multiply.h>
#include <Fuse.Reactive.NotEqual.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-39642be7.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class ExploreItem :2
// {
// static ExploreItem() :228
static void ExploreItem__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ExploreItem::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    ExploreItem::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("FontSize"));
    ExploreItem::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Color"));
    ExploreItem::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Alignment"));
    ExploreItem::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    ExploreItem::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("File"));
    ExploreItem::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Element.LayoutMaster"));
    ExploreItem::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Opacity"));
    ExploreItem::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Y"));
    ExploreItem::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("HitTestMode"));
    ExploreItem::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("placeContainer"));
    ExploreItem::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("placeRect"));
    ExploreItem::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("infoRect"));
    ExploreItem::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("infoRectContent"));
    ExploreItem::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("infoRectContentTrans"));
    ExploreItem::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("imgMaster"));
    ExploreItem::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("img"));
    ExploreItem::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("factsPanel"));
    ExploreItem::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("factsPanelTrans"));
    ExploreItem::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("factsPageControl"));
}

static void ExploreItem_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::exploring_accessor_ExploreItem_CardAlignment_typeof(),
        ::g::exploring_accessor_ExploreItem_Country_typeof(),
        ::g::exploring_accessor_ExploreItem_ForegroundColor_typeof(),
        ::g::exploring_accessor_ExploreItem_ImageName_typeof(),
        ::g::exploring_accessor_ExploreItem_InDetailsMode_typeof(),
        ::g::Fuse::Controls::LayoutControl_typeof(),
        ::g::Uno::UX::Selector_typeof(),
        ::g::Fuse::TranslationModes_typeof(),
        ::g::Fuse::Elements::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(112,
        ::g::Uno::Bool_typeof(), offsetof(ExploreItem, _field_InDetailsMode), 0,
        ::g::Uno::String_typeof(), offsetof(ExploreItem, _field_ImageName), 0,
        ::g::Uno::String_typeof(), offsetof(ExploreItem, _field_Country), 0,
        ::g::Uno::Float4_typeof(), offsetof(ExploreItem, _field_ForegroundColor), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(ExploreItem, _field_CardAlignment), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ExploreItem, detailsImagePanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ExploreItem, detailsPlacesPanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ExploreItem, detailsInfoPanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ExploreItem, detailsFactsPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ExploreItem, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(ExploreItem, temp_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ExploreItem, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(ExploreItem, temp1_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ExploreItem, temp2_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL), offsetof(ExploreItem, placeContainer_Alignment_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ExploreItem, temp3_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL), offsetof(ExploreItem, temp4_Alignment_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(ExploreItem, img_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(ExploreItem, img_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(ExploreItem, placeRect_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(ExploreItem, infoRect_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(ExploreItem, infoRect_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(ExploreItem, infoRectContent_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(ExploreItem, infoRectContentTrans_Y_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(ExploreItem, factsPanel_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(ExploreItem, factsPanelTrans_Y_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL), offsetof(ExploreItem, factsPanel_HitTestMode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(ExploreItem, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ExploreItem, temp6_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(ExploreItem, this_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL), offsetof(ExploreItem, this_HitTestMode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(ExploreItem, temp7_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ExploreItem, placeContainer), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ExploreItem, placeRect), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ExploreItem, infoRect), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(ExploreItem, infoRectContent), 0,
        ::g::Fuse::Translation_typeof(), offsetof(ExploreItem, infoRectContentTrans), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(ExploreItem, imgMaster), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(ExploreItem, img), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(ExploreItem, factsPanel), 0,
        ::g::Fuse::Translation_typeof(), offsetof(ExploreItem, factsPanelTrans), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(ExploreItem, factsPageControl), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ExploreItem::__selector19_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ExploreItem_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 174;
    options.InterfaceCount = 18;
    options.DependencyCount = 10;
    options.ObjectSize = sizeof(ExploreItem);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ExploreItem", options);
    type->fp_build_ = ExploreItem_build;
    type->fp_cctor_ = ExploreItem__cctor_4_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ExploreItem(Fuse.Controls.Panel detailsImagePanel, Fuse.Controls.Panel detailsPlacesPanel, Fuse.Controls.Panel detailsInfoPanel, Fuse.Controls.Panel detailsFactsPanel) :232
void ExploreItem__ctor_7_fn(ExploreItem* __this, ::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1)
{
    __this->ctor_7(detailsImagePanel1, detailsPlacesPanel1, detailsInfoPanel1, detailsFactsPanel1);
}

// public Fuse.Elements.Alignment get_CardAlignment() :68
void ExploreItem__get_CardAlignment_fn(ExploreItem* __this, int* __retval)
{
    *__retval = __this->CardAlignment();
}

// public void set_CardAlignment(Fuse.Elements.Alignment value) :69
void ExploreItem__set_CardAlignment_fn(ExploreItem* __this, int* value)
{
    __this->CardAlignment(*value);
}

// public string get_Country() :38
void ExploreItem__get_Country_fn(ExploreItem* __this, uString** __retval)
{
    *__retval = __this->Country();
}

// public void set_Country(string value) :39
void ExploreItem__set_Country_fn(ExploreItem* __this, uString* value)
{
    __this->Country(value);
}

// public float4 get_ForegroundColor() :53
void ExploreItem__get_ForegroundColor_fn(ExploreItem* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ForegroundColor();
}

// public void set_ForegroundColor(float4 value) :54
void ExploreItem__set_ForegroundColor_fn(ExploreItem* __this, ::g::Uno::Float4* value)
{
    __this->ForegroundColor(*value);
}

// public string get_ImageName() :23
void ExploreItem__get_ImageName_fn(ExploreItem* __this, uString** __retval)
{
    *__retval = __this->ImageName();
}

// public void set_ImageName(string value) :24
void ExploreItem__set_ImageName_fn(ExploreItem* __this, uString* value)
{
    __this->ImageName(value);
}

// public bool get_InDetailsMode() :8
void ExploreItem__get_InDetailsMode_fn(ExploreItem* __this, bool* __retval)
{
    *__retval = __this->InDetailsMode();
}

// public void set_InDetailsMode(bool value) :9
void ExploreItem__set_InDetailsMode_fn(ExploreItem* __this, bool* value)
{
    __this->InDetailsMode(*value);
}

// private void InitializeUX() :244
void ExploreItem__InitializeUX_fn(ExploreItem* __this)
{
    __this->InitializeUX();
}

// public ExploreItem New(Fuse.Controls.Panel detailsImagePanel, Fuse.Controls.Panel detailsPlacesPanel, Fuse.Controls.Panel detailsInfoPanel, Fuse.Controls.Panel detailsFactsPanel) :232
void ExploreItem__New4_fn(::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1, ExploreItem** __retval)
{
    *__retval = ExploreItem::New4(detailsImagePanel1, detailsPlacesPanel1, detailsInfoPanel1, detailsFactsPanel1);
}

// public void SetCardAlignment(Fuse.Elements.Alignment value, Uno.UX.IPropertyListener origin) :71
void ExploreItem__SetCardAlignment_fn(ExploreItem* __this, int* value, uObject* origin)
{
    __this->SetCardAlignment(*value, origin);
}

// public void SetCountry(string value, Uno.UX.IPropertyListener origin) :41
void ExploreItem__SetCountry_fn(ExploreItem* __this, uString* value, uObject* origin)
{
    __this->SetCountry(value, origin);
}

// public void SetForegroundColor(float4 value, Uno.UX.IPropertyListener origin) :56
void ExploreItem__SetForegroundColor_fn(ExploreItem* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetForegroundColor(*value, origin);
}

// public void SetImageName(string value, Uno.UX.IPropertyListener origin) :26
void ExploreItem__SetImageName_fn(ExploreItem* __this, uString* value, uObject* origin)
{
    __this->SetImageName(value, origin);
}

// public void SetInDetailsMode(bool value, Uno.UX.IPropertyListener origin) :11
void ExploreItem__SetInDetailsMode_fn(ExploreItem* __this, bool* value, uObject* origin)
{
    __this->SetInDetailsMode(*value, origin);
}

::g::Uno::UX::Selector ExploreItem::__selector0_;
::g::Uno::UX::Selector ExploreItem::__selector1_;
::g::Uno::UX::Selector ExploreItem::__selector2_;
::g::Uno::UX::Selector ExploreItem::__selector3_;
::g::Uno::UX::Selector ExploreItem::__selector4_;
::g::Uno::UX::Selector ExploreItem::__selector5_;
::g::Uno::UX::Selector ExploreItem::__selector6_;
::g::Uno::UX::Selector ExploreItem::__selector7_;
::g::Uno::UX::Selector ExploreItem::__selector8_;
::g::Uno::UX::Selector ExploreItem::__selector9_;
::g::Uno::UX::Selector ExploreItem::__selector10_;
::g::Uno::UX::Selector ExploreItem::__selector11_;
::g::Uno::UX::Selector ExploreItem::__selector12_;
::g::Uno::UX::Selector ExploreItem::__selector13_;
::g::Uno::UX::Selector ExploreItem::__selector14_;
::g::Uno::UX::Selector ExploreItem::__selector15_;
::g::Uno::UX::Selector ExploreItem::__selector16_;
::g::Uno::UX::Selector ExploreItem::__selector17_;
::g::Uno::UX::Selector ExploreItem::__selector18_;
::g::Uno::UX::Selector ExploreItem::__selector19_;

// public ExploreItem(Fuse.Controls.Panel detailsImagePanel, Fuse.Controls.Panel detailsPlacesPanel, Fuse.Controls.Panel detailsInfoPanel, Fuse.Controls.Panel detailsFactsPanel) [instance] :232
void ExploreItem::ctor_7(::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1)
{
    ctor_6();
    detailsImagePanel = detailsImagePanel1;
    detailsPlacesPanel = detailsPlacesPanel1;
    detailsInfoPanel = detailsInfoPanel1;
    detailsFactsPanel = detailsFactsPanel1;
    InitializeUX();
}

// public Fuse.Elements.Alignment get_CardAlignment() [instance] :68
int ExploreItem::CardAlignment()
{
    return _field_CardAlignment;
}

// public void set_CardAlignment(Fuse.Elements.Alignment value) [instance] :69
void ExploreItem::CardAlignment(int value)
{
    SetCardAlignment(value, NULL);
}

// public string get_Country() [instance] :38
uString* ExploreItem::Country()
{
    return _field_Country;
}

// public void set_Country(string value) [instance] :39
void ExploreItem::Country(uString* value)
{
    SetCountry(value, NULL);
}

// public float4 get_ForegroundColor() [instance] :53
::g::Uno::Float4 ExploreItem::ForegroundColor()
{
    return _field_ForegroundColor;
}

// public void set_ForegroundColor(float4 value) [instance] :54
void ExploreItem::ForegroundColor(::g::Uno::Float4 value)
{
    SetForegroundColor(value, NULL);
}

// public string get_ImageName() [instance] :23
uString* ExploreItem::ImageName()
{
    return _field_ImageName;
}

// public void set_ImageName(string value) [instance] :24
void ExploreItem::ImageName(uString* value)
{
    SetImageName(value, NULL);
}

// public bool get_InDetailsMode() [instance] :8
bool ExploreItem::InDetailsMode()
{
    return _field_InDetailsMode;
}

// public void set_InDetailsMode(bool value) [instance] :9
void ExploreItem::InDetailsMode(bool value)
{
    SetInDetailsMode(value, NULL);
}

// private void InitializeUX() [instance] :244
void ExploreItem::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::exploring_FuseControlsTextControl_Value_Property::New1(temp, ExploreItem::__selector0_);
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::exploring_accessor_ExploreItem_ImageName::Singleton_);
    int temp10 = 26;
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(uBox<int>(::g::Uno::Int_typeof(), temp10));
    placeContainer = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::Constant* temp12 = ::g::Fuse::Reactive::Constant::New1(placeContainer);
    ::g::Fuse::Elements::WidthFunction* temp13 = ::g::Fuse::Elements::WidthFunction::New1(temp12);
    int temp14 = 230;
    ::g::Fuse::Reactive::Constant* temp15 = ::g::Fuse::Reactive::Constant::New1(uBox<int>(::g::Uno::Int_typeof(), temp14));
    ::g::Fuse::Reactive::Divide* temp16 = ::g::Fuse::Reactive::Divide::New1(temp13, temp15);
    temp_FontSize_inst = ::g::exploring_FuseControlsTextControl_FontSize_Property::New1(temp, ExploreItem::__selector1_);
    ::g::Fuse::Reactive::Multiply* temp17 = ::g::Fuse::Reactive::Multiply::New1(temp11, temp16);
    ::g::Fuse::Reactive::Constant* temp18 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::exploring_FuseControlsTextControl_Value_Property::New1(temp1, ExploreItem::__selector0_);
    ::g::Fuse::Reactive::Property* temp19 = ::g::Fuse::Reactive::Property::New1(temp18, ::g::exploring_accessor_ExploreItem_Country::Singleton_);
    int temp20 = 12;
    ::g::Fuse::Reactive::Constant* temp21 = ::g::Fuse::Reactive::Constant::New1(uBox<int>(::g::Uno::Int_typeof(), temp20));
    ::g::Fuse::Reactive::Constant* temp22 = ::g::Fuse::Reactive::Constant::New1(placeContainer);
    ::g::Fuse::Elements::WidthFunction* temp23 = ::g::Fuse::Elements::WidthFunction::New1(temp22);
    int temp24 = 230;
    ::g::Fuse::Reactive::Constant* temp25 = ::g::Fuse::Reactive::Constant::New1(uBox<int>(::g::Uno::Int_typeof(), temp24));
    ::g::Fuse::Reactive::Divide* temp26 = ::g::Fuse::Reactive::Divide::New1(temp23, temp25);
    temp1_FontSize_inst = ::g::exploring_FuseControlsTextControl_FontSize_Property::New1(temp1, ExploreItem::__selector1_);
    ::g::Fuse::Reactive::Multiply* temp27 = ::g::Fuse::Reactive::Multiply::New1(temp21, temp26);
    ::g::Fuse::Reactive::Constant* temp28 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    temp2_Color_inst = ::g::exploring_FuseControlsShape_Color_Property::New1(temp2, ExploreItem::__selector2_);
    ::g::Fuse::Reactive::Property* temp29 = ::g::Fuse::Reactive::Property::New1(temp28, ::g::exploring_accessor_ExploreItem_ForegroundColor::Singleton_);
    ::g::Fuse::Reactive::Constant* temp30 = ::g::Fuse::Reactive::Constant::New1(this);
    placeContainer_Alignment_inst = ::g::exploring_FuseElementsElement_Alignment_Property::New1(placeContainer, ExploreItem::__selector3_);
    ::g::Fuse::Reactive::Property* temp31 = ::g::Fuse::Reactive::Property::New1(temp30, ::g::exploring_accessor_ExploreItem_CardAlignment::Singleton_);
    ::g::Fuse::Reactive::Each* temp3 = ::g::Fuse::Reactive::Each::New4();
    temp3_Items_inst = ::g::exploring_FuseReactiveEach_Items_Property::New1(temp3, ExploreItem::__selector4_);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("numbers"));
    ::g::Fuse::Reactive::Constant* temp33 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Panel* temp4 = ::g::Fuse::Controls::Panel::New3();
    temp4_Alignment_inst = ::g::exploring_FuseElementsElement_Alignment_Property::New1(temp4, ExploreItem::__selector3_);
    ::g::Fuse::Reactive::Property* temp34 = ::g::Fuse::Reactive::Property::New1(temp33, ::g::exploring_accessor_ExploreItem_CardAlignment::Singleton_);
    img = ::g::Fuse::Controls::Image::New3();
    img_File_inst = ::g::exploring_FuseControlsImage_File_Property::New1(img, ExploreItem::__selector5_);
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(uString::Const("image"));
    img_Element_LayoutMaster_inst = ::g::exploring_FuseElementsElement_ElementLayoutMaster_Property::New1(img, ExploreItem::__selector6_);
    placeRect = ::g::Fuse::Controls::Panel::New3();
    placeRect_Element_LayoutMaster_inst = ::g::exploring_FuseElementsElement_ElementLayoutMaster_Property::New1(placeRect, ExploreItem::__selector6_);
    infoRect = ::g::Fuse::Controls::Panel::New3();
    infoRect_Element_LayoutMaster_inst = ::g::exploring_FuseElementsElement_ElementLayoutMaster_Property::New1(infoRect, ExploreItem::__selector6_);
    infoRect_Opacity_inst = ::g::exploring_FuseElementsElement_Opacity_Property::New1(infoRect, ExploreItem::__selector7_);
    infoRectContent = ::g::Fuse::Controls::Grid::New4();
    infoRectContent_Opacity_inst = ::g::exploring_FuseElementsElement_Opacity_Property::New1(infoRectContent, ExploreItem::__selector7_);
    infoRectContentTrans = ::g::Fuse::Translation::New2();
    infoRectContentTrans_Y_inst = ::g::exploring_FuseTranslation_Y_Property::New1(infoRectContentTrans, ExploreItem::__selector8_);
    factsPanel = ::g::Fuse::Controls::Grid::New4();
    factsPanel_Opacity_inst = ::g::exploring_FuseElementsElement_Opacity_Property::New1(factsPanel, ExploreItem::__selector7_);
    factsPanelTrans = ::g::Fuse::Translation::New2();
    factsPanelTrans_Y_inst = ::g::exploring_FuseTranslation_Y_Property::New1(factsPanelTrans, ExploreItem::__selector8_);
    factsPanel_HitTestMode_inst = ::g::exploring_FuseElementsElement_HitTestMode_Property::New1(factsPanel, ExploreItem::__selector9_);
    ::g::Fuse::Reactive::Constant* temp36 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::WhileTrue* temp5 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp5_Value_inst = ::g::exploring_FuseTriggersWhileBool_Value_Property::New1(temp5, ExploreItem::__selector0_);
    ::g::Fuse::Reactive::Property* temp37 = ::g::Fuse::Reactive::Property::New1(temp36, ::g::exploring_accessor_ExploreItem_InDetailsMode::Singleton_);
    ::g::Fuse::Reactive::Each* temp6 = ::g::Fuse::Reactive::Each::New4();
    temp6_Items_inst = ::g::exploring_FuseReactiveEach_Items_Property::New1(temp6, ExploreItem::__selector4_);
    ::g::Fuse::Reactive::Data* temp38 = ::g::Fuse::Reactive::Data::New1(uString::Const("facts"));
    factsPageControl = ::g::Fuse::Controls::PageControl::New4();
    this_Opacity_inst = ::g::exploring_FuseElementsElement_Opacity_Property::New1(this, ExploreItem::__selector7_);
    this_HitTestMode_inst = ::g::exploring_FuseElementsElement_HitTestMode_Property::New1(this, ExploreItem::__selector9_);
    ::g::Fuse::Reactive::Data* temp39 = ::g::Fuse::Reactive::Data::New1(uString::Const("current"));
    ::g::Fuse::Reactive::Data* temp40 = ::g::Fuse::Reactive::Data::New1(uString::Const("id"));
    ::g::Fuse::Reactive::NotEqual* temp41 = ::g::Fuse::Reactive::NotEqual::New1(temp39, temp40);
    ::g::Fuse::Reactive::Data* temp42 = ::g::Fuse::Reactive::Data::New1(uString::Const("inDetailsMode"));
    ::g::Fuse::Triggers::WhileTrue* temp7 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp7_Value_inst = ::g::exploring_FuseTriggersWhileBool_Value_Property::New1(temp7, ExploreItem::__selector0_);
    ::g::Fuse::Reactive::LogicalAnd* temp43 = ::g::Fuse::Reactive::LogicalAnd::New1(temp41, temp42);
    ::g::Fuse::Controls::StackPanel* temp44 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp45 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp9, 1);
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(temp_FontSize_inst, (uObject*)temp17, 3);
    ::g::Fuse::Reactive::DataBinding* temp47 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp19, 1);
    ::g::Fuse::Reactive::DataBinding* temp48 = ::g::Fuse::Reactive::DataBinding::New1(temp1_FontSize_inst, (uObject*)temp27, 3);
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Color_inst, (uObject*)temp29, 1);
    ::g::Fuse::Reactive::DataBinding* temp50 = ::g::Fuse::Reactive::DataBinding::New1(placeContainer_Alignment_inst, (uObject*)temp31, 1);
    ExploreItem__Template* temp51 = ExploreItem__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Items_inst, (uObject*)temp32, 3);
    ::g::Fuse::Reactive::DataBinding* temp53 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Alignment_inst, (uObject*)temp34, 1);
    imgMaster = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp54 = ::g::Fuse::Reactive::DataBinding::New1(img_File_inst, (uObject*)temp35, 3);
    ::g::Fuse::Animations::Move* temp55 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Resize* temp56 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Animations::Move* temp57 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Resize* temp58 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Animations::Move* temp59 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Resize* temp60 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Animations::Change* temp61 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), img_Element_LayoutMaster_inst);
    ::g::Fuse::Animations::Change* temp62 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), placeRect_Element_LayoutMaster_inst);
    ::g::Fuse::Animations::Change* temp63 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), infoRect_Element_LayoutMaster_inst);
    ::g::Fuse::Animations::Change* temp64 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), infoRect_Opacity_inst);
    ::g::Fuse::Animations::Change* temp65 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), infoRectContent_Opacity_inst);
    ::g::Fuse::Animations::Change* temp66 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), infoRectContentTrans_Y_inst);
    ::g::Fuse::Animations::Change* temp67 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), factsPanel_Opacity_inst);
    ::g::Fuse::Animations::Change* temp68 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), factsPanelTrans_Y_inst);
    ::g::Fuse::Animations::Change* temp69 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL), factsPanel_HitTestMode_inst);
    ::g::Fuse::Triggers::Actions::BringToFront* temp70 = ::g::Fuse::Triggers::Actions::BringToFront::New2();
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp37, 1);
    ExploreItem__Template1* temp72 = ExploreItem__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp73 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Items_inst, (uObject*)temp38, 3);
    ::g::Fuse::Controls::PageIndicator* temp74 = ::g::Fuse::Controls::PageIndicator::New5((uObject*)factsPageControl);
    ExploreItem__Template2* Dot = ExploreItem__Template2::New2(this, this);
    ::g::Fuse::Animations::Change* temp75 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), this_Opacity_inst);
    ::g::Fuse::Animations::Change* temp76 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL), this_HitTestMode_inst);
    ::g::Fuse::Animations::Move* temp77 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp78 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp43, 3);
    Aspect(1.85f);
    Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    BoxSizing(4);
    InDetailsMode(false);
    CardAlignment(1);
    uPtr(placeContainer)->Width(::g::Uno::UX::Size__New1(55.0f, 4));
    uPtr(placeContainer)->Name(ExploreItem::__selector10_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(placeContainer)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), placeRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(placeContainer)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp50);
    uPtr(placeRect)->Name(ExploreItem::__selector11_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(placeRect)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(placeRect)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp44->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp44->Alignment(9);
    temp44->Margin(::g::Uno::Float4__New2(32.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    temp->TextWrapping(1);
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp46);
    temp1->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp48);
    temp2->Opacity(0.9f);
    temp2->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp49);
    temp4->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), infoRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp53);
    uPtr(infoRect)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(infoRect)->Opacity(0.0f);
    uPtr(infoRect)->Name(ExploreItem::__selector12_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoRect)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), infoRectContent);
    uPtr(infoRectContent)->Rows(uString::Const("1*,1*"));
    uPtr(infoRectContent)->Padding(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(infoRectContent)->Opacity(0.0f);
    uPtr(infoRectContent)->Name(ExploreItem::__selector13_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoRectContent)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), infoRectContentTrans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoRectContent)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    uPtr(infoRectContentTrans)->Y(0.15f);
    uPtr(infoRectContentTrans)->Name(ExploreItem::__selector14_);
    uPtr(infoRectContentTrans)->RelativeTo(::g::Fuse::TranslationModes::Size_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp52);
    uPtr(imgMaster)->Height(::g::Uno::UX::Size__New1(85.0f, 4));
    uPtr(imgMaster)->Name(ExploreItem::__selector15_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(imgMaster)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), img);
    uPtr(img)->StretchMode(6);
    uPtr(img)->Name(ExploreItem::__selector16_);
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(img, imgMaster);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(img)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp71);
    temp55->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp55->Duration(0.6);
    temp55->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset_);
    temp55->RelativeNode(detailsImagePanel);
    temp55->Target(img);
    temp55->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    temp56->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp56->Duration(0.6);
    temp56->Target(img);
    temp56->RelativeNode(detailsImagePanel);
    temp56->RelativeTo(::g::Fuse::Elements::TranslationModes::Size_);
    temp56->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    temp57->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp57->Duration(0.6);
    temp57->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset_);
    temp57->RelativeNode(detailsPlacesPanel);
    temp57->Target(placeRect);
    temp57->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    temp58->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp58->Duration(0.6);
    temp58->Target(placeRect);
    temp58->RelativeNode(detailsPlacesPanel);
    temp58->RelativeTo(::g::Fuse::Elements::TranslationModes::Size_);
    temp58->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    temp59->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp59->Duration(0.6);
    temp59->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset_);
    temp59->RelativeNode(detailsInfoPanel);
    temp59->Target(infoRect);
    temp59->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    temp60->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp60->Duration(0.6);
    temp60->Target(infoRect);
    temp60->RelativeNode(detailsInfoPanel);
    temp60->RelativeTo(::g::Fuse::Elements::TranslationModes::Size_);
    temp60->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    ::g::Fuse::Animations::Change__set_Value_fn(temp61, detailsImagePanel);
    temp61->Delay(0.6);
    ::g::Fuse::Animations::Change__set_Value_fn(temp62, detailsPlacesPanel);
    temp62->Delay(0.6);
    ::g::Fuse::Animations::Change__set_Value_fn(temp63, detailsInfoPanel);
    temp63->Delay(0.6);
    ::g::Fuse::Animations::Change__set_Value_fn(temp64, uCRef(1.0f));
    temp64->Duration(0.6);
    ::g::Fuse::Animations::Change__set_Value_fn(temp65, uCRef(1.0f));
    temp65->Duration(0.35);
    temp65->Delay(0.45);
    ::g::Fuse::Animations::Change__set_Value_fn(temp66, uCRef(0.0f));
    temp66->Duration(0.35);
    temp66->Delay(0.4);
    temp66->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    ::g::Fuse::Animations::Change__set_Value_fn(temp67, uCRef(1.0f));
    temp67->Duration(0.35);
    temp67->Delay(0.55);
    ::g::Fuse::Animations::Change__set_Value_fn(temp68, uCRef(0.0f));
    temp68->Duration(0.35);
    temp68->Delay(0.55);
    temp68->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    ::g::Fuse::Animations::Change__set_Value_fn(temp69, uCRef<int>(6));
    uPtr(factsPanel)->Rows(uString::Const("1*,10"));
    uPtr(factsPanel)->HitTestMode(0);
    uPtr(factsPanel)->Opacity(0.0f);
    uPtr(factsPanel)->Layer(1);
    uPtr(factsPanel)->Name(ExploreItem::__selector17_);
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(factsPanel, detailsFactsPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(factsPanel)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), factsPanelTrans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(factsPanel)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), factsPageControl);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(factsPanel)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp74);
    uPtr(factsPanelTrans)->Y(0.2f);
    uPtr(factsPanelTrans)->Name(ExploreItem::__selector18_);
    uPtr(factsPanelTrans)->RelativeTo(::g::Fuse::TranslationModes::Size_);
    uPtr(factsPageControl)->Name(ExploreItem::__selector19_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(factsPageControl)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp73);
    temp74->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Dot);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp78);
    ::g::Fuse::Animations::Change__set_Value_fn(temp75, uCRef(0.0f));
    temp75->Duration(0.4);
    ::g::Fuse::Animations::Change__set_Value_fn(temp76, uCRef<int>(0));
    temp77->Y(100.0f);
    temp77->Duration(0.4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), placeContainer);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), imgMaster);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), factsPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
}

// public void SetCardAlignment(Fuse.Elements.Alignment value, Uno.UX.IPropertyListener origin) [instance] :71
void ExploreItem::SetCardAlignment(int value, uObject* origin)
{
    if (value != _field_CardAlignment)
    {
        _field_CardAlignment = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("CardAlignment")), origin);
    }
}

// public void SetCountry(string value, Uno.UX.IPropertyListener origin) [instance] :41
void ExploreItem::SetCountry(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Country))
    {
        _field_Country = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Country")), origin);
    }
}

// public void SetForegroundColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :56
void ExploreItem::SetForegroundColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_ForegroundColor))
    {
        _field_ForegroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("ForegroundColor")), origin);
    }
}

// public void SetImageName(string value, Uno.UX.IPropertyListener origin) [instance] :26
void ExploreItem::SetImageName(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_ImageName))
    {
        _field_ImageName = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("ImageName")), origin);
    }
}

// public void SetInDetailsMode(bool value, Uno.UX.IPropertyListener origin) [instance] :11
void ExploreItem::SetInDetailsMode(bool value, uObject* origin)
{
    if (value != _field_InDetailsMode)
    {
        _field_InDetailsMode = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("InDetailsMode")), origin);
    }
}

// public ExploreItem New(Fuse.Controls.Panel detailsImagePanel, Fuse.Controls.Panel detailsPlacesPanel, Fuse.Controls.Panel detailsInfoPanel, Fuse.Controls.Panel detailsFactsPanel) [static] :232
ExploreItem* ExploreItem::New4(::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1)
{
    ExploreItem* obj1 = (ExploreItem*)uNew(ExploreItem_typeof());
    obj1->ctor_7(detailsImagePanel1, detailsPlacesPanel1, detailsInfoPanel1, detailsFactsPanel1);
    return obj1;
}
// }

} // ::g
