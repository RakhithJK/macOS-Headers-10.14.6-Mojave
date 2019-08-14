//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSArray, NSInspectorBar;

__attribute__((visibility("hidden")))
@interface __NSInspectorBarView : NSStackView
{
    NSInspectorBar *_inspectorBar;
}

@property NSInspectorBar *inspectorBar; // @synthesize inspectorBar=_inspectorBar;
- (BOOL)mouseDownCanMoveWindow;
- (void)addItem:(id)arg1;
@property(copy) NSArray *items;
- (void)removeItems;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsIgnored;

@end

