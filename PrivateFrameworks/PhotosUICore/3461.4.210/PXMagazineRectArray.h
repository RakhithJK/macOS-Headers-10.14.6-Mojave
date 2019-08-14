//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXMagazineRectArray : NSObject <NSCopying>
{
    struct PXMagazineRect *_rects;
    unsigned long long _currentIndex;
    unsigned long long _size;
    double _score;
}

@property(nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) unsigned long long count;
- (struct PXMagazineRect)rectAtIndex:(unsigned long long)arg1;
- (void)removeLastRect;
- (void)addRect:(struct PXMagazineRect)arg1;
- (unsigned long long)rowsUsed;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSize:(unsigned long long)arg1;

@end

