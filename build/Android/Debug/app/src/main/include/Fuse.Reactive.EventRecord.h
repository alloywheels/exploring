// This file was generated based on '../../../AppData/Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.4.2/EventRecord.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IEventRecord.h>
#include <Uno.Object.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Reactive{struct EventRecord;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{template<class TKey, class TValue>struct KeyValuePair;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class EventRecord :9
// {
struct EventRecord_type : uType
{
    ::g::Fuse::Reactive::IEventRecord interface0;
};

EventRecord_type* EventRecord_typeof();
void EventRecord__get_Args_fn(EventRecord* __this, uObject** __retval);
void EventRecord__get_Data_fn(EventRecord* __this, uObject** __retval);
void EventRecord__get_Node_fn(EventRecord* __this, ::g::Fuse::Node** __retval);
void EventRecord__get_Sender_fn(EventRecord* __this, ::g::Uno::UX::Selector* __retval);

struct EventRecord : uObject
{
    uStrong< ::g::Fuse::Node*> _node;
    uStrong<uObject*> _data;
    ::g::Uno::UX::Selector _sender;
    uStrong< ::g::Uno::Collections::Dictionary*> _args;

    uObject* Args();
    uObject* Data();
    ::g::Fuse::Node* Node();
    ::g::Uno::UX::Selector Sender();
};
// }

}}} // ::g::Fuse::Reactive
