//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitUI/PKPassView.h>

#import <PassKitUI/NSTableViewDataSource-Protocol.h>
#import <PassKitUI/NSTableViewDelegate-Protocol.h>

@class NSScrollView, NSString, NSTableView, PKButton;

@interface PKPassBackView : PKPassView <NSTableViewDataSource, NSTableViewDelegate>
{
    NSScrollView *_backFieldsScrollView;
    NSTableView *_backFieldsTableView;
    PKButton *_backDoneButton;
}

@property(readonly) PKButton *backDoneButton; // @synthesize backDoneButton=_backDoneButton;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (double)textFieldHeightWithWidth:(double)arg1 string:(id)arg2 font:(id)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setPass:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateButtonColors;
- (void)layoutSubviews;
- (struct CGRect)backFieldBackgroundRect;
- (void)dealloc;
- (id)initWithPass:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

