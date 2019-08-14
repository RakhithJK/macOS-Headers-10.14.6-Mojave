//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFileManagerDelegate-Protocol.h"

@class NSDate, NSString, NSTimer;

@interface TemporaryItemManager : NSObject <NSFileManagerDelegate>
{
    NSString *_path;
    NSTimer *_timer;
}

+ (id)temporaryItemManagerWithRelativePath:(id)arg1 cleanupInterval:(double)arg2;
+ (void)cleanupAllItems;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (void)cleanUpDirectory;
- (void)_cleanUpDirectory:(id)arg1;
@property(retain, nonatomic) NSDate *expirationDate;
- (void)_setUpTimer:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

