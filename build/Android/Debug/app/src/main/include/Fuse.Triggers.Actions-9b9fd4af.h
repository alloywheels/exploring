// This file was generated based on '../../../AppData/Local/Fusetools/Packages/Fuse.Controls.WebView/1.4.2/EvaluateJS.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct JSEventArgs;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class JSEventArgs :9
// {
uType* JSEventArgs_typeof();
void JSEventArgs__ctor_1_fn(JSEventArgs* __this, uString* resultJson);
void JSEventArgs__New2_fn(uString* resultJson, JSEventArgs** __retval);

struct JSEventArgs : ::g::Uno::EventArgs
{
    uStrong<uString*> ResultJson;

    void ctor_1(uString* resultJson);
    static JSEventArgs* New2(uString* resultJson);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
