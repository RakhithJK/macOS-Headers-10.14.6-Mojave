//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AuxiliaryBarrier<JSC::Butterfly *> {
    struct Butterfly *_field1;
};

struct Butterfly;

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CallbackData {
    struct CallbackData *_field1;
    id _field2;
    id _field3;
    struct OpaqueJSValue *_field4;
    struct OpaqueJSValue *_field5;
    unsigned long long _field6;
    struct OpaqueJSValue **_field7;
    id _field8;
};

struct JSCell;

struct JSLock;

struct JSObject {
    unsigned int _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    struct AuxiliaryBarrier<JSC::Butterfly *> _field6;
};

struct JSValue {
    union EncodedValueDescriptor u;
};

struct JSWeakValue {
    int m_tag;
    union WeakValueUnion m_value;
};

struct OpaqueJSValue;

struct RefPtr<JSC::JSLock, WTF::DumbPtrTraits<JSC::JSLock>> {
    struct JSLock *m_ptr;
};

struct Strong<JSC::JSObject> {
    struct JSValue *m_slot;
};

struct Weak<JSC::JSGlobalObject> {
    struct WeakImpl *m_impl;
};

struct Weak<JSC::JSObject> {
    struct WeakImpl *m_impl;
};

struct Weak<JSC::JSString> {
    struct WeakImpl *m_impl;
};

struct Weak<JSC::Structure> {
    struct WeakImpl *m_impl;
};

struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>;

struct WeakImpl;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct pair<JSC::JSObject *, JSC::JSObject *> {
    struct JSObject *_field1;
    struct JSObject *_field2;
};

struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>>> {
    struct __compressed_pair<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>*, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>>> {
        struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>> *__value_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct pair<JSC::JSObject *, JSC::JSObject *> {
    struct JSObject *_field1;
    struct JSObject *_field2;
} pair_bfa3637f;

#pragma mark Named Unions

union EncodedValueDescriptor {
    long long asInt64;
    struct JSCell *ptr;
    struct {
        int payload;
        int tag;
    } asBits;
};

union WeakValueUnion {
    struct JSValue primitive;
    struct Weak<JSC::JSObject> object;
    struct Weak<JSC::JSString> string;
};

