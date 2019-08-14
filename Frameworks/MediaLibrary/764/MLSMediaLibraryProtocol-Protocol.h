//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaLibrary/MLSCacheDeleteProtocol-Protocol.h>
#import <MediaLibrary/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol MLSMediaLibraryProtocol <MLSCacheDeleteProtocol, NSObject>
- (void)attributesForMediaSource:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)mediaObjectsForIdentifiers:(NSArray *)arg1 inSource:(NSString *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)thumbnailURLForObject:(NSString *)arg1 source:(NSString *)arg2;
- (void)artworkDataForObject:(NSString *)arg1 source:(NSString *)arg2 reply:(void (^)(NSData *))arg3;
- (void)iconDataForGroup:(NSString *)arg1 source:(NSString *)arg2 reply:(void (^)(NSData *))arg3;
- (void)mediaObjectsForGroup:(NSString *)arg1 source:(NSString *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)rootGroupForMediaSource:(NSString *)arg1;
- (void)loadSourcesWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)serviceLogLevel:(void (^)(long long, NSError *))arg1;
@end
