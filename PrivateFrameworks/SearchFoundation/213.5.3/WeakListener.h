//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SFFeedbackListener;

__attribute__((visibility("hidden")))
@interface WeakListener : NSObject
{
    id <SFFeedbackListener> _weakListener;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SFFeedbackListener> strongListener;
- (id)initWithListener:(id)arg1;

@end

