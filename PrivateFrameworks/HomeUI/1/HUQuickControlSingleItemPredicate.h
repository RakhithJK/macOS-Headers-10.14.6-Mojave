//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUQuickControlItemPredicate-Protocol.h>

@class NSString;

@interface HUQuickControlSingleItemPredicate : NSObject <HUQuickControlItemPredicate>
{
    CDUnknownBlockType _block;
}

+ (id)predicateWithControlItemClass:(Class)arg1;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long maximumNumberOfMatches;
- (id)matchingControlItemsForControlItems:(id)arg1;
- (BOOL)matchesControlItem:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

