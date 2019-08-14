//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMAction, AMWorkflowController, NSError;

@protocol AMWorkflowControllerDelegate <NSObject>

@optional
- (void)workflowController:(AMWorkflowController *)arg1 didError:(NSError *)arg2;
- (void)workflowController:(AMWorkflowController *)arg1 didRunAction:(AMAction *)arg2;
- (void)workflowController:(AMWorkflowController *)arg1 willRunAction:(AMAction *)arg2;
- (void)workflowControllerDidStop:(AMWorkflowController *)arg1;
- (void)workflowControllerDidRun:(AMWorkflowController *)arg1;
- (void)workflowControllerWillStop:(AMWorkflowController *)arg1;
- (void)workflowControllerWillRun:(AMWorkflowController *)arg1;
@end

