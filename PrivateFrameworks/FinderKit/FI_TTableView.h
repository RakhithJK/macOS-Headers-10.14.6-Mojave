//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

__attribute__((visibility("hidden")))
@interface FI_TTableView : NSTableView
{
    BOOL _acceptsFirstMouse;
}

@property BOOL acceptsFirstMouse; // @synthesize acceptsFirstMouse=_acceptsFirstMouse;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_windowChangedKeyState;
- (void)addTableColumn:(id)arg1;
@property unsigned long long controlSize; // @dynamic controlSize;
@property _Bool autoforwardsScrollWheelEvents; // @dynamic autoforwardsScrollWheelEvents;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

