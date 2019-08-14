//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSLSHMD, NSString;

@interface NSHMDDevice : NSObject
{
    NSSLSHMD *_hmd;
    struct _opaque_pthread_mutex_t _mutex;
    unsigned int _attached:1;
    unsigned int _acquired:1;
    unsigned int _awake:1;
}

+ (id)keyPathsForValuesAffectingAttached;
+ (id)devices;
+ (void)initialize;
- (void)dealloc;
- (id)initWithSLSHMD:(id)arg1;
@property(readonly) unsigned long long productID;
@property(readonly) unsigned long long vendorID;
@property(readonly, copy) NSString *name;
@property(readonly, getter=isAwake) BOOL awake;
@property(readonly, getter=isAvailable) BOOL available;
@property(readonly, getter=isAttached) BOOL attached;

@end

