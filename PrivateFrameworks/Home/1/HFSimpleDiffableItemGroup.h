//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFDiffableItemGroup-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface HFSimpleDiffableItemGroup : NSObject <HFDiffableItemGroup, NSCopying>
{
    NSString *_groupIdentifier;
    NSArray *_diffableItems;
}

@property(copy, nonatomic) NSArray *diffableItems; // @synthesize diffableItems=_diffableItems;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
