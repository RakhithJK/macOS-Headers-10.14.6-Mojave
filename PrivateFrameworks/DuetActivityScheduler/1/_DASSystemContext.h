//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_log, _CDLocalContext;

@interface _DASSystemContext : NSObject
{
    id <_CDLocalContext> _context;
    NSObject<OS_os_log> *_dasSystemContextLog;
    long long _networkPathStatus;
    long long _inexpensiveNetworkPathStatus;
}

+ (id)sharedInstance;
+ (id)initWithContext:(id)arg1;
@property(nonatomic) long long inexpensiveNetworkPathStatus; // @synthesize inexpensiveNetworkPathStatus=_inexpensiveNetworkPathStatus;
@property(nonatomic) long long networkPathStatus; // @synthesize networkPathStatus=_networkPathStatus;
@property(retain, nonatomic) NSObject<OS_os_log> *dasSystemContextLog; // @synthesize dasSystemContextLog=_dasSystemContextLog;
@property(retain, nonatomic) id <_CDLocalContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (BOOL)allowDiscretionaryWorkForUtilityTask:(id)arg1 withParameters:(id)arg2;
- (BOOL)allowDiscretionaryWorkForBackgroundTask:(id)arg1 withParameters:(id)arg2;
- (BOOL)allowsDiscretionaryWorkForTask:(id)arg1 withPriority:(unsigned long long)arg2 withParameters:(id)arg3;
- (BOOL)isInexpensiveNetworkAvailable;
- (BOOL)isNetworkAvailable;
- (id)init;

@end

