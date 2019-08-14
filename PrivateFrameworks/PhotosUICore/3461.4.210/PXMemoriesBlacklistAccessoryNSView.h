//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, PXMemoriesBlacklistAccessoryViewSpec;

@interface PXMemoriesBlacklistAccessoryNSView : NSView
{
    double _accessoryViewAnchorXPos;
    PXMemoriesBlacklistAccessoryViewSpec *_viewSpec;
    NSView *_accessoryView;
    NSArray *_constraints;
}

@property(copy, nonatomic, setter=_setConstraints:) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) PXMemoriesBlacklistAccessoryViewSpec *viewSpec; // @synthesize viewSpec=_viewSpec;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateConstraintsWithNewAnchorXPos:(double)arg1;
- (void)_createAndAddSubview;
- (id)initWithSpec:(id)arg1;

@end

