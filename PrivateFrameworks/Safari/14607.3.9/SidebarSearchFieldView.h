//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSSearchField;
@protocol SidebarSearchFieldViewDelegate;

__attribute__((visibility("hidden")))
@interface SidebarSearchFieldView : NSView
{
    id <SidebarSearchFieldViewDelegate> _delegate;
    NSSearchField *_searchField;
    id _accessibilityOverrideParent;
}

@property(nonatomic) __weak id accessibilityOverrideParent; // @synthesize accessibilityOverrideParent=_accessibilityOverrideParent;
@property(readonly, nonatomic) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak id <SidebarSearchFieldViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityParent;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)_searchStringDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

