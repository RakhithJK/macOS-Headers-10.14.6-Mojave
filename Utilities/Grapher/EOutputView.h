//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class EEvaluator;

@interface EOutputView : NSView
{
    EEvaluator *mEvaluator;
}

+ (id)textForDerivativeOf:(id)arg1 withRespectTo:(id)arg2 order:(unsigned long long)arg3;
- (void)display:(id)arg1;

@end
