//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, _MRNowPlayingPlayerPathProtobuf;

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) NSArray *contentItems;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
- (id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2;

@end

