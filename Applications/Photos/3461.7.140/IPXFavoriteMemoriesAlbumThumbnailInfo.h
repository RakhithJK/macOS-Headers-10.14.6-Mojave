//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface IPXFavoriteMemoriesAlbumThumbnailInfo : NSObject <NSCopying>
{
    struct CGImage *_thumbnail;
    long long _currentResolution;
    long long _highestResolutionRequested;
    long long _currentThumbnailVersion;
    long long _neededThumbnailVersion;
}

@property long long neededThumbnailVersion; // @synthesize neededThumbnailVersion=_neededThumbnailVersion;
@property long long currentThumbnailVersion; // @synthesize currentThumbnailVersion=_currentThumbnailVersion;
@property long long highestResolutionRequested; // @synthesize highestResolutionRequested=_highestResolutionRequested;
@property long long currentResolution; // @synthesize currentResolution=_currentResolution;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property struct CGImage *thumbnail;

@end

