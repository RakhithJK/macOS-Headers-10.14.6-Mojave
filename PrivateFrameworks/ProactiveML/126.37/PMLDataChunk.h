//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class NSData;

@interface PMLDataChunk : NSObject <NSCopying>
{
    NSData *_backingData;
    NSData *_superdata;
}

+ (id)serializeChunks:(id)arg1;
+ (id)chunksFromData:(id)arg1;
+ (id)chunksFromFileAtPath:(id)arg1;
+ (id)chunkOfType:(unsigned int)arg1 data:(id)arg2 superdata:(id)arg3;
+ (unsigned int)dataChunkType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setSuperdata:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

