//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEOMapServiceTraits, NSDictionary;

@protocol GEOMapServiceCategoriesTicket <NSObject>
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(BOOL))arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end
