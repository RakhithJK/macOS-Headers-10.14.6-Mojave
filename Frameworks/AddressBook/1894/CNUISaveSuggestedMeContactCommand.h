//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/CNUIUndoableCommand.h>

@interface CNUISaveSuggestedMeContactCommand : CNUIUndoableCommand
{
    CNUIUndoableCommand *_aggreageCommand;
}

@property(retain, nonatomic) CNUIUndoableCommand *aggreageCommand; // @synthesize aggreageCommand=_aggreageCommand;
- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)arg1;
- (void)executeWithCNSaveRequest:(id)arg1;
- (id)copyOfContactWithNameValuesAndUserCreatedMultiValues:(id)arg1;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 containerIdentifier:(id)arg3;
- (id)initWithContactStore:(id)arg1;

@end

