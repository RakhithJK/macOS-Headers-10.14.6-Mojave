//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMApplicationStubController;

@interface AMApplicationStub : NSObject
{
    id _applicationStubController;
}

@property(retain) AMApplicationStubController *applicationStubController; // @synthesize applicationStubController=_applicationStubController;
- (void).cxx_destruct;
- (BOOL)runWorkflowAtPath:(id)arg1 withInput:(id)arg2 error:(id *)arg3;
- (BOOL)loadWorkflowAtPath:(id)arg1 error:(id *)arg2;
- (void)_presentRecoverableErrorAndTerminateIfNeeded:(id)arg1;
@property(readonly, nonatomic) BOOL stayOpen;
@property(nonatomic) BOOL displayInMenuBar;
- (id)init;

@end

