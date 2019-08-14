//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFWatchListItem <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *watchLiveTextFormat;
@property(copy, nonatomic) NSString *addedToUpNextText;
@property(copy, nonatomic) NSString *addToUpNextText;
@property(copy, nonatomic) NSString *inUpNextText;
@property(copy, nonatomic) NSString *purchaseOfferTextFormat;
@property(copy, nonatomic) NSString *installButtonTitle;
@property(copy, nonatomic) NSString *openButtonTitle;
@property(copy, nonatomic) NSString *continueInTextFormat;
@property(copy, nonatomic) NSString *seasonEpisodeTextFormat;
@property(copy, nonatomic) NSString *watchListIdentifier;
@end
