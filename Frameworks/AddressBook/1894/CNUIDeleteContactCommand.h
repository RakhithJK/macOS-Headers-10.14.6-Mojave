//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/CNUIUndoableCommand.h>

@class CNContact, NSString;

@interface CNUIDeleteContactCommand : CNUIUndoableCommand
{
    CNContact *_contact;
    NSString *_containerIdentifier;
}

@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)arg1;
- (void)executeWithCNSaveRequest:(id)arg1;
- (id)actionName;
- (id)initWithContact:(id)arg1 containerIdentifier:(id)arg2 contactStore:(id)arg3;

@end

