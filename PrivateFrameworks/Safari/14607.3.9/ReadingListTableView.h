//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/TableViewPlus.h>

#import <Safari/ScrollViewPlusScrollObserver-Protocol.h>

@class NSSearchField, NSString, NSTableCellView, SidebarSearchFieldView;
@protocol ReadingListTableViewLiveResizeDelegate;

__attribute__((visibility("hidden")))
@interface ReadingListTableView : TableViewPlus <ScrollViewPlusScrollObserver>
{
    NSTableCellView *_lastCellView;
    long long _highlightedRowIndex;
    BOOL _handlingMouseDown;
    SidebarSearchFieldView *_searchFieldView;
    id <ReadingListTableViewLiveResizeDelegate> _liveResizeDelegate;
}

@property(nonatomic) __weak id <ReadingListTableViewLiveResizeDelegate> liveResizeDelegate; // @synthesize liveResizeDelegate=_liveResizeDelegate;
@property(nonatomic, getter=isHandlingMouseDown) BOOL handlingMouseDown; // @synthesize handlingMouseDown=_handlingMouseDown;
@property(readonly, nonatomic) long long highlightedRowIndex; // @synthesize highlightedRowIndex=_highlightedRowIndex;
- (void).cxx_destruct;
- (double)_totalHeightOfTableView;
- (struct CGRect)accessibilityFrame;
- (void)scrollView:(id)arg1 didScrollToPoint:(struct CGPoint)arg2;
@property(readonly, retain, nonatomic) SidebarSearchFieldView *searchFieldView;
@property(readonly, retain, nonatomic) NSSearchField *searchField;
- (void)viewDidEndLiveResize;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)viewDidMoveToWindow;
- (id)_rowViewAtRow:(long long)arg1 makeIfNecessary:(BOOL)arg2;
- (void)highlightRowByIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

