//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMTask : NSObject
{
    BOOL _complete;
    CDUnknownBlockType _taskCompleteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType taskCompleteBlock; // @synthesize taskCompleteBlock=_taskCompleteBlock;
@property(nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
- (void).cxx_destruct;
- (void)markAsComplete:(BOOL)arg1;

@end

