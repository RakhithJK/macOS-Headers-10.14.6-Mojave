//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface PVRegionOfInterestController : NSObject
{
    NSCache *_roiToPageCache;
}

+ (id)sharedROIController;
- (void).cxx_destruct;
- (void)clearCache;
- (id)roisForPage:(id)arg1;
- (id)linesForPage:(id)arg1;
- (void)analyzePage:(id)arg1;
- (id)init;

@end

