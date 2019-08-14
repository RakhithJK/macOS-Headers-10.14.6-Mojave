//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying>
{
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property(readonly, nonatomic) NSArray *events;
@property(readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
- (id)extendedLogData;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithLogArray:(id)arg1;
- (id)init;
- (id)_common_init;

@end
