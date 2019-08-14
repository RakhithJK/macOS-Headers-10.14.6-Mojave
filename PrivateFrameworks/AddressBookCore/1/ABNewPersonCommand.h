//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/ABCommand.h>

@class ABGroup, ABPerson, NSDictionary;

@interface ABNewPersonCommand : ABCommand
{
    ABPerson *_newPerson;
    ABGroup *_selectedGroup;
    NSDictionary *_personProperties;
}

- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)finalize;
- (void)dealloc;
- (id)initWithNewPerson:(id)arg1 selectedGroup:(id)arg2 addressBook:(id)arg3;

@end

