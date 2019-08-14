//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableArray;

@interface MGMediaTrack : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableArray *_mediaClips;
    unsigned long long _mediaType;
}

+ (BOOL)automaticallyNotifiesObserversOfMediaClips;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (void)replaceMediaClipsAtIndexes:(id)arg1 withMediaClips:(id)arg2;
- (void)removeMediaClipsAtIndexes:(id)arg1;
- (void)insertMediaClips:(id)arg1 atIndexes:(id)arg2;
- (void)replaceMediaClipAtIndex:(unsigned long long)arg1 withMediaClip:(id)arg2;
- (void)removeMediaClipAtIndex:(unsigned long long)arg1;
- (void)insertMediaClip:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *mediaClips;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithMediaTrackMediaType:(unsigned long long)arg1;
- (void)trimToTimeRange:(CDStruct_e83c9415)arg1;
- (void)reorderMediaClips:(id)arg1 afterMediaClip:(id)arg2;
- (void)removeMediaClips:(id)arg1;
- (void)insertMediaClips:(id)arg1 afterMediaClip:(id)arg2;
- (void)addMediaClips:(id)arg1;

@end

