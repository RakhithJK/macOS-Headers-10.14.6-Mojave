//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCNetworkReachabilityObserving-Protocol.h"
#import "FCPrivateDataControllerStateObserving-Protocol.h"

@class FCAsyncSerialQueue, NSArray, NSString;

@interface FRPrivateDataUpdateCoordinator : NSObject <FCPrivateDataControllerStateObserving, FCNetworkReachabilityObserving>
{
    NSArray *_privateDataControllers;
    FCAsyncSerialQueue *_updateQueue;
}

@property(retain, nonatomic) FCAsyncSerialQueue *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(copy, nonatomic) NSArray *privateDataControllers; // @synthesize privateDataControllers=_privateDataControllers;
- (void).cxx_destruct;
- (void)networkReachabilityDidChange:(id)arg1;
- (void)privateDataControllerDidBecomeDirty:(id)arg1;
- (void)_updatePrivateDataControllersWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatePrivateDataControllersWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

