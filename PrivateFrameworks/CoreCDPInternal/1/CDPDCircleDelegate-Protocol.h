//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CDPContext, CDPDCircleController, CDPDSecureChannelContext;

@protocol CDPDCircleDelegate
- (CDPDSecureChannelContext *)secureChannelContextForController:(CDPDCircleController *)arg1;
- (CDPContext *)contextForController:(CDPDCircleController *)arg1;
- (void)circleController:(CDPDCircleController *)arg1 secureBackupRecordsArePresentWithCompletion:(void (^)(BOOL, BOOL, NSError *))arg2;
@end

