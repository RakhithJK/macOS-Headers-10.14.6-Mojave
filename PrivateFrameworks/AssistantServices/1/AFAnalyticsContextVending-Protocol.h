//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@protocol AFAnalyticsContextVending <NSObject>
- (NSArray *)af_dialogIdentifiersForAnalyticsContext;
- (void)af_addEntriesToAnalyticsContext:(NSMutableDictionary *)arg1;
- (NSDictionary *)af_analyticsContext;
@end

