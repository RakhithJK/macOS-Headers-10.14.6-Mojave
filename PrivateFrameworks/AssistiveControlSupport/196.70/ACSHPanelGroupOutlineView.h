//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHView.h>

@class NSColor, NSImage;

@interface ACSHPanelGroupOutlineView : ACSHView
{
    NSImage *_backgroundImage;
    BOOL _dottedOutline;
    NSColor *_outlineColor;
    double _outlineWidth;
    double _outlineInset;
}

@property(nonatomic) BOOL dottedOutline; // @synthesize dottedOutline=_dottedOutline;
@property(nonatomic) double outlineInset; // @synthesize outlineInset=_outlineInset;
@property(nonatomic) double outlineWidth; // @synthesize outlineWidth=_outlineWidth;
@property(retain, nonatomic) NSColor *outlineColor; // @synthesize outlineColor=_outlineColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_backgroundImage;
- (void)_clearBackgroundImage;
- (BOOL)wantsUpdateLayer;
- (void)initView;

@end

