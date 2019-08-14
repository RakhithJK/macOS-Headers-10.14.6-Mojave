//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INMediaItem, NSArray, NSDate, NSNumber, NSString;

@protocol INPlayMediaIntentExport <NSObject, JSExport>
@property(copy) NSString *recoID;
@property(copy) NSArray *buckets;
@property(copy) NSDate *expirationDate;
@property(copy) NSNumber *resumePlayback;
@property long long playbackRepeatMode;
@property(copy) NSNumber *playShuffled;
@property(copy) INMediaItem *mediaContainer;
@property(copy) NSArray *mediaItems;
- (id)init;
@end

