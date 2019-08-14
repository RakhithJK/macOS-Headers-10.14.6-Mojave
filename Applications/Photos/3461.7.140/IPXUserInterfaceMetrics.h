//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPXUserInterfaceMetrics : NSObject
{
    double _browserToolbarHeight;
    double _browserToolbarHorizontalPadding;
    double _browserToolbarLeadingPadding;
    double _browserDistanceFromToolbarTopToBaseline;
    double _browserSubtoolbarHeight;
    double _browserDistanceFromSubtoolbarTopToBaseline;
    double _browserSectionHeaderHeight;
    double _browserSectionHeaderDistanceFromTopToBaseline;
    double _editorControllerEditDoneButtonWidth;
    double _toolbarSearchFieldMinimumWidth;
    double _toolbarSearchFieldMaximumWidth;
    double _toolbarItemDefaultWidth;
    double _oneUpBadgesHeight;
    double _oneUpBadgesCornerRadius;
    double _oneUpBadgesInternalLeadingPadding;
    double _oneUpBadgesInternalTrailingPadding;
    double _oneUpBadgesHorizontalSpacingBetweenIconAndText;
    double _oneUpDefaultHorizontalSpacingBetweenBadges;
    double _oneUpHorizontalSpacingBetweenBorderedBadges;
    double _oneUpHorizontalSpacingBetweenIconicBadges;
    CDStruct_0e3fad5d _oneUpBadgesExternalMargins;
}

+ (id)defaultMetrics;
@property(readonly, nonatomic) double oneUpHorizontalSpacingBetweenIconicBadges; // @synthesize oneUpHorizontalSpacingBetweenIconicBadges=_oneUpHorizontalSpacingBetweenIconicBadges;
@property(readonly, nonatomic) double oneUpHorizontalSpacingBetweenBorderedBadges; // @synthesize oneUpHorizontalSpacingBetweenBorderedBadges=_oneUpHorizontalSpacingBetweenBorderedBadges;
@property(readonly, nonatomic) double oneUpDefaultHorizontalSpacingBetweenBadges; // @synthesize oneUpDefaultHorizontalSpacingBetweenBadges=_oneUpDefaultHorizontalSpacingBetweenBadges;
@property(readonly, nonatomic) double oneUpBadgesHorizontalSpacingBetweenIconAndText; // @synthesize oneUpBadgesHorizontalSpacingBetweenIconAndText=_oneUpBadgesHorizontalSpacingBetweenIconAndText;
@property(readonly, nonatomic) double oneUpBadgesInternalTrailingPadding; // @synthesize oneUpBadgesInternalTrailingPadding=_oneUpBadgesInternalTrailingPadding;
@property(readonly, nonatomic) double oneUpBadgesInternalLeadingPadding; // @synthesize oneUpBadgesInternalLeadingPadding=_oneUpBadgesInternalLeadingPadding;
@property(readonly, nonatomic) CDStruct_0e3fad5d oneUpBadgesExternalMargins; // @synthesize oneUpBadgesExternalMargins=_oneUpBadgesExternalMargins;
@property(readonly, nonatomic) double oneUpBadgesCornerRadius; // @synthesize oneUpBadgesCornerRadius=_oneUpBadgesCornerRadius;
@property(readonly, nonatomic) double oneUpBadgesHeight; // @synthesize oneUpBadgesHeight=_oneUpBadgesHeight;
@property(readonly, nonatomic) double toolbarItemDefaultWidth; // @synthesize toolbarItemDefaultWidth=_toolbarItemDefaultWidth;
@property(readonly, nonatomic) double toolbarSearchFieldMaximumWidth; // @synthesize toolbarSearchFieldMaximumWidth=_toolbarSearchFieldMaximumWidth;
@property(readonly, nonatomic) double toolbarSearchFieldMinimumWidth; // @synthesize toolbarSearchFieldMinimumWidth=_toolbarSearchFieldMinimumWidth;
@property(readonly, nonatomic) double editorControllerEditDoneButtonWidth; // @synthesize editorControllerEditDoneButtonWidth=_editorControllerEditDoneButtonWidth;
@property(readonly, nonatomic) double browserSectionHeaderDistanceFromTopToBaseline; // @synthesize browserSectionHeaderDistanceFromTopToBaseline=_browserSectionHeaderDistanceFromTopToBaseline;
@property(readonly, nonatomic) double browserSectionHeaderHeight; // @synthesize browserSectionHeaderHeight=_browserSectionHeaderHeight;
@property(readonly, nonatomic) double browserDistanceFromSubtoolbarTopToBaseline; // @synthesize browserDistanceFromSubtoolbarTopToBaseline=_browserDistanceFromSubtoolbarTopToBaseline;
@property(readonly, nonatomic) double browserSubtoolbarHeight; // @synthesize browserSubtoolbarHeight=_browserSubtoolbarHeight;
@property(readonly, nonatomic) double browserDistanceFromToolbarTopToBaseline; // @synthesize browserDistanceFromToolbarTopToBaseline=_browserDistanceFromToolbarTopToBaseline;
@property(readonly, nonatomic) double browserToolbarLeadingPadding; // @synthesize browserToolbarLeadingPadding=_browserToolbarLeadingPadding;
@property(readonly, nonatomic) double browserToolbarHorizontalPadding; // @synthesize browserToolbarHorizontalPadding=_browserToolbarHorizontalPadding;
@property(readonly, nonatomic) double browserToolbarHeight; // @synthesize browserToolbarHeight=_browserToolbarHeight;
- (id)init;

@end
