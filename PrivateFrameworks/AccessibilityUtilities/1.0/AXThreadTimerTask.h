//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXThreadTimerTask : NSObject
{
    BOOL cancel;
    BOOL finished;
    BOOL active;
    CDUnknownBlockType _block;
}

@property(nonatomic, getter=isActive) BOOL active; // @synthesize active;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished;
@property(nonatomic, getter=isCancelled) BOOL cancel; // @synthesize cancel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)runAfterDelay:(float)arg1;
- (void)run;

@end
