//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LocationAlert, NSString;

@protocol LocationAlertDelegate <NSObject>
- (void)locationRequest:(LocationAlert *)arg1 forPid:(int)arg2 uuid:(NSString *)arg3 message:(int)arg4 response:(int)arg5;
@end

