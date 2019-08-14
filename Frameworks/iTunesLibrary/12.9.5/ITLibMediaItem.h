//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iTunesLibrary/ITLibMediaEntity.h>

@class ITLibAlbum, ITLibArtist, ITLibArtwork, ITLibMediaItemData, ITLibMediaItemVideoInfo, NSDate, NSNumber, NSString, NSURL;

@interface ITLibMediaItem : ITLibMediaEntity
{
    ITLibMediaItemData *_data;
}

- (id)valueForProperty:(id)arg1;
- (void)enumerateValuesExceptForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL downloadable; // @dynamic downloadable;
@property(nonatomic) unsigned long long playlistCount; // @dynamic playlistCount;
@property(retain, nonatomic) NSURL *URL; // @dynamic URL;
@property(nonatomic) long long videoEpisodeOrder; // @dynamic videoEpisodeOrder;
@property(retain, nonatomic) NSString *videoEpisode; // @dynamic videoEpisode;
@property(nonatomic) unsigned long long videoSeason; // @dynamic videoSeason;
@property(retain, nonatomic) NSString *videoSortSeries; // @dynamic videoSortSeries;
@property(retain, nonatomic) NSString *videoSeries; // @dynamic videoSeries;
@property(nonatomic) unsigned long long videoHeight; // @dynamic videoHeight;
@property(nonatomic) unsigned long long videoWidth; // @dynamic videoWidth;
@property(nonatomic) BOOL videoHD; // @dynamic videoHD;
@property(nonatomic) unsigned long long albumTrackCount; // @dynamic albumTrackCount;
@property(nonatomic) unsigned long long albumDiscNumber; // @dynamic albumDiscNumber;
@property(nonatomic) unsigned long long albumDiscCount; // @dynamic albumDiscCount;
@property(retain, nonatomic) NSNumber *artistPersistentID;
@property(retain, nonatomic) NSString *sortAlbumArtist; // @dynamic sortAlbumArtist;
@property(retain, nonatomic) NSString *albumArtist; // @dynamic albumArtist;
@property(nonatomic) BOOL albumCompilation; // @dynamic albumCompilation;
@property(nonatomic) BOOL albumGapless; // @dynamic albumGapless;
@property(retain, nonatomic) NSNumber *albumPersistentID; // @dynamic albumPersistentID;
@property(nonatomic) BOOL albumRatingComputed; // @dynamic albumRatingComputed;
@property(nonatomic) long long albumRating; // @dynamic albumRating;
@property(retain, nonatomic) NSString *sortAlbumTitle; // @dynamic sortAlbumTitle;
@property(retain, nonatomic) NSString *albumTitle; // @dynamic albumTitle;
@property(retain, nonatomic) NSString *sortArtistName; // @dynamic sortArtistName;
@property(retain, nonatomic) NSString *artistName; // @dynamic artistName;
@property(nonatomic) unsigned long long locationType; // @dynamic locationType;
@property(nonatomic) unsigned long long movementCount; // @dynamic movementCount;
@property(nonatomic) unsigned long long movementNumber; // @dynamic movementNumber;
@property(copy, nonatomic) NSString *movementName; // @dynamic movementName;
@property(copy, nonatomic) NSString *work; // @dynamic work;
@property(copy, nonatomic) NSString *grouping; // @dynamic grouping;
@property(nonatomic, getter=isUserDisabled) BOOL userDisabled; // @dynamic userDisabled;
@property(nonatomic) unsigned long long volumeNormalizationEnergy; // @dynamic volumeNormalizationEnergy;
@property(nonatomic) long long volumeAdjustment; // @dynamic volumeAdjustment;
@property(copy, nonatomic) NSString *voiceOverLanguage; // @dynamic voiceOverLanguage;
@property(retain, nonatomic) NSDate *skipDate; // @dynamic skipDate;
@property(nonatomic) unsigned long long skipCount; // @dynamic skipCount;
@property(readonly, nonatomic) unsigned long long fileType; // @dynamic fileType;
@property(nonatomic) unsigned long long year; // @dynamic year;
@property(retain, nonatomic) NSDate *releaseDate; // @dynamic releaseDate;
@property(readonly, retain, nonatomic) ITLibMediaItemVideoInfo *videoInfo; // @dynamic videoInfo;
@property(nonatomic, getter=isVideo, setter=setIsVideo:) BOOL video; // @dynamic video;
@property(nonatomic, getter=isDRMProtected, setter=setDRMProtected:) BOOL drmProtected; // @dynamic drmProtected;
@property(nonatomic, getter=isCloud, setter=setIsCloud:) BOOL cloud; // @dynamic cloud;
@property(nonatomic, getter=isPurchased) BOOL purchased; // @dynamic purchased;
@property(copy, nonatomic) NSString *comments; // @dynamic comments;
@property(readonly, retain, nonatomic) ITLibArtwork *artwork; // @dynamic artwork;
@property(nonatomic, getter=hasArtworkAvailable) BOOL artworkAvailable; // @dynamic artworkAvailable;
@property(readonly, retain, nonatomic) NSURL *location; // @dynamic location;
@property(nonatomic) unsigned long long playStatus;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(nonatomic) unsigned long long playCount; // @dynamic playCount;
@property(nonatomic) unsigned long long beatsPerMinute; // @dynamic beatsPerMinute;
@property(nonatomic) unsigned long long sampleRate; // @dynamic sampleRate;
@property(nonatomic) unsigned long long bitrate; // @dynamic bitrate;
@property(retain, nonatomic) NSDate *addedDate; // @dynamic addedDate;
@property(retain, nonatomic) NSDate *modifiedDate; // @dynamic modifiedDate;
@property(copy, nonatomic) NSString *contentRating; // @dynamic contentRating;
@property(nonatomic) unsigned long long lyricsContentRating; // @dynamic lyricsContentRating;
@property(copy, nonatomic) NSString *description; // @dynamic description;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) unsigned long long trackNumber; // @dynamic trackNumber;
@property(nonatomic) unsigned long long totalTime; // @dynamic totalTime;
@property(nonatomic) unsigned long long bookmarkTime;
@property(nonatomic) unsigned long long fileSize;
@property(nonatomic) unsigned long long size; // @dynamic size;
@property(nonatomic) unsigned long long mediaKind; // @dynamic mediaKind;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *genre; // @dynamic genre;
@property(readonly, retain, nonatomic) ITLibAlbum *album; // @dynamic album;
@property(nonatomic) unsigned long long stopTime; // @dynamic stopTime;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;
@property(nonatomic, getter=isRatingComputed) BOOL ratingComputed; // @dynamic ratingComputed;
- (BOOL)isRatingComputer;
@property(nonatomic) long long rating; // @dynamic rating;
@property(copy, nonatomic) NSString *sortComposer; // @dynamic sortComposer;
@property(copy, nonatomic) NSString *composer; // @dynamic composer;
@property(readonly, retain, nonatomic) ITLibArtist *artist; // @dynamic artist;
@property(copy, nonatomic) NSString *sortTitle; // @dynamic sortTitle;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end

