//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@interface GateKeeper : CHLogger
{
    BOOL _hasDeviceBeenUnlockedSinceBoot;
}

+ (id)instance;
@property BOOL hasDeviceBeenUnlockedSinceBoot; // @synthesize hasDeviceBeenUnlockedSinceBoot=_hasDeviceBeenUnlockedSinceBoot;
- (void)reFetch;
- (id)init;

@end

