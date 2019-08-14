//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class NSSet;

@interface HFItemProviderReloadResults : NSObject <NSCopying>
{
    NSSet *_addedItems;
    NSSet *_removedItems;
    NSSet *_existingItems;
}

@property(retain, nonatomic) NSSet *existingItems; // @synthesize existingItems=_existingItems;
@property(retain, nonatomic) NSSet *removedItems; // @synthesize removedItems=_removedItems;
@property(retain, nonatomic) NSSet *addedItems; // @synthesize addedItems=_addedItems;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSSet *allItems;
- (id)resultsByMergingWithResults:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 existingItems:(id)arg3;
- (id)init;

@end
