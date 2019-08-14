//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NCServiceViewService, NSString, NSUUID, NSViewController;
@protocol NCCustomAlertDelegate;

@interface NCCustomAlert : NSObject
{
    NSUUID *_uuid;
    unsigned long long _sortOrder;
    NCServiceViewService *_viewService;
    CDUnknownBlockType _dismissalBlock;
    _Bool _markedForRemoval;
    BOOL _ignoresDND;
    BOOL _allowsSwipeToDismiss;
    BOOL _displaysOnLockscreen;
    unsigned long long _order;
    id <NCCustomAlertDelegate> _delegate;
    NSViewController *_contentViewController;
    NSString *_hostIdentifier;
    NSString *_accessibilitySubRole;
    NSString *_accessibilityRoleDescription;
    NSString *_accessibilityIdentifier;
    NSString *_accessibilityLabel;
}

@property(copy) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(copy) NSString *accessibilityRoleDescription; // @synthesize accessibilityRoleDescription=_accessibilityRoleDescription;
@property(copy) NSString *accessibilitySubRole; // @synthesize accessibilitySubRole=_accessibilitySubRole;
@property BOOL displaysOnLockscreen; // @synthesize displaysOnLockscreen=_displaysOnLockscreen;
@property(readonly) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
@property(readonly) NSViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property __weak id <NCCustomAlertDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL allowsSwipeToDismiss; // @synthesize allowsSwipeToDismiss=_allowsSwipeToDismiss;
@property BOOL ignoresDND; // @synthesize ignoresDND=_ignoresDND;
@property unsigned long long order; // @synthesize order=_order;
- (void).cxx_destruct;
- (void)releaseKey;
- (void)makeKeyWithReady:(CDUnknownBlockType)arg1;
- (void)dismissWithAnimation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWihAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)present;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (void)setSortOrder:(unsigned long long)arg1;
- (void)setMarkedForRemoval:(_Bool)arg1;
- (_Bool)markedForRemoval;
- (void)setDismissalBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)dismissalBlock;
- (void)setViewService:(id)arg1;
- (id)viewService;
- (id)initWithViewController:(id)arg1 hostIdentifier:(id)arg2;

@end

