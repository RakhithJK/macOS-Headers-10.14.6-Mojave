//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSDictionary;

@protocol CDPDXPCEventListener <NSObject>

@optional
- (void)eventReceived:(const char *)arg1 eventInfo:(NSDictionary *)arg2;
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;
@end

