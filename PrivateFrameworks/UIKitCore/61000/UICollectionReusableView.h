//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UICollectionView, UICollectionViewLayoutAttributes;

@interface UICollectionReusableView : UIView
{
    UICollectionViewLayoutAttributes *_layoutAttributes;
    UICollectionView *_collectionView;
    long long _updateAnimationCount;
    struct {
        unsigned int wasDequeued:1;
        unsigned int preferredAttributesValid:1;
        unsigned int generatingPreferredAttributes:1;
    } _reusableViewFlags;
    BOOL _preferredAttributesValid;
    NSString *_reuseIdentifier;
}

@property(nonatomic, getter=_arePreferredAttributesValid) BOOL preferredAttributesValid; // @synthesize preferredAttributesValid=_preferredAttributesValid;
@property(copy, nonatomic, setter=_setReuseIdentifier:) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (BOOL)canBeEdited;
- (void)_invalidatePreferredAttributes;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1;
- (BOOL)_disableRasterizeInAnimations;
- (BOOL)_wasDequeued;
- (void)_markAsDequeued;
- (void)_clearUpdateAnimation;
- (void)_addUpdateAnimation;
@property(readonly, nonatomic, getter=_isInUpdateAnimation) BOOL inUpdateAnimation;
@property(nonatomic, getter=_collectionView, setter=_setCollectionView:) __weak UICollectionView *collectionView;
@property(copy, nonatomic, getter=_layoutAttributes, setter=_setLayoutAttributes:) UICollectionViewLayoutAttributes *layoutAttributes;
- (void)_setBaseLayoutAttributes:(id)arg1;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

