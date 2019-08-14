//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AMWorkflow, NSDictionary;

@interface SIUCreateWorkflowOperation : NSOperation
{
    NSDictionary *_operationDict;
    AMWorkflow *_workflow;
}

@property(retain, nonatomic) AMWorkflow *workflow; // @synthesize workflow=_workflow;
@property(retain, nonatomic) NSDictionary *operationDict; // @synthesize operationDict=_operationDict;
- (void)main;
- (void)processUserKey;
- (void)processSourceKeys;
- (void)processCreateImageAction;
- (void)processModelFilterAction;
- (void)processMACAddressFilterAction;
- (void)processAutomationKey;
- (void)processApplySettingsKey;
- (void)processAddlInstallKeys;
- (void)saveWorkflowAndOpen;
- (void)createEmptyWorkflow;
- (BOOL)addNewAction:(id)arg1 withParameters:(id)arg2;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

