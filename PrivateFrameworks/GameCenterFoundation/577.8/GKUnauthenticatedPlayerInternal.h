//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterFoundation/GKLocalPlayerInternal.h>

@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal
{
    int _encodingCount;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)isEqual:(id)arg1;
- (id)alias;
- (id)teamPlayerID;
- (id)gamePlayerID;
- (id)playerID;
- (void)encodeWithCoder:(id)arg1;

@end

