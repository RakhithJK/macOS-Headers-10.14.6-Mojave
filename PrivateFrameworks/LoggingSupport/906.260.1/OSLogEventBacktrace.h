//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface OSLogEventBacktrace : NSObject
{
    NSArray *_frames;
}

@property(readonly, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (void)dealloc;
- (id)initWithSingleFrame:(id)arg1;
- (id)initWithBacktrace:(struct os_log_backtrace_s *)arg1;

@end

