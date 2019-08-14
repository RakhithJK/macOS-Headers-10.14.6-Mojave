//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__BKBookshelfCollectionViewCellAccessibility_super.h"

@class BKAccessibilityCollectionViewButton, NSString;
@protocol BKBookshelfCollectionViewCellAccessibilityDelegate;

@interface BKBookshelfCollectionViewCellAccessibility : __BKBookshelfCollectionViewCellAccessibility_super
{
    id _bkaxLinkedUIElement;
}

+ (Class)bkaxBaseSafeCategoryClass;
+ (id)bkaxTargetClassName;
@property(nonatomic, setter=bkaxSetLinkedUIElement:) id bkaxLinkedUIElement; // @synthesize bkaxLinkedUIElement=_bkaxLinkedUIElement;
- (id)_bkaxParentCollectionView;
@property(readonly, nonatomic) BOOL bkaxIsSeriesCell;
@property(readonly, nonatomic) BKAccessibilityCollectionViewButton *bkaxButton;
- (unsigned long long)bkaxProgressState;
@property(readonly, nonatomic) NSString *bkaxCellTitle;
- (id)bkaxCellDescription;
- (id)accessibilityActionDescription:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)_bkaxSetButton:(id)arg1;
- (id)_bkaxButton;
- (void)bkaxSetLinkedUIElements:(id)arg1;
- (id)bkaxLinkedUIElements;
@property(nonatomic, setter=bkaxSetDelegate:) id <BKBookshelfCollectionViewCellAccessibilityDelegate> bkaxDelegate;

@end

