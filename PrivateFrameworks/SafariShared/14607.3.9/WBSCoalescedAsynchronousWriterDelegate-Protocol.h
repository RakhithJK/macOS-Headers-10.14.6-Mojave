//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSData, WBSCoalescedAsynchronousWriter;

@protocol WBSCoalescedAsynchronousWriterDelegate <NSObject>

@optional
- (void)coalescedAsynchronousWriter:(WBSCoalescedAsynchronousWriter *)arg1 didFinishWritingData:(NSData *)arg2;
@end

