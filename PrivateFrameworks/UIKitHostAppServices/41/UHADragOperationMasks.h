//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitHostAppServices/UHADragOperationMasksInterface-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface UHADragOperationMasks : NSObject <UHADragOperationMasksInterface>
{
    unsigned long long _insideAppMask;
    unsigned long long _outsideAppMask;
}

@property(readonly, nonatomic) unsigned long long outsideAppMask; // @synthesize outsideAppMask=_outsideAppMask;
@property(readonly, nonatomic) unsigned long long insideAppMask; // @synthesize insideAppMask=_insideAppMask;
- (id)initWithInsideAppMask:(unsigned long long)arg1 outsideAppMask:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *memoizableSerializerQueue;
@property(readonly) Class superclass;

@end

