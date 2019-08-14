//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SGSuggestionsServiceEventsProtocol;

@interface CalSuggestionsProvider : NSObject
{
    BOOL _suggestionsFrameworkAvailable;
    NSObject<SGSuggestionsServiceEventsProtocol> *_service;
}

+ (id)defaultProvider;
@property(retain, nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> *service; // @synthesize service=_service;
@property(nonatomic) BOOL suggestionsFrameworkAvailable; // @synthesize suggestionsFrameworkAvailable=_suggestionsFrameworkAvailable;
- (void).cxx_destruct;
- (BOOL)eventsFoundInMailEnabled;
- (void)rejectSGEventWithRecordID:(id)arg1;
- (void)confirmSGEventWithRecordID:(id)arg1;
- (id)fakeSGRecordID;
- (id)sgRecordIDForEventWithSuggestionID:(id)arg1 error:(id *)arg2;
- (id)senderForEventWithSuggestionID:(id)arg1;
- (void)confirmEventWithSuggestionID:(id)arg1;
- (id)sgEventFromUniqueID:(id)arg1 error:(id *)arg2;
- (void)_loadSuggestionsFramework;
- (id)init;

@end
