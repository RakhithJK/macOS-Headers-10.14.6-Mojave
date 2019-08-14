//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class NSArray;
@protocol MSPublisherDelegate;

@protocol MSPublisher <NSObject>
@property(nonatomic) int publishBatchSize;
@property(nonatomic) id <MSPublisherDelegate> delegate;
- (void)reenqueueQuarantinedAssetCollections;
- (void)publish;
- (void)stop;
- (void)abort;
- (void)submitAssetCollectionsForPublication:(NSArray *)arg1 skipAssetCollections:(NSArray *)arg2;
- (void)submitAssetCollectionsForPublication:(NSArray *)arg1;
@end

