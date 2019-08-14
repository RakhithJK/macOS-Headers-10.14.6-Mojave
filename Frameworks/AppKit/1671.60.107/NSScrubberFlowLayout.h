//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrubberLayout.h>

@interface NSScrubberFlowLayout : NSScrubberLayout
{
    id _support;
    double _itemSpacing;
    struct CGSize _itemSize;
}

- (void)invalidateLayoutForItemsAtIndexes:(id)arg1;
- (void)invalidateLayout;
- (id)layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndex:(long long)arg1;
- (struct CGSize)scrubberContentSize;
- (void)prepareLayout;
@property struct CGSize itemSize;
@property double itemSpacing;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
