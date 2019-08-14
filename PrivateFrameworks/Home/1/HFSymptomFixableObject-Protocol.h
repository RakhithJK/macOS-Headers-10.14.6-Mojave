//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFAccessoryVendor-Protocol.h>
#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFSymptomsHandlerVendor-Protocol.h>
#import <Home/NSObject-Protocol.h>

@class HMSymptomsHandler, NSSet, NSUUID;

@protocol HFSymptomFixableObject <NSObject, HFSymptomsHandlerVendor, HFAccessoryVendor, HFHomeKitObject>
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property(readonly, nonatomic) NSSet *accessories;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@end

