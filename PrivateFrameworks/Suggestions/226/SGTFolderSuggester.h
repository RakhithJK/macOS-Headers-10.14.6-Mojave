//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Suggestions/SGTSuggester.h>

@class NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface SGTFolderSuggester : SGTSuggester
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_rootPath;
}

@property(copy) NSURL *rootPath; // @synthesize rootPath=_rootPath;
- (void).cxx_destruct;
- (void)setInput:(id)arg1;
- (void)dealloc;
- (void)cleanup;
- (id)initWithRootPath:(id)arg1;

@end

