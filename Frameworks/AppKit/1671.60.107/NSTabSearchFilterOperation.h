//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSTabSearchFilterOperation : NSOperation
{
    CDUnknownBlockType _filterCompletionCallback;
    NSString *_filterText;
    NSArray *_tabInfo;
}

@property(copy, nonatomic) NSArray *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(readonly, nonatomic) NSString *filterText; // @synthesize filterText=_filterText;
@property(readonly, copy, nonatomic) CDUnknownBlockType filterCompletionCallback; // @synthesize filterCompletionCallback=_filterCompletionCallback;
- (void).cxx_destruct;
- (void)_completeOperationWithIndexes:(id)arg1;
- (void)main;
- (id)initWithTabInfoForFilteringTabs:(id)arg1 filterText:(id)arg2 completionCallback:(CDUnknownBlockType)arg3;

@end

