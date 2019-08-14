//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;

@interface CSIndexConnection : CSXPCConnection
{
    BOOL _previouslyInitialized;
    NSMutableDictionary *_indexMap;
}

+ (id)sharedConnection;
@property(readonly, nonatomic) BOOL previouslyInitialized; // @synthesize previouslyInitialized=_previouslyInitialized;
@property(readonly, nonatomic) NSMutableDictionary *indexMap; // @synthesize indexMap=_indexMap;
- (void).cxx_destruct;
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)indexForID:(unsigned int)arg1;
- (void)addIndex:(id)arg1 forID:(unsigned int)arg2;
- (void)dropIndexID:(unsigned int)arg1;
- (void)handleReply:(id)arg1;
- (void)handleError:(id)arg1;

@end

