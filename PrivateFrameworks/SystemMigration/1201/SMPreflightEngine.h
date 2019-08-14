//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL;
@protocol SMCopyEngineDelegate;

@interface SMPreflightEngine : NSObject
{
    SMPreflightEngine *_engine;
    NSURL *_targetSystemPath;
    NSObject<SMCopyEngineDelegate> *_delegate;
    NSMutableArray *_preflightActions;
}

@property(retain) NSMutableArray *preflightActions; // @synthesize preflightActions=_preflightActions;
@property(nonatomic) __weak NSObject<SMCopyEngineDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) NSURL *targetSystemPath; // @synthesize targetSystemPath=_targetSystemPath;
@property __weak SMPreflightEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (unsigned long long)totalSize;
- (BOOL)run;
- (void)addAction:(id)arg1;
- (id)initWithTargetSystem:(id)arg1;
- (id)init;

@end
