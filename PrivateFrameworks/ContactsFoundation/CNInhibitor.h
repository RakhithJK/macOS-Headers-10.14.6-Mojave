//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNInhibitor-Protocol.h>

@class NSString;

@interface CNInhibitor : NSObject <CNInhibitor>
{
    BOOL _debugIsInhibiting;
}

+ (id)os_transactionInhibitorWithLabel:(id)arg1;
+ (id)suddenTerminationInhibitorWithProcessInfo:(id)arg1;
+ (id)suddenTerminationInhibitor;
@property(nonatomic) BOOL debugIsInhibiting; // @synthesize debugIsInhibiting=_debugIsInhibiting;
- (void)stop;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

