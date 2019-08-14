//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

@class NSString, NSWindow;
@protocol IPXVersionResourceProgressViewDelegate;

@interface IPXVersionResourceProgressViewController : IPXViewController
{
    NSWindow *_hostWindow;
    NSWindow *_progressSheet;
    NSString *_progressDescriptionKey;
    NSString *_progressNofM;
    unsigned long long _totalCount;
    unsigned long long _completedCount;
    id <IPXVersionResourceProgressViewDelegate> _delegate;
}

@property __weak id <IPXVersionResourceProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long completedCount; // @synthesize completedCount=_completedCount;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain) NSString *progressNofM; // @synthesize progressNofM=_progressNofM;
@property(retain) NSString *progressDescriptionKey; // @synthesize progressDescriptionKey=_progressDescriptionKey;
- (void).cxx_destruct;
- (void)constructProgressNofMString;
- (void)cancelButtonPressed:(id)arg1;
- (void)dismissProgressSheet;
- (void)showProgressSheet;
- (id)initWithHostWindow:(id)arg1;

@end

