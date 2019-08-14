//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKAutocompleteAnalyticsProvider-Protocol.h>
#import <MapKit/MKAutocompleteAnalyticsState-Protocol.h>

@class MKAutocompleteAnalyticsState;
@protocol OS_dispatch_queue;

@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MKAutocompleteAnalyticsState *_currentState;
}

@property(retain, nonatomic) MKAutocompleteAnalyticsState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
- (void).cxx_destruct;
- (id)captureNewMetrics;
- (void)updateStateWithQuery:(id)arg1 queryTokens:(id)arg2 visibleSuggestionEntries:(id)arg3;
- (id)init;

@end

