//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/_AMiTunes8Playlist.h>

@class NSString;

@interface _AMiTunes8AudioCDPlaylist : _AMiTunes8Playlist
{
}

@property long long year;
@property(copy) NSString *genre;
@property long long discNumber;
@property long long discCount;
@property(copy) NSString *composer;
@property BOOL compilation;
@property(copy) NSString *artist;
- (id)audioCDTracks;

@end

