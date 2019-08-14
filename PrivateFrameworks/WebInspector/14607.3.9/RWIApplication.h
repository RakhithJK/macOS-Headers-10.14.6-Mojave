//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, RWITarget;
@protocol RWIApplicationDelegate;

@interface RWIApplication : NSObject
{
    id <RWIApplicationDelegate> _delegate;
    RWITarget *_target;
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSString *_name;
    NSMutableDictionary *_debuggables;
    NSMutableDictionary *_drivables;
    BOOL _proxy;
    NSString *_hostApplicationIdentifier;
    BOOL _allowsRemoteAutomation;
    BOOL _ready;
    unsigned long long _applicationState;
}

+ (id)identifierForPID:(int)arg1;
@property(readonly, nonatomic) unsigned long long applicationState; // @synthesize applicationState=_applicationState;
@property(readonly, nonatomic, getter=isReady) BOOL ready; // @synthesize ready=_ready;
@property(copy, nonatomic) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property(readonly, nonatomic, getter=isProxy) BOOL proxy; // @synthesize proxy=_proxy;
@property(readonly, nonatomic) BOOL allowsRemoteAutomation; // @synthesize allowsRemoteAutomation=_allowsRemoteAutomation;
@property(readonly, nonatomic) RWITarget *target; // @synthesize target=_target;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <RWIApplicationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)createDrivableForSession:(id)arg1;
- (id)drivableWithTargetIdentifier:(id)arg1;
- (void)removeDrivable:(id)arg1;
- (void)addDrivable:(id)arg1;
- (id)debuggableWithPageId:(id)arg1;
- (void)removeDebuggable:(id)arg1;
- (void)addDebuggable:(id)arg1;
- (id)hostApplication;
- (void)changeAllowsRemoteAutomation:(BOOL)arg1;
- (void)changeReadyState:(BOOL)arg1;
- (void)changeApplicationState:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic, getter=isCurrentApplication) BOOL currentApplication; // @dynamic currentApplication;
@property(readonly, nonatomic) NSArray *drivables;
@property(readonly, nonatomic) NSArray *debuggables;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 isProxy:(BOOL)arg4 state:(unsigned long long)arg5 isReady:(BOOL)arg6 allowsRemoteAutomation:(BOOL)arg7 target:(id)arg8;

@end

