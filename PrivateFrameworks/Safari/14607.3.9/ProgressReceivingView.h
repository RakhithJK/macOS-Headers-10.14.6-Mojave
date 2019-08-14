//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Safari/ProgressReceiver-Protocol.h>

@protocol ProgressReceivingViewDelegate;

__attribute__((visibility("hidden")))
@interface ProgressReceivingView : NSView <ProgressReceiver>
{
    id <ProgressReceivingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ProgressReceivingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)progressSenderProgressDidComplete:(id)arg1;
- (void)progressSenderProgressDidChange:(id)arg1;
- (void)progressSenderProgressWillStart:(id)arg1;

@end

