//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSServiceMonitor : NSObject
{
    long long _availability;
    NSString *_service;
    int _token;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *service;
- (long long)serviceAvailability;
- (void)updateAvailability;
- (void)_updateAvailability;
- (void)_postAvailability:(long long)arg1;
- (void)dealloc;
- (id)initWithService:(id)arg1;

@end
