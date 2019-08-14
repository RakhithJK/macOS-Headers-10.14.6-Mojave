//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@interface TSDTapGestureRecognizer : UITapGestureRecognizer
{
    struct CGPoint mFirstTapLocation;
    BOOL mSavedFirstTapLocation;
    unsigned long long mTapCount;
}

@property(readonly, nonatomic) unsigned long long tapCount; // @synthesize tapCount=mTapCount;
@property(readonly, nonatomic) struct CGPoint firstTapLocation; // @synthesize firstTapLocation=mFirstTapLocation;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

