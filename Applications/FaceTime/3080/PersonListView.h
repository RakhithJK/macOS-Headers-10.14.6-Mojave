//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class FTTokenField, NSTextField;

@interface PersonListView : NSView
{
    NSView *_noRecentsView;
    NSTextField *_noRecentsText;
    FTTokenField *_searchField;
}

@property(nonatomic) __weak FTTokenField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak NSTextField *noRecentsText; // @synthesize noRecentsText=_noRecentsText;
@property(nonatomic) __weak NSView *noRecentsView; // @synthesize noRecentsView=_noRecentsView;
- (void).cxx_destruct;

@end

