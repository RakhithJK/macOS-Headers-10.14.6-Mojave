//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/PDSlideBase.h>

@class OADColorMap, OADThemeOverrides;

@interface PDSlideChild : PDSlideBase
{
    BOOL mShowMasterPlaceholderAnimations;
    BOOL mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}

- (void).cxx_destruct;
- (id)description;
- (id)drawingTheme;
- (void)doneWithContent;
- (id)defaultTextListStyle;
- (id)styleMatrix;
- (id)colorMap;
- (id)fontScheme;
- (id)colorScheme;
- (void)setColorMapOverride:(id)arg1;
- (id)colorMapOverride;
- (id)themeOverrides;
- (void)setShowMasterShapes:(BOOL)arg1;
- (BOOL)showMasterShapes;
- (void)setShowMasterPlaceholderAnimations:(BOOL)arg1;
- (BOOL)showMasterPlaceholderAnimations;
- (id)init;

@end

