//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABFaceTimeCommunicationsBridge, NSString;

@protocol ABFaceTimeCommunicationsBridgeDelegate <NSObject>

@optional
- (void)faceTimeCommunicationsBridge:(ABFaceTimeCommunicationsBridge *)arg1 messagingAvailabilityChanged:(BOOL)arg2 forEndpoint:(NSString *)arg3;
- (void)faceTimeCommunicationsBridge:(ABFaceTimeCommunicationsBridge *)arg1 faceTimeAvailabilityChaged:(BOOL)arg2 forContactWithIdentifier:(NSString *)arg3;
@end

