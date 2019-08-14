//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, RDAlbum;

@interface _IPXAlbumTreeDataSourceItem : NSObject
{
    BOOL _isSection;
    BOOL _isNewAlbumPlaceholder;
    NSString *_title;
    NSArray *_children;
    RDAlbum *_album;
}

@property(readonly, nonatomic) RDAlbum *album; // @synthesize album=_album;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) BOOL isNewAlbumPlaceholder; // @synthesize isNewAlbumPlaceholder=_isNewAlbumPlaceholder;
@property(readonly, nonatomic) BOOL isSection; // @synthesize isSection=_isSection;
- (void).cxx_destruct;
- (id)_filteredChildren:(id)arg1;
- (id)initAsNewAlbumPlaceholder;
- (id)initWithAlbum:(id)arg1;
- (id)initWithFolder:(id)arg1;
- (id)initWithTitle:(id)arg1 contents:(id)arg2;

@end

