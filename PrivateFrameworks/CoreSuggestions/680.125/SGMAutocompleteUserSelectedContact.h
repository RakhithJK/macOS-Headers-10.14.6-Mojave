//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMAutocompleteUserSelectedContact : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 wasSuggestedContact:(struct SGMTypeSafeBool_)arg2 wasKnownContact:(struct SGMTypeSafeBool_)arg3 app:(struct SGMContactDetailUsedApp_)arg4;
- (id)init;

@end

