//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MacBuddyManager-Protocol.h"

@class NSString;

@interface DateAndTimeManager : NSObject <MacBuddyManager>
{
    BOOL setTimezoneAutomatically;
    NSString *__serverClosestToCurrentTimeZone;
}

@property(readonly, copy) NSString *_serverClosestToCurrentTimeZone; // @synthesize _serverClosestToCurrentTimeZone=__serverClosestToCurrentTimeZone;
@property BOOL setTimezoneAutomatically; // @synthesize setTimezoneAutomatically;
- (void).cxx_destruct;
- (BOOL)applySettings:(id *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

