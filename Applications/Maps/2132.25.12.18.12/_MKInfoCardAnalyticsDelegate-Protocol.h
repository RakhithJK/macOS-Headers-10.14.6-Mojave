//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol GEOTransitDepartureSequence, GEOTransitIncident, GEOTransitSystem;

@protocol _MKInfoCardAnalyticsDelegate <NSObject>
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id <GEOTransitSystem>)arg4 transitDepartureSequence:(id <GEOTransitDepartureSequence>)arg5 transitCardCategory:(int)arg6 transitIncident:(id <GEOTransitIncident>)arg7 feedbackDelegateSelector:(int)arg8;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(NSString *)arg3 actionURL:(NSString *)arg4 photoID:(NSString *)arg5 feedbackDelegateSelector:(int)arg6;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(NSString *)arg3 feedbackDelegateSelector:(int)arg4;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(NSString *)arg2 feedbackDelegateSelector:(int)arg3;
@end

