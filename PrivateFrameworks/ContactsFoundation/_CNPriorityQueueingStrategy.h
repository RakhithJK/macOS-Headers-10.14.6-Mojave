//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNQueueingStrategy-Protocol.h>

@class NSString;

@interface _CNPriorityQueueingStrategy : NSObject <CNQueueingStrategy>
{
    CDUnknownBlockType _priorityComparator;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType priorityComparator; // @synthesize priorityComparator=_priorityComparator;
- (void).cxx_destruct;
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithComparator:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

