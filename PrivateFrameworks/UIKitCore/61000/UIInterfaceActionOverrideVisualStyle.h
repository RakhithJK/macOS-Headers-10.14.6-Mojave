//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIInterfaceActionVisualStyle.h>

@class UIInterfaceActionHighlightAttributes, UIInterfaceActionSeparatorAttributes;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle
{
    double _customSelectionHighlightContinuousCornerRadius;
    UIInterfaceActionSeparatorAttributes *_customSeparatorAttributes;
    UIInterfaceActionHighlightAttributes *_customActionHighlightAttributes;
    CDUnknownBlockType _customTitleLabelFontProviderForViewState;
}

+ (id)styleOverride;
@property(copy, nonatomic) CDUnknownBlockType customTitleLabelFontProviderForViewState; // @synthesize customTitleLabelFontProviderForViewState=_customTitleLabelFontProviderForViewState;
@property(retain, nonatomic) UIInterfaceActionHighlightAttributes *customActionHighlightAttributes; // @synthesize customActionHighlightAttributes=_customActionHighlightAttributes;
@property(retain, nonatomic) UIInterfaceActionSeparatorAttributes *customSeparatorAttributes; // @synthesize customSeparatorAttributes=_customSeparatorAttributes;
@property double customSelectionHighlightContinuousCornerRadius; // @synthesize customSelectionHighlightContinuousCornerRadius=_customSelectionHighlightContinuousCornerRadius;
- (void).cxx_destruct;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
