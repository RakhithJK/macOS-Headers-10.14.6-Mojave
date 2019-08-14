//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

@class NSString, NSURL;

@interface SXOEmbedResponse : SXJSONObject
{
}

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
- (double)cacheAgeWithValue:(id)arg1 withType:(int)arg2;
- (id)thumbnailURLWithValue:(id)arg1 withType:(int)arg2;
- (id)providerURLWithValue:(id)arg1 withType:(int)arg2;
- (id)authorURLWithValue:(id)arg1 withType:(int)arg2;
- (id)URLFromValue:(id)arg1 type:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *authorName; // @dynamic authorName;
@property(readonly, nonatomic) NSURL *authorURL; // @dynamic authorURL;
@property(readonly, nonatomic) double cacheAge; // @dynamic cacheAge;
@property(readonly, nonatomic) NSString *providerName; // @dynamic providerName;
@property(readonly, nonatomic) NSURL *providerURL; // @dynamic providerURL;
@property(readonly, nonatomic) double thumbnailHeight; // @dynamic thumbnailHeight;
@property(readonly, nonatomic) NSURL *thumbnailURL; // @dynamic thumbnailURL;
@property(readonly, nonatomic) double thumbnailWidth; // @dynamic thumbnailWidth;
@property(readonly, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) NSString *version; // @dynamic version;

@end

