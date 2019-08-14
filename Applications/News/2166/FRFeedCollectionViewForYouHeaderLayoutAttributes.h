//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface FRFeedCollectionViewForYouHeaderLayoutAttributes : UICollectionViewLayoutAttributes
{
    double _heartYPosition;
    double _heartHeight;
    long long _muteFavoriteOption;
    struct CGRect _titleFrame;
    struct CGRect _subtitleFrame;
    struct CGRect _eyeBrowTextFrame;
    struct CGRect _topDecorationFrame;
    struct CGRect _accessoryViewFrame;
    struct CGRect _muteButtonFrame;
    struct CGRect _favoriteButtonFrame;
}

+ (id)headerLayoutAttributesWithIndexPath:(id)arg1 headerDisplayable:(id)arg2 muteFavoriteOptions:(long long)arg3 feedGutter:(double)arg4 feedWidth:(double)arg5 isPad:(BOOL)arg6;
@property(nonatomic) long long muteFavoriteOption; // @synthesize muteFavoriteOption=_muteFavoriteOption;
@property(nonatomic) struct CGRect favoriteButtonFrame; // @synthesize favoriteButtonFrame=_favoriteButtonFrame;
@property(nonatomic) struct CGRect muteButtonFrame; // @synthesize muteButtonFrame=_muteButtonFrame;
@property(nonatomic) double heartHeight; // @synthesize heartHeight=_heartHeight;
@property(nonatomic) double heartYPosition; // @synthesize heartYPosition=_heartYPosition;
@property(nonatomic) struct CGRect accessoryViewFrame; // @synthesize accessoryViewFrame=_accessoryViewFrame;
@property(nonatomic) struct CGRect topDecorationFrame; // @synthesize topDecorationFrame=_topDecorationFrame;
@property(nonatomic) struct CGRect eyeBrowTextFrame; // @synthesize eyeBrowTextFrame=_eyeBrowTextFrame;
@property(nonatomic) struct CGRect subtitleFrame; // @synthesize subtitleFrame=_subtitleFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

