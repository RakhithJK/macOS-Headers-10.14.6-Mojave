//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaRemote/MRNowPlayingArtwork.h>

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork
{
    NSData *_imageData;
    NSString *_mimeType;
}

@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (id)description;
- (id)copyImageData;
- (BOOL)hasArtworkData;
- (unsigned int)type;
- (BOOL)isEqual:(id)arg1;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;

@end

