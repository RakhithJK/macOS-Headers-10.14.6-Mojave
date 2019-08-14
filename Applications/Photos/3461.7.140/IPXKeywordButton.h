//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXGridBadgeButton.h"

#import "NSAccessibilityCheckBox-Protocol.h"
#import "NSDraggingSource-Protocol.h"

@class NSDraggingSession, NSString;

@interface IPXKeywordButton : IPXGridBadgeButton <NSAccessibilityCheckBox, NSDraggingSource>
{
    BOOL _isHighlighted;
    NSDraggingSession *_dragSession;
    unsigned long long _buttonCountType;
    NSString *_titleString;
}

@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) unsigned long long buttonCountType; // @synthesize buttonCountType=_buttonCountType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)accessibilityRoleDescription;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseDown:(id)arg1;
- (void)highlight:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)titleAttrs;
- (id)font;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
