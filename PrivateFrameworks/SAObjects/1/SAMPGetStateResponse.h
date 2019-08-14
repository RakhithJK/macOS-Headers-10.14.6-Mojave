//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString, SAMPMediaItem;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getStateResponse;
- (BOOL)requiresResponse;
@property(nonatomic) int state;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSNumber *listeningToMusicApplication;
@property(retain, nonatomic) SAMPMediaItem *listeningToItem;
@property(copy, nonatomic) NSString *hashedGroupID;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

