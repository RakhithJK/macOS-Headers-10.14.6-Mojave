//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSTableView, NSTextView;

@interface _TtC9App_Store26MetricsDebugViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: dumpTextView
    // Error parsing type: , name: debugMetricsRecorder
    // Error parsing type: , name: events
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(nonatomic, retain) NSTextView *dumpTextView; // @synthesize dumpTextView;
@property(nonatomic, retain) NSTableView *tableView; // @synthesize tableView;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

