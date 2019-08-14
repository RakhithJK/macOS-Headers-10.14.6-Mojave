//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VSOpusDecoder : NSObject
{
    struct OpaqueAudioConverter *_decoder;
    struct AudioStreamBasicDescription _asbd;
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)decodeChunk:(id)arg1 outError:(id *)arg2;
- (void)endChunkDecoding;
- (id)beginChunkDecoderForStreamDescription:(struct AudioStreamBasicDescription)arg1;
- (id)decodeChunks:(id)arg1 streamDescription:(struct AudioStreamBasicDescription)arg2 outError:(id *)arg3;
- (struct OpaqueAudioConverter *)_opusDecoder:(struct AudioStreamBasicDescription)arg1;

@end

