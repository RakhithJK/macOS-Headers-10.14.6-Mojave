//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProactiveML/PMLDataChunk.h>

@interface PMLDataChunkPlist : PMLDataChunk
{
    id _plist;
    BOOL _parsed;
}

+ (id)chunkWithPlist:(id)arg1;
+ (unsigned int)dataChunkType;
- (void).cxx_destruct;
@property(readonly, nonatomic) id plist;

@end

