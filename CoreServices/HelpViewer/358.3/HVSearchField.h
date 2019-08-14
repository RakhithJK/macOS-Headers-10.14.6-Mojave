//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

@class NSString;

@interface HVSearchField : NSSearchField
{
    NSString *_searchTextToolTip;
    NSString *_cancelToolTip;
    long long _searchTextToolTipTag;
    long long _cancelToolTipTag;
    BOOL _toolTipRectanglesUpToDate;
}

@property(retain) NSString *searchTextToolTip; // @synthesize searchTextToolTip=_searchTextToolTip;
@property(retain) NSString *cancelToolTip; // @synthesize cancelToolTip=_cancelToolTip;
- (void).cxx_destruct;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)resetCursorRects;
- (id)toolTip;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)removeAllToolTips;
- (void)_updateToolTips;

@end

