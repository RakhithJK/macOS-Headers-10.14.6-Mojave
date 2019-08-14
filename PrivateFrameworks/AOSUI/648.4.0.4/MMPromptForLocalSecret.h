//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSUI/IASLocalSecretDelegate-Protocol.h>

@class IASLocalSecretPrompt, NSString;

@interface MMPromptForLocalSecret : NSObject <IASLocalSecretDelegate>
{
    IASLocalSecretPrompt *_promptController;
}

- (id)userFullName;
- (void)secretEntered:(id)arg1;
- (void)secretEntryCancelled;
- (void)getLocalSecretWithWindow:(id)arg1 withTitle:(id)arg2 withMessage:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)getLocalSecretWithWindow:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

