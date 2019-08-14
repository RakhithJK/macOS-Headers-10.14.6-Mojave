//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPFrameLimitDialog.h"

@class EQCaption, NSControl, NSTabView;

@interface CPCartesianScale2DDialog : CPFrameLimitDialog
{
    EQCaption *mAbscissa2DCaption;
    NSTabView *mAbscissa2DTabView;
    id mAbscissa2DLinMin;
    id mAbscissa2DLinMax;
    id mAbscissa2DExpMin;
    id mAbscissa2DExpMax;
    id mAbscissaScaleUnit;
    id mAbscissaScaleLength;
    id mAbscissaScaleLengthPopup;
    EQCaption *mOrdinate2DCaption;
    NSTabView *mOrdinate2DTabView;
    id mOrdinate2DLinMin;
    id mOrdinate2DLinMax;
    id mOrdinate2DExpMin;
    id mOrdinate2DExpMax;
    id mOrdinateScaleUnit;
    id mOrdinateScaleLength;
    id mOrdinateScaleLengthPopup;
    NSControl *mAbscissa2DMin;
    NSControl *mAbscissa2DMax;
    NSControl *mOrdinate2DMin;
    NSControl *mOrdinate2DMax;
    double mAbscissaLength;
    double mOrdinateLength;
}

- (void)saveSpecificValues;
- (BOOL)specificValuesChangeBounds;
- (struct _GRange)yRange;
- (struct _GRange)xRange;
- (BOOL)dialogShouldOK;
- (void)dialogWillShow;
- (void)update:(id)arg1;
- (void)tryToUpdateScaleWithSender:(id)arg1 length:(double)arg2:(id)arg3:(id)arg4:(id)arg5:(id)arg6:(id)arg7;
- (void)awakeFromNib;

@end

