//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class InfiniteSwipeController, InfiniteSwipeControllerContainer;

@interface InfiniteSwipeControllerDocumentView : NSView
{
    InfiniteSwipeController *_infiniteController;
    InfiniteSwipeControllerContainer *_infiniteContainer;
}

@property __weak InfiniteSwipeControllerContainer *infiniteContainer; // @synthesize infiniteContainer=_infiniteContainer;
@property __weak InfiniteSwipeController *infiniteController; // @synthesize infiniteController=_infiniteController;
- (void).cxx_destruct;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (id)description;

@end
