//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class SVSAceCommandRecords;
@protocol SAAceCommand;

@protocol SVSAceCommandRecordsDelegate <NSObject>
- (void)aceCommandRecords:(SVSAceCommandRecords *)arg1 didChangeResultForCommand:(id <SAAceCommand>)arg2;
@end

