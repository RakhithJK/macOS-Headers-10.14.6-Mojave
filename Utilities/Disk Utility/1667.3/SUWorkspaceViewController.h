//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSImageView, NSTextField, SKDisk;

@interface SUWorkspaceViewController : NSViewController
{
    NSTextField *_diskNameField;
    NSImageView *_diskIconView;
    NSTextField *_diskTypeField;
    NSTextField *_diskSizeField;
    SKDisk *_disk;
}

+ (id)viewControllerForDisk:(id)arg1;
@property(retain) SKDisk *disk; // @synthesize disk=_disk;
@property __weak NSTextField *diskSizeField; // @synthesize diskSizeField=_diskSizeField;
@property __weak NSTextField *diskTypeField; // @synthesize diskTypeField=_diskTypeField;
@property __weak NSImageView *diskIconView; // @synthesize diskIconView=_diskIconView;
@property __weak NSTextField *diskNameField; // @synthesize diskNameField=_diskNameField;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithDisk:(id)arg1;

@end

