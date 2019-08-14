//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIColor, UIImage;

@interface WebUITextIndicatorData : NSObject
{
    UIImage *_dataInteractionImage;
    NSArray *_textRectsInBoundingRectCoordinates;
    double _contentImageScaleFactor;
    UIImage *_contentImageWithHighlight;
    UIImage *_contentImage;
    UIImage *_contentImageWithoutSelection;
    UIColor *_estimatedBackgroundColor;
    struct CGRect _selectionRectInRootViewCoordinates;
    struct CGRect _textBoundingRectInRootViewCoordinates;
    struct CGRect _contentImageWithoutSelectionRectInRootViewCoordinates;
}

@property(retain, nonatomic) UIColor *estimatedBackgroundColor; // @synthesize estimatedBackgroundColor=_estimatedBackgroundColor;
@property(nonatomic) struct CGRect contentImageWithoutSelectionRectInRootViewCoordinates; // @synthesize contentImageWithoutSelectionRectInRootViewCoordinates=_contentImageWithoutSelectionRectInRootViewCoordinates;
@property(retain, nonatomic) UIImage *contentImageWithoutSelection; // @synthesize contentImageWithoutSelection=_contentImageWithoutSelection;
@property(retain, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property(retain, nonatomic) UIImage *contentImageWithHighlight; // @synthesize contentImageWithHighlight=_contentImageWithHighlight;
@property(nonatomic) double contentImageScaleFactor; // @synthesize contentImageScaleFactor=_contentImageScaleFactor;
@property(retain, nonatomic) NSArray *textRectsInBoundingRectCoordinates; // @synthesize textRectsInBoundingRectCoordinates=_textRectsInBoundingRectCoordinates;
@property(nonatomic) struct CGRect textBoundingRectInRootViewCoordinates; // @synthesize textBoundingRectInRootViewCoordinates=_textBoundingRectInRootViewCoordinates;
@property(nonatomic) struct CGRect selectionRectInRootViewCoordinates; // @synthesize selectionRectInRootViewCoordinates=_selectionRectInRootViewCoordinates;
@property(retain, nonatomic) UIImage *dataInteractionImage; // @synthesize dataInteractionImage=_dataInteractionImage;

@end

