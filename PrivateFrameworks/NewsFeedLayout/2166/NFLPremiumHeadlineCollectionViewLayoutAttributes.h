//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@interface NFLPremiumHeadlineCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes
{
    double _shadowRadius;
    double _shadowOpacity;
    struct CGSize _shadowOffset;
}

@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1;

@end

