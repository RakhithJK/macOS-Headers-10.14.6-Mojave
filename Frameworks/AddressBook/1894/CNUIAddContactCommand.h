//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/CNUIUndoableCommand.h>

@class CNContact, NSString;

@interface CNUIAddContactCommand : CNUIUndoableCommand
{
    BOOL _personInserted;
    CNContact *_contact;
    NSString *_accountIdentifier;
}

@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) BOOL personInserted; // @synthesize personInserted=_personInserted;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)arg1;
- (void)executeRedoWithCNSaveRequest:(id)arg1;
- (void)executeWithCNSaveRequest:(id)arg1;
- (id)actionName;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2 accountIdentifier:(id)arg3 personInserted:(BOOL)arg4;

@end

