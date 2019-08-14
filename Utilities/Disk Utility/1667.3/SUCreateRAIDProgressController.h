//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SURAIDAssistantPaneController.h"

@class NSArray, NSDictionary, NSProgressIndicator, NSString, NSTextField, SKFilesystem;

@interface SUCreateRAIDProgressController : SURAIDAssistantPaneController
{
    int _raidType;
    NSProgressIndicator *_progressBar;
    NSTextField *_statusMessage;
    NSArray *_selectedDisks;
    NSString *_name;
    SKFilesystem *_filesystem;
    NSDictionary *_options;
    CDUnknownBlockType _compeletionBlock;
    NSString *_lastProgressString;
}

@property(retain) NSString *lastProgressString; // @synthesize lastProgressString=_lastProgressString;
@property(copy) CDUnknownBlockType compeletionBlock; // @synthesize compeletionBlock=_compeletionBlock;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property(retain) SKFilesystem *filesystem; // @synthesize filesystem=_filesystem;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSArray *selectedDisks; // @synthesize selectedDisks=_selectedDisks;
@property int raidType; // @synthesize raidType=_raidType;
@property __weak NSTextField *statusMessage; // @synthesize statusMessage=_statusMessage;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
- (void).cxx_destruct;
- (void)completeOperationWithError:(id)arg1;
- (void)completeOperationWithDisk:(id)arg1;
- (id)title;
- (void)viewDidLoad;
- (id)initWithDisks:(id)arg1 name:(id)arg2 raidType:(int)arg3 filesystem:(id)arg4 options:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (id)paneIdentifier;

@end

