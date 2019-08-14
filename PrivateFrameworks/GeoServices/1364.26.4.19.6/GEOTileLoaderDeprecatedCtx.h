//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderDeprecatedCtx : NSObject
{
    struct __CFRunLoop *_runloop;
    GEOTileKeyList *_originalList;
    GEOTileKeyList *_submittedList;
    GEOTileKeyList *_satisfiedList;
    GEOTileKeyList *_notLoaded;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _error;
    CDUnknownBlockType _finished;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) CDUnknownBlockType finished; // @synthesize finished=_finished;
@property(copy, nonatomic) CDUnknownBlockType error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)failure:(const struct _GEOTileKey *)arg1 error:(id)arg2 info:(id)arg3;
- (void)success:(const struct _GEOTileKey *)arg1 tile:(id)arg2 info:(id)arg3;
- (void)breakCycle;
- (void)cancel;
- (void)dealloc;
- (id)initWithList:(id)arg1;

@end

