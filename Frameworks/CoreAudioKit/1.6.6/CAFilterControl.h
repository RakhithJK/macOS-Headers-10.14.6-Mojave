//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAAppleAU_ToolTipWindow, CAAppleEQGraphView;
@protocol CAAUViewParameterDataSource;

@interface CAFilterControl : NSObject
{
    CAAppleEQGraphView *view;
    id <CAAUViewParameterDataSource> dataSource;
    unsigned int param1;
    unsigned int param2;
    unsigned int param3;
    BOOL enabled;
    BOOL bypassed;
    BOOL highlighted;
    BOOL drawVerticalGuide;
    BOOL drawHorizontalGuide;
    BOOL hideTooltip;
    int type;
    int widthParamType;
    CAAppleAU_ToolTipWindow *toolTip;
    struct CGPoint knobLocation;
    double widthPixels;
    struct CGRect controlBounds;
    struct CGPoint clickOffset;
}

+ (long long)compare:(int)arg1 to:(int)arg2;
@property unsigned int param3; // @synthesize param3;
@property unsigned int param2; // @synthesize param2;
@property unsigned int param1; // @synthesize param1;
@property(readonly) struct CGRect controlBounds; // @synthesize controlBounds;
- (void)hideTooltip:(BOOL)arg1;
- (void)handleParameterValueChange:(id)arg1;
- (void)moveControl:(struct CGPoint)arg1 part:(int)arg2;
- (int)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)update;
- (void)setParam:(unsigned int)arg1 value:(float)arg2;
@property BOOL highlighted; // @synthesize highlighted;
- (BOOL)isToolTipVisible;
@property BOOL bypassed; // @synthesize bypassed;
@property BOOL enabled; // @synthesize enabled;
@property int type; // @dynamic type;
- (void)removeTooltip;
- (void)dealloc;
- (id)initWithView:(id)arg1 dataSource:(id)arg2 type:(int)arg3 param1ID:(unsigned int)arg4 param2ID:(unsigned int)arg5 param3ID:(unsigned int)arg6;

@end

