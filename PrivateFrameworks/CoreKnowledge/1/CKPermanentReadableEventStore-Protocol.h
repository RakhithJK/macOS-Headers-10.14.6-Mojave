//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class INIntent, NSString;

@protocol CKPermanentReadableEventStore
- (void)historicEventsWithSourceBundleIdentifier:(NSString *)arg1 andIntent:(INIntent *)arg2 completionHandler:(void (^)(NSError *, NSDictionary *))arg3;
- (void)historicEventWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *, CKHistoricEvent *))arg2;
@end
