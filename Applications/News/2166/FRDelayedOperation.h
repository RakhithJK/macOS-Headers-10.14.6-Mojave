//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRDelayedOperation : NSObject
{
    CDUnknownBlockType _operationBlock;
    double _delayTime;
}

+ (id)operation:(CDUnknownBlockType)arg1 delay:(double)arg2;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
- (void).cxx_destruct;

@end

