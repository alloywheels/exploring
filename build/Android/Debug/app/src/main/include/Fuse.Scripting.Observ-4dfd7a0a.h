// This file was generated based on '../../../AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observ-14e14110.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__NewAt;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.NewAt :457
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAt_typeof();
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Scripting::Observable* obs, int* index, uObject* newValue);
void Observable__NewAt__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, uObject* newValue, Observable__NewAt** __retval);
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this, uObject* sub);
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this);

struct Observable__NewAt : ::g::Fuse::Scripting::Observable__Operation
{
    int _index;
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, int index, uObject* newValue);
    static Observable__NewAt* New1(::g::Fuse::Scripting::Observable* obs, int index, uObject* newValue);
};
// }

}}} // ::g::Fuse::Scripting