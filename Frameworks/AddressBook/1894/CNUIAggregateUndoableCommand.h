//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/CNUIUndoableCommand.h>

@class NSArray, NSString;

@interface CNUIAggregateUndoableCommand : CNUIUndoableCommand
{
    NSString *_actionName;
    NSArray *_undoableCommands;
}

@property(retain, nonatomic) NSArray *undoableCommands; // @synthesize undoableCommands=_undoableCommands;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)arg1;
- (void)executeWithCNSaveRequest:(id)arg1;
- (id)initWithUndoableCommands:(id)arg1 actionName:(id)arg2 contactStore:(id)arg3;

@end

