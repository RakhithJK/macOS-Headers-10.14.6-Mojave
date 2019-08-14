//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDCircleDelegate-Protocol.h>
#import <CoreCDPInternal/CDPDSecureBackupDelegate-Protocol.h>

@class CDPContext, CDPDCircleController, CDPDSecureBackupController;
@protocol CDPLocalSecretFollowUpProvider, CDPStateUIProviderInternal;

@interface CDPDLocalSecretController : NSObject <CDPDSecureBackupDelegate, CDPDCircleDelegate>
{
    CDPContext *_context;
    CDPDCircleController *_circleController;
    CDPDSecureBackupController *_secureBackupController;
    id <CDPStateUIProviderInternal> _uiProvider;
    id <CDPLocalSecretFollowUpProvider> _followUpProvider;
}

@property(retain, nonatomic) id <CDPLocalSecretFollowUpProvider> followUpProvider; // @synthesize followUpProvider=_followUpProvider;
@property(retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(retain, nonatomic) CDPDSecureBackupController *secureBackupController; // @synthesize secureBackupController=_secureBackupController;
@property(retain, nonatomic) CDPDCircleController *circleController; // @synthesize circleController=_circleController;
@property(retain, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)secureChannelContextForController:(id)arg1;
- (id)contextForController:(id)arg1;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg2;
- (void)promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)synchronizeCircleViewsForSecureBackupContext:(id)arg1;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (void)_collectLocalSecretWithCompletion:(CDUnknownBlockType)arg1;
- (id)_cdpStateMachine;
- (void)_createContextForSecret:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_setContextWithAuthResults:(id)arg1;
- (void)_repairWithStateMachine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleCompletionStatus:(BOOL)arg1;
- (void)_localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finishOfflineLocalSecretChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

