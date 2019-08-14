//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUFontRegistration-Protocol.h>

@class NSCountedSet, NSString;
@protocol OS_dispatch_queue;

@interface NUFontManager : NSObject <NUFontRegistration>
{
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSCountedSet *_referenceCounts;
}

@property(readonly, nonatomic) NSCountedSet *referenceCounts; // @synthesize referenceCounts=_referenceCounts;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationQueue; // @synthesize registrationQueue=_registrationQueue;
- (void).cxx_destruct;
- (BOOL)shouldUnregisterFontWithURL:(id)arg1;
- (unsigned long long)referenceCountForFontWithURL:(id)arg1;
- (void)decreaseReferenceCountForFontWithURL:(id)arg1;
- (void)increaseReferenceCountForFontWithURL:(id)arg1;
- (BOOL)unregisterFontAtURL:(id)arg1 error:(id *)arg2;
- (void)unregisterFontWithURL:(id)arg1;
- (BOOL)registerFontWithURL:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

