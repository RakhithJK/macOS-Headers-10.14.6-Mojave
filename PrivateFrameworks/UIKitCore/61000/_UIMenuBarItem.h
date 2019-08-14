//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/ROCKForwardingInterposableWithRunLoop-Protocol.h>
#import <UIKitCore/UHAMenuItemInterface-Protocol.h>
#import <UIKitCore/_UIValidatedUserInterfaceItem-Protocol.h>

@class NSDictionary, NSString, _UIMenuBarMenu;
@protocol OS_dispatch_queue;

@interface _UIMenuBarItem : NSObject <UHAMenuItemInterface, ROCKForwardingInterposableWithRunLoop, _UIValidatedUserInterfaceItem>
{
    BOOL _alternate;
    BOOL _enabled;
    BOOL _separatorItem;
    BOOL _replacedBySubmenuItems;
    NSString *_title;
    NSString *_keyEquivalent;
    long long _keyEquivalentModifiers;
    long long _state;
    _UIMenuBarMenu *_submenu;
    id _target;
    long long _type;
    id _cachedTarget;
    unsigned long long _targetSearchScopeMask;
    NSString *_actionName;
    NSString *_hostActionName;
}

+ (id)separatorItem;
@property(copy, nonatomic) NSString *hostActionName; // @synthesize hostActionName=_hostActionName;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(nonatomic) unsigned long long targetSearchScopeMask; // @synthesize targetSearchScopeMask=_targetSearchScopeMask;
@property(nonatomic) __weak id cachedTarget; // @synthesize cachedTarget=_cachedTarget;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) _UIMenuBarMenu *submenu; // @synthesize submenu=_submenu;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic, getter=isReplacedBySubmenuItems) BOOL replacedBySubmenuItems; // @synthesize replacedBySubmenuItems=_replacedBySubmenuItems;
@property(nonatomic, getter=isSeparatorItem) BOOL separatorItem; // @synthesize separatorItem=_separatorItem;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isAlternate) BOOL alternate; // @synthesize alternate=_alternate;
@property(nonatomic) long long keyEquivalentModifiers; // @synthesize keyEquivalentModifiers=_keyEquivalentModifiers;
@property(copy, nonatomic) NSString *keyEquivalent; // @synthesize keyEquivalent=_keyEquivalent;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_stringForFlags:(unsigned long long)arg1;
- (id)_stringForState:(long long)arg1;
@property(readonly, copy) NSString *description;
- (void)_performAction;
- (void)_validate;
@property(readonly, nonatomic) NSDictionary *validatedProperties;
@property(readonly, nonatomic) NSDictionary *properties;
@property(nonatomic) SEL action;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;
- (id)init;
- (struct __CFString *)forwardingInterposableRunLoopMode;
- (double)forwardingInterposableRunLoopTimeOut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long rock_invocationFlags;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *rock_invocationQueue;
@property(readonly) Class superclass;

@end

