//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/QTCompressionOptions.h>

@class NSData;

@interface QTAudioCompressionOptions : QTCompressionOptions
{
    struct AudioStreamBasicDescription _asbd;
    NSData *_channelLayout;
    NSData *_magicCookie;
}

+ (id)compressionOptionsWithDescription:(id)arg1;
- (BOOL)isEqualToCompressionOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedCompressionOptionsSummary;
- (id)mediaType;
- (id)magicCookie;
- (id)channelLayout;
- (struct AudioStreamBasicDescription)audioStreamBasicDescription;
- (void)dealloc;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription)arg1 channelLayout:(id)arg2 magicCookie:(id)arg3;

@end

