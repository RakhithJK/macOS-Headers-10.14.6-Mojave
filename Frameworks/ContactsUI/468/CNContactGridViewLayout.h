//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <ContactsUI/NSCopying-Protocol.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface CNContactGridViewLayout : UICollectionViewFlowLayout <NSCopying>
{
    BOOL _needsUpdateLayout;
    long long _numberOfColumns;
    NSIndexPath *_selectedIndexPath;
    double _offsetBefore;
    double _offsetAfter;
    double _selectedItemWidthOffset;
}

@property(nonatomic) double selectedItemWidthOffset; // @synthesize selectedItemWidthOffset=_selectedItemWidthOffset;
@property(nonatomic) double offsetAfter; // @synthesize offsetAfter=_offsetAfter;
@property(nonatomic) double offsetBefore; // @synthesize offsetBefore=_offsetBefore;
@property(nonatomic) BOOL needsUpdateLayout; // @synthesize needsUpdateLayout=_needsUpdateLayout;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (void).cxx_destruct;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (void)_updateLayoutMetrics;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

