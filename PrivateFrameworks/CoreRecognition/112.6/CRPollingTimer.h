//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRPollingTimer : NSObject
{
    CDStruct_1b6d18a9 _fireTime;
    BOOL _fired;
    BOOL _valid;
    id _target;
    SEL _selector;
}

@property(nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(nonatomic) BOOL fired; // @synthesize fired=_fired;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)invalidate;
- (void)evalAtTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_1b6d18a9 fireTime;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

