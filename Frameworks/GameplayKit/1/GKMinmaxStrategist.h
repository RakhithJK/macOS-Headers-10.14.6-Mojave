//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/GKStrategist-Protocol.h>

@class NSString;
@protocol GKGameModel, GKRandom;

@interface GKMinmaxStrategist : NSObject <GKStrategist>
{
    struct GKCMinmaxStrategist *_cppMinmax;
}

- (id)randomMoveForPlayer:(id)arg1 fromNumberOfBestMoves:(long long)arg2;
- (id)bestMoveForPlayer:(id)arg1;
- (id)bestMoveForActivePlayer;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) id <GKRandom> randomSource;
@property(retain, nonatomic) id <GKGameModel> gameModel;
@property(nonatomic) long long maxLookAheadDepth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

