//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitHostAppServices/UHASRemoteObject.h>

#import <UIKitHostAppServices/UHAMenuInterface-Protocol.h>

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface UHASMenu : UHASRemoteObject <UHAMenuInterface>
{
    NSString *title;
    NSArray *items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long rock_invocationFlags;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *rock_invocationQueue;
@property(readonly) Class superclass;

@end

