//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNGroup.h>

@class NSString;

@interface CNMutableGroup : CNGroup
{
}

- (id)freezeWithSelfAsSnapshot;
- (id)freeze;
@property(copy, nonatomic) CNGroup *snapshot; // @dynamic snapshot;
- (void)adoptValuesFromAndSetSnapshot:(id)arg1;
@property(copy) NSString *name; // @dynamic name;
@property(copy) NSString *identifier; // @dynamic identifier;
- (id)copy;

@end
