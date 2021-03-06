//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class DVDScrubber, NSStackView;

@interface DVDHudPanel : NSPanel
{
    struct CGPoint _moveStartingPoint;
    double _minX;
    double _maxX;
    double _minY;
    double _maxY;
    BOOL _isMouseDown;
    NSStackView *_vcrButtonsStackView;
    NSStackView *_playbackSliderStackView;
    BOOL _moving;
    BOOL _moved;
    DVDScrubber *_scrubber;
}

@property __weak DVDScrubber *scrubber; // @synthesize scrubber=_scrubber;
@property(readonly, getter=wasMoved) BOOL moved; // @synthesize moved=_moved;
@property(readonly, getter=isMoving) BOOL moving; // @synthesize moving=_moving;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)awakeFromNib;

@end

