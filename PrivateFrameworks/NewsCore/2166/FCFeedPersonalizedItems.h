//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface FCFeedPersonalizedItems : NSObject
{
    NSArray *_itemsToShow;
    NSArray *_itemsToHide;
    NSMapTable *_scoreProfiles;
}

@property(retain, nonatomic) NSMapTable *scoreProfiles; // @synthesize scoreProfiles=_scoreProfiles;
@property(retain, nonatomic) NSArray *itemsToHide; // @synthesize itemsToHide=_itemsToHide;
@property(retain, nonatomic) NSArray *itemsToShow; // @synthesize itemsToShow=_itemsToShow;
- (void).cxx_destruct;

@end

