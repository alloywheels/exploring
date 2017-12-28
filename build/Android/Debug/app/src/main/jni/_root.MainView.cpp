// This file was generated based on '.uno/ux13/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.exploring_bundle.h>
#include <_root.exploring_FuseC-8a9f12ef.h>
#include <_root.exploring_FuseR-5776e416.h>
#include <_root.exploring_FuseS-f1906cbd.h>
#include <_root.exploring_FuseT-823301f.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Selection.Selection.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :95
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 7, uString::Const("detailsImagePanel"), uString::Const("detailsPlacesPanel"), uString::Const("detailsInfoPanel"), uString::Const("detailsFactsPanel"), uString::Const("topBar"), uString::Const("citiesPageControl"), uString::Const("sw"));
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("UserScroll"));
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("detailsImagePanel"));
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("detailsPlacesPanel"));
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("detailsInfoPanel"));
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("detailsFactsPanel"));
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("topBar"));
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("citiesPageControl"));
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("sw"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear_, uString::Const("Linear"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn_, uString::Const("QuadraticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut_, uString::Const("QuadraticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut_, uString::Const("QuadraticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn_, uString::Const("CubicIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut_, uString::Const("CubicOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut_, uString::Const("CubicInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn_, uString::Const("QuarticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut_, uString::Const("QuarticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut_, uString::Const("QuarticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn_, uString::Const("QuinticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut_, uString::Const("QuinticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut_, uString::Const("QuinticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn_, uString::Const("SinusoidalIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut_, uString::Const("SinusoidalOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut_, uString::Const("SinusoidalInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn_, uString::Const("ExponentialIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut_, uString::Const("ExponentialOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut_, uString::Const("ExponentialInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn_, uString::Const("CircularIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut_, uString::Const("CircularOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut_, uString::Const("CircularInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn_, uString::Const("ElasticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut_, uString::Const("ElasticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut_, uString::Const("ElasticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn_, uString::Const("BackIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut_, uString::Const("BackOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut_, uString::Const("BackInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn_, uString::Const("BounceIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut_, uString::Const("BounceOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut_, uString::Const("BounceInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent_), uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent_, uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black_), uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black_, uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver_), uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver_, uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray_), uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray_, uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White_), uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White_, uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon_), uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon_, uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red_), uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red_, uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple_), uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple_, uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia_), uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia_, uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green_), uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green_, uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime_), uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime_, uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive_), uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive_, uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow_), uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow_, uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy_), uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy_, uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue_), uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue_, uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal_), uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal_, uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua_), uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua_, uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft_, uString::Const("TopLeft"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center_, uString::Const("Center"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor_, uString::Const("Anchor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, uString::Const("HorizontalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, uString::Const("VerticalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, uString::Const("TransformOriginOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset_, uString::Const("PositionOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor_, uString::Const("SizeFactor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size_, uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size_, uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, uString::Const("GiveFocus"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, uString::Const("Keyboard"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, uString::Const("WorldPositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange_, uString::Const("PositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points_, uString::Const("Points"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels_, uString::Const("Pixels"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize_, uString::Const("ContentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize_, uString::Const("ScrollViewSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, uString::Const("PreloadRetain"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, uString::Const("UnloadUnused"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload_, uString::Const("QuickUnload"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy_, uString::Const("UnloadInBackground"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin_, uString::Const("Thin"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light_, uString::Const("Light"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular_, uString::Const("Regular"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium_, uString::Const("Medium"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold_, uString::Const("Bold"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic_, uString::Const("ThinItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic_, uString::Const("LightItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic_, uString::Const("Italic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic_, uString::Const("MediumItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic_, uString::Const("BoldItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), uString::Const("PlatformDefault"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity_, uString::Const("Identity"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local_, uString::Const("Local"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize_, uString::Const("ParentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width_, uString::Const("Width"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height_, uString::Const("Height"));
}

static void MainView_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Controls::Grid_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(9,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, sw_UserScroll_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MainView, temp3_Items_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, detailsImagePanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, detailsPlacesPanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, detailsInfoPanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, detailsFactsPanel), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(MainView, topBar), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(MainView, citiesPageControl), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(MainView, sw), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MainView, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :206
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :210
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :206
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;

// public MainView() [instance] :206
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :210
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp4 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp5 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp6 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp7 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp8 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp9 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp10 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp11 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp12 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp13 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp14 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp15 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp16 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp17 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp18 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp19 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp20 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::exploring_FuseTriggersWhileBool_Value_Property::New1(temp, MainView::__selector0_);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(uString::Const("inDetailsMode"));
    sw = ::g::Fuse::Controls::ScrollView::New4();
    sw_UserScroll_inst = ::g::exploring_FuseControlsScrollViewBase_UserScroll_Property::New1(sw, MainView::__selector1_);
    ::g::Fuse::Triggers::WhileFalse* temp1 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp1_Value_inst = ::g::exploring_FuseTriggersWhileBool_Value_Property::New1(temp1, MainView::__selector0_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(uString::Const("inDetailsMode"));
    ::g::Fuse::Selection::Selection* temp2 = ::g::Fuse::Selection::Selection::New2();
    temp2_Value_inst = ::g::exploring_FuseSelectionSelection_Value_Property::New1(temp2, MainView::__selector0_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("current"));
    ::g::Fuse::Reactive::Each* temp3 = ::g::Fuse::Reactive::Each::New4();
    temp3_Items_inst = ::g::exploring_FuseReactiveEach_Items_Property::New1(temp3, MainView::__selector2_);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("places"));
    ::g::Fuse::Reactive::JavaScript* temp25 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Grid* temp26 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::iOS::StatusBarConfig* temp27 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Drawing::LinearGradient* temp28 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp29 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp30 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Controls::Panel* temp31 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp32 = ::g::Fuse::Controls::Grid::New4();
    detailsImagePanel = ::g::Fuse::Controls::Panel::New3();
    detailsPlacesPanel = ::g::Fuse::Controls::Panel::New3();
    detailsInfoPanel = ::g::Fuse::Controls::Panel::New3();
    detailsFactsPanel = ::g::Fuse::Controls::Panel::New3();
    topBar = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp33 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StatusBarBackground* temp34 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::Panel* temp35 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp36 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Animations::Move* temp37 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp21, 3);
    ::g::Fuse::Controls::Panel* temp39 = ::g::Fuse::Controls::Panel::New3();
    citiesPageControl = ::g::Fuse::Controls::PageControl::New4();
    ::g::Fuse::Animations::Change* temp40 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), sw_UserScroll_inst);
    ::g::Fuse::Reactive::DataBinding* temp41 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp22, 3);
    ::g::Fuse::Controls::StackPanel* temp42 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp43 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp23, 2);
    MainView__Template* topItem = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp44 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Items_inst, (uObject*)temp24, 3);
    temp25->LineNumber(2);
    temp25->FileName(uString::Const("MainView.ux"));
    temp25->File(::g::Uno::UX::BundleFileSource::New1(::g::exploring_bundle::MainView8330d5b2()));
    temp26->Rows(uString::Const("auto,1*"));
    temp26->Background(temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), topBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp39);
    temp27->Style(1);
    temp28->StartPoint(::g::Uno::Float2__New2(0.0f, 0.0f));
    temp28->EndPoint(::g::Uno::Float2__New2(0.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Stops()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL)), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Stops()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL)), temp30);
    temp29->Offset(0.0f);
    temp29->Color(::g::Uno::Float4__New2(0.6156863f, 0.6352941f, 0.6901961f, 1.0f));
    temp30->Offset(1.0f);
    temp30->Color(::g::Uno::Float4__New2(0.145098f, 0.1647059f, 0.2156863f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp31, 0);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp31, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp32);
    temp32->Rows(uString::Const("3*,180,3*"));
    temp32->Columns(uString::Const("1*,1*"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), detailsImagePanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), detailsPlacesPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), detailsInfoPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), detailsFactsPanel);
    uPtr(detailsImagePanel)->Name(MainView::__selector3_);
    ::g::Fuse::Controls::Grid::SetRow(detailsImagePanel, 0);
    ::g::Fuse::Controls::Grid::SetColumn(detailsImagePanel, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(detailsImagePanel, 2);
    uPtr(detailsPlacesPanel)->Name(MainView::__selector4_);
    ::g::Fuse::Controls::Grid::SetRow(detailsPlacesPanel, 1);
    ::g::Fuse::Controls::Grid::SetColumn(detailsPlacesPanel, 0);
    uPtr(detailsInfoPanel)->Name(MainView::__selector5_);
    ::g::Fuse::Controls::Grid::SetRow(detailsInfoPanel, 1);
    ::g::Fuse::Controls::Grid::SetColumn(detailsInfoPanel, 1);
    uPtr(detailsFactsPanel)->Name(MainView::__selector6_);
    ::g::Fuse::Controls::Grid::SetRow(detailsFactsPanel, 2);
    ::g::Fuse::Controls::Grid::SetColumn(detailsFactsPanel, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(detailsFactsPanel, 2);
    uPtr(topBar)->Color(::g::Uno::Float4__New2(0.3647059f, 0.3882353f, 0.4509804f, 1.0f));
    uPtr(topBar)->Name(MainView::__selector7_);
    ::g::Fuse::Controls::Grid::SetRow(topBar, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    temp33->Color(::g::Uno::Float4__New2(0.3647059f, 0.3882353f, 0.4509804f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp34);
    temp35->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp36);
    temp36->Value(uString::Const("Places"));
    temp36->FontSize(20.0f);
    temp36->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp36->Alignment(8);
    temp36->Margin(::g::Uno::Float4__New2(25.0f, 0.0f, 25.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp38);
    temp37->Y(-1.0f);
    temp37->Duration(0.3);
    temp37->RelativeTo(::g::Fuse::TranslationModes::Size_);
    ::g::Fuse::Controls::Grid::SetRow(temp39, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), citiesPageControl);
    uPtr(citiesPageControl)->ClipToBounds(false);
    uPtr(citiesPageControl)->Name(MainView::__selector8_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(citiesPageControl)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(citiesPageControl)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sw);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp41);
    ::g::Fuse::Animations::Change__set_Value_fn(temp40, uCRef(true));
    uPtr(sw)->UserScroll(false);
    uPtr(sw)->ClipToBounds(false);
    uPtr(sw)->Name(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sw)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    temp42->HitTestMode(6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    temp2->MinCount(0);
    temp2->MaxCount(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), topItem);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp44);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), detailsImagePanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), detailsPlacesPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), detailsInfoPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), detailsFactsPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), topBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), citiesPageControl);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sw);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp26);
}

// public MainView New() [static] :206
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
