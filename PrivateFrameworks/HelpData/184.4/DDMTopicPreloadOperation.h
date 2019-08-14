//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class DDMBook, NSString;

@interface DDMTopicPreloadOperation : NSOperation
{
    NSString *_topicID;
    DDMBook *_book;
    BOOL _executing;
    BOOL _finished;
}

+ (id)operationWithTopicID:(id)arg1 book:(id)arg2;
- (void).cxx_destruct;
@property(readonly, getter=isFinished) BOOL finished;
@property(readonly, getter=isExecuting) BOOL executing;
- (void)setFinished:(BOOL)arg1;
- (void)setExecuting:(BOOL)arg1;
- (void)start;
- (void)main;
- (id)initWithTopicID:(id)arg1 book:(id)arg2;

@end

