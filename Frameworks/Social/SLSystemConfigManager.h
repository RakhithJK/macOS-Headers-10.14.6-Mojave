//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SLSystemConfigManager : NSObject
{
    void *_prefs;
    BOOL _notifyForExternalChangeOnly;
    int _applySkipCount;
    NSString *_serviceType;
}

+ (id)sharedInstanceForCallbackWhileLocked:(void *)arg1;
+ (id)sharedInstanceForServiceType:(id)arg1;
- (void).cxx_destruct;
- (void)_setCallback:(CDUnknownFunctionPointerType)arg1 withContext:(CDStruct_4210025a *)arg2;
- (void)_setValue:(void *)arg1 forKey:(id)arg2;
- (void *)_getValueForKey:(id)arg1;
- (void)_synchronize;
- (void)_notifyTarget:(unsigned int)arg1;
- (void)_tearDown;
- (void)_keepAlive;
- (void)_initializeSystemConfigPrefs:(id)arg1;
- (void)_refresh;
- (id)cachedUsername;
- (void)setCachedUsername:(id)arg1;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1;

@end

