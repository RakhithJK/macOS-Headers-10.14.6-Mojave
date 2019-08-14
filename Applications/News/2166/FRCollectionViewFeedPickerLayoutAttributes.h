//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSDictionary, UIFont, UIImage;

@interface FRCollectionViewFeedPickerLayoutAttributes : UICollectionViewLayoutAttributes
{
    UIFont *_placeholderTopicFont;
    UIFont *_placeholderChannelFont;
    NSDictionary *_placeholderTopicAttributes;
    NSDictionary *_placeholderChannelAttributes;
    UIImage *_placeholderTopicImage;
    UIImage *_placeholderChannelImage;
}

@property(retain, nonatomic) UIImage *placeholderChannelImage; // @synthesize placeholderChannelImage=_placeholderChannelImage;
@property(retain, nonatomic) UIImage *placeholderTopicImage; // @synthesize placeholderTopicImage=_placeholderTopicImage;
@property(retain, nonatomic) NSDictionary *placeholderChannelAttributes; // @synthesize placeholderChannelAttributes=_placeholderChannelAttributes;
@property(retain, nonatomic) NSDictionary *placeholderTopicAttributes; // @synthesize placeholderTopicAttributes=_placeholderTopicAttributes;
@property(retain, nonatomic) UIFont *placeholderChannelFont; // @synthesize placeholderChannelFont=_placeholderChannelFont;
@property(retain, nonatomic) UIFont *placeholderTopicFont; // @synthesize placeholderTopicFont=_placeholderTopicFont;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

