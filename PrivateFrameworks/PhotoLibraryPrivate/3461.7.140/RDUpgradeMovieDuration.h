//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiFilter;

@interface RDUpgradeMovieDuration : NSObject
{
    LiFilter *_versionFilter;
}

- (void).cxx_destruct;
- (void)actionWithGroup:(id)arg1;
- (BOOL)isValidTime:(CDStruct_198678f7)arg1;
- (BOOL)determineAssetDurationForInputFileURL:(id)arg1 outAssetDuration:(CDStruct_198678f7 *)arg2;
- (id)inputFileURLForVersion:(id)arg1 master:(id)arg2 adjustmentType:(BOOL)arg3;
- (id)initWithVersionFilter:(id)arg1;

@end

