//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class CalUIDelayedHoverButtonTableCellView;

@interface CalUIDelayedHoverButton : NSButton
{
    BOOL _isHovered;
    CalUIDelayedHoverButtonTableCellView *_view;
}

@property BOOL isHovered; // @synthesize isHovered=_isHovered;
@property __weak CalUIDelayedHoverButtonTableCellView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)updateIsHovered:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 view:(id)arg2;

@end

