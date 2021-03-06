//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AppSuggestionDelegate, OS_dispatch_queue;

@interface AppSuggestion : NSObject
{
    id <AppSuggestionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_systemStatsQueue;
    NSString *_lastCoalitionID;
}

+ (id)getAppNameForBundleID:(id)arg1;
@property(retain, nonatomic) NSString *lastCoalitionID; // @synthesize lastCoalitionID=_lastCoalitionID;
@property(retain) NSObject<OS_dispatch_queue> *systemStatsQueue; // @synthesize systemStatsQueue=_systemStatsQueue;
@property(retain, nonatomic) id <AppSuggestionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)getThermalAppSuggestion;
- (void)getSystemStatsAppSuggestion;
- (id)parseEnergySuggestion:(id)arg1;
- (id)getLastCoalitionBundleID;
- (void)handleAppSuggestion:(id)arg1;
- (void)getAppSuggestionWithDelegate:(id)arg1;

@end

