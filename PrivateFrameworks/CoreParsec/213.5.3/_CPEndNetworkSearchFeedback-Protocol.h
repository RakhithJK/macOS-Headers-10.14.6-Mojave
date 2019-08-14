//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPNetworkTimingData;

@protocol _CPEndNetworkSearchFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _CPNetworkTimingData *timingData;
@property(copy, nonatomic) NSString *partialClientIp;
@property(nonatomic) double duration;
@property(copy, nonatomic) NSString *fbq;
@property(copy, nonatomic) NSString *parsecStatus;
@property(copy, nonatomic) NSString *uuid;
@property(nonatomic) int statusCode;
@property(nonatomic) long long responseSize;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

