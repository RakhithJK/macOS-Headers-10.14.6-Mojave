//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/HMProtoBuf-Protocol.h>

@class HMObjectMergeOperations, NSData;

@protocol HMProtoBufMerge <HMProtoBuf>
- (BOOL)applyProtoBufData:(NSData *)arg1 callbackOperations:(HMObjectMergeOperations *)arg2;
@end
