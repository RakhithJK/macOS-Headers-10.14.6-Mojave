//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPPreferencePanelItem.h"

@interface CPGeneralPreferencePanelItem : CPPreferencePanelItem
{
    id mShowSyntaxError;
    id mDefaultLengthUnit;
    id mDocumentLevelsOfUndo;
    id mEquationLevelsOfUndo;
    id mAdjustMargin;
    id mZoomFactor;
    id mUseSelectionColor;
    id mResolutionForTIFF;
    id mSnapshotFormat;
    id mParamCriticalNumber;
}

- (id)iconName;
- (id)group;
- (id)label;
- (void)update:(id)arg1;
- (void)didHide;
- (void)willShow;

@end

