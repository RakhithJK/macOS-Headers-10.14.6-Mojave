//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalFileSensor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    CDUnknownBlockType _eventBlock;
    BOOL _started;
    NSString *_path;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(readonly, nonatomic) BOOL started; // @synthesize started=_started;
@property(readonly, retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)description;
- (void)dealloc;
- (id)initWithPath:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
